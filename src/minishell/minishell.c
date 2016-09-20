/*
 * We pledge our honor that we have abided by the Stevens honor system.
 * Henry Thomas and Kevin Furlong
 */

#include <sys/wait.h>
#include "my.h"
#define BUFFER_SIZE 100

int main(int argc, char** argv) {
    int size;
    int process_id;
    int return_value;
    char* current;
    char** user_input;
    char buffer[BUFFER_SIZE];

    while (1) {
        my_str("Hanky v1.0> ");
        current = getcwd(current, BUFFER_SIZE);
        my_str(current);
        my_str("\n~ ");

        if ((size = read(0, buffer, BUFFER_SIZE - 1)) < 0) {
            my_str("Error reading\n");
            exit(0);
        }
        buffer[size - 1] = '\0';
        user_input = my_str2vect(buffer);

        if (user_input[0] != NULL) {
            if (my_strcmp(user_input[0], "help") == 0) { //help commmand
                my_str("\n-------------------Welcome to my minishell--------------------\n");
                my_str("Here are a list of availible commands:\n");
                my_str("    cd <example/c/hello/> - Is used to change the current working directory.\n");
                my_str("    exit - Exits our minishell.\n");
                my_str("    help - Takes you right here, woah!\n");
                my_str("    <executable> <params> - Allows you to execute programs while in their respective working directory.\n");
                my_str("\n\n");
            }else if (my_strcmp(user_input[0], "exit") == 0) { //exit command
                my_str("Terminating....\nCome back soon!");
                int i = 0;
                if (user_input != NULL) {
                    while(user_input[i] != NULL){
                        free(user_input[i]);
                        i++;
                    }
                    free(user_input);
                }
                exit(0);
            } else if (my_strcmp(user_input[0], "cd") == 0) { //cd command
                if ((return_value = chdir(user_input[1])) < 0) { 
                    if (user_input[1] == NULL) {
                        my_str("User input not valid\n");
                    } else {
                        my_str("<");
                        my_str(user_input[1]);
                        my_str("> No such Directory\n");
                    }
                }
            } else {
                if ((process_id = fork()) < 0) { //executables
                    my_str("fork error\n");
                    exit(0);
                }

                if (process_id > 0) {
                    wait(NULL);
                } else {
                    if ((return_value = execvp(user_input[0], user_input)) < 0) { 
                        my_str(user_input[0]);
                        my_str(": Command not found... seriously? There are like 4 commands, try typing help.\n");
                        exit(0);
                    }
                }
            }
            int i = 0;
            if (user_input != NULL) {
                while(user_input[i] != NULL){
                    free(user_input[i]);
                    i++;
                }
                free(user_input);
            }
        }
    }
    return 0;
}
