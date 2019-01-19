#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdio.h> 
void  main() 
{ 
  
	pid_t cid = getpid();  
	
	printf("Curent Process ID : %d \n",cid);
    pid_t cpid = fork();
    printf("CPID : %d\n", cpid);
  
    if (cpid == 0) 
    {
    	 
    	exit(0);
    }
   
    else
    {
    
    	sleep(1);
    	system("ps");
    	sleep(5);
    }        
        
  
    return; 
} 
