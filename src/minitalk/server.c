#define SERVER
#include "minitalk.h"

struct s_gl_env gl_env;

void getclientpid(int sig){
  gl_env.clientpid <<= 1;
  if(sig == SIGUSR1){
      gl_env.clientpid |= 1;
    }
}

void getmessage(int sig){
  static char thischar = 0;
  static int i = 0;
  
  thischar <<= 1;
  
  if(sig == SIGUSR1){
      thischar |= 1;
    }
  i++;
  if(i >= 8){
      if(thischar == '\0'){
         gl_env.done = 1;
         kill(gl_env.clientpid, SIGUSR1);
      }
      else{
         my_char(thischar);
      }
      thischar = 0;
      i = 0;
    }
  
  kill(gl_env.clientpid, SIGUSR2);
}

void killserver(){
  my_str("\nSession Terminated\n");
  exit(0);
}

int main(){
  int count;
  
  signal(SIGINT, killserver); 
  my_str("=------------------------------===============---------------------------------=\n");
  my_str("=------------------------------=-MINI SERVER-=---------------------------------=\n");
  my_str("=------------------------------===============---------------------------------=\n");
  my_str("The Server PID: ");
  my_int(getpid());
  my_str("\n");
  
  while(1){
    gl_env.clientpid = 0;
    gl_env.done = 0;
      
    signal(SIGUSR1, getclientpid);
    signal(SIGUSR2, getclientpid);
      
    for(count = 0; count < (8 * sizeof(pid_t)); count++){
	     pause();
	  }
      
    signal(SIGUSR1, getmessage);
    signal(SIGUSR2, getmessage);
      
    kill(gl_env.clientpid, SIGUSR1);
		
		while(!gl_env.done){
		  pause();
		}
		my_str("\n");
  }
  
  return 0;
}