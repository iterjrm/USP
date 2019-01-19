#include<stdio.h>

#include<unistd.h>

#include <limits.h>


void main()
{
	
			
		char cwd[PATH_MAX];
		
   if (getcwd(cwd, sizeof(cwd)) != NULL) 
   {
     printf("Current Working Directory Is : %s\n",cwd);
   } 
   else 
   {
       perror("getcwd() error");
       return;
   }
   
}
