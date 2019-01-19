#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdio.h> 


int main()
{

int pid,pid2;

pid=fork();

if(pid)
{
pid2=fork();
printf("iter\n");
}

else
{
printf("iter\n");
pid2=fork();
}




printf("PID : %d\n",getpid());




return 0;
}
