#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h> 
#include <limits.h>

int main(int argc, char** argv)
{
	
		
		
		char cwd[PATH_MAX];
   if (getcwd(cwd, sizeof(cwd)) != NULL) {
     
   } else {
       perror("getcwd() error");
       return 1;
   }
		
		
		pid_t pid,cpid;
		
		
		
		
		
		
    pid = fork();
    if (pid == -1) 
    { 
    	printf("Error");
    }
    else if (pid == 0)
     {
     	
     	printf("Hi");
     	
     		
		
     	execl("/bin/ls","ls","-l",argv[0],NULL);
       
    }
    
    else { 
    
        wait(NULL);
       
        exit(0);
    }




}


