#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    pid_t id;
    pid_t id1;
    unsigned char buff1[SIZE];
    unsigned char buff2[SIZE];

    id = fork();
    id1 = fork();
    pipe(pfd1);
    pipe(pfd2);

    if (0 == id)
    {
        printf("Child process1\n");
        close(pfd1[1]);            
        read(pfd1[0], buff1, SIZE);
        printf("Child: got data: %s\n", buff1);
        printf("Child ID: %d\n", id);
    }
    else
    {
        printf("Parent process1\n");
        
        printf("Parent ID: %d\n", id);
    }
    if(0 == id1){
    printf("chlid process2\n");
     close(pfd1[2]);           
     read(pfd2[0], buff2, SIZE);
     printf("Child: got data: %s\n", buff2);
    printf("chlid ID: %d\n",id1);
    }
    
    else{
    printf("parent process2\n");
    printf("parent ID: %d\n", id1);
    }
    
    
    return 0;
}
