#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h> 

int main(int argc,char *argv[])
{
	
		int n;
		
		n = atoi(argv[1]);
		pid_t pid,cpid;
		printf("%d \n",n);
		
		
		for (int i=0; i<n; i++) 
{
    pid = fork();
    if (pid == -1) 
    { 
    	printf("Error");
    }
    else if (pid == 0)
     {
     	
     	
     	printf("Child Id : %d ... Parent ID : %d\n",getpid(),getppid());
     	
       
    }
    
    else { 
    
        wait(NULL);
        printf("Terminating PID : %d\n",getpid());
        exit(0);
    }
}




}


