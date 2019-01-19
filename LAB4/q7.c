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
printf(“iter”);
}
else
{
printf(“iter”);
pid2=fork();
}
return 0;
}
