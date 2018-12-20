#include <stdio.h>
#include <unistd.h>

void main()
{

	printf("The PID is : %ld\n",(long)getpid());
	printf("The PPID is : %ld\n",(long)getppid());
	while(1);


}
