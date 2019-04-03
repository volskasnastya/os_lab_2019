#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
   int size = 100;
    pid_t children[size];
    for(int i = 0; i < size; i++){
        pid_t child = fork();
        if(child == 0)
            printf("le Zombie has arrived""\n"),exit(0);
        else
            children[i] = child, printf("Child created: %i"  "\n",child);
    }
    sleep(10);
    
    for(int i = 0; i < size; i++){
        wait(NULL);
        printf("Collecting zombie" "\n");
    }
    printf("\n");
    return 0;
}