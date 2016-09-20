#define CLIENT
#include "minitalk.h"

int gl_ack;

void sendpid(pid_t clientpid, pid_t serverpid){
  int i;
  int pidsize = 8 * sizeof(pid_t);
  int mask = 1 << (pidsize - 1);
  
  for(i = 0; i < pidsize; i++){
      if(clientpid & mask) kill(serverpid, SIGUSR1);
      else{
         kill(serverpid, SIGUSR2);
      }
      clientpid <<= 1;
      usleep(5000);
    }
}

void sendmessage(char* message, pid_t serverpid){
  char mask;
  char i;
  
  if(message != NULL){
    mask = 0x80;
    gl_ack = 0;
    i = 0;
    while(!gl_ack){
      if(*message & mask){
        kill(serverpid, SIGUSR1);
      }

      else{
        kill(serverpid, SIGUSR2);
      }

    i++;    
    if(i == 8){
      message++;
      i = 0;
    }

    else{
     *message <<= 1;
    }

    pause();
    }
  }
}

void donothing(){
}

void acknowledge(){
  gl_ack = 1;
}

void myalarm(){
  my_str("Error: Server timed out.\n");
  exit(0);
}


int main(int argc, char** argv){
  
  pid_t serverpid;
  gl_ack = 0;
  
  if(argc < 3){
    my_str("Usage: ./client serverpid message1 [message2] ... \n");
    exit(0);
  }

  serverpid = my_atoi(argv[1]);
  if(serverpid <= 0){
    my_str("Error: Incorrect server PID.\n");
    exit(0);
  }
  
  signal(SIGUSR1, acknowledge);
  signal(SIGUSR2, donothing);
  signal(SIGALRM, myalarm);
  
  sendpid(getpid(), serverpid);
  
  if(!gl_ack){
    alarm(2);
    pause();
  }

  alarm(0);
  sendmessage(my_vect2str(&argv[2]), serverpid);

  return 0;
}
