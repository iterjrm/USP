#include <stdio.h>
#include <stdlib.h>
 
int main(int argc,char *argv[])
{
  	int i,j;
	int temp;

	int array[argc];

	

	

	if(argc>=2)
	{
	for (j =1; j<argc; j++)
		{
			array[j-1]=atoi(argv[j]);
		}

		
		for (i= 0 ; i < argc-1; i++)
 		 {
    			for (j = 0 ; j < argc-i; j++)
    			{

     				 if (array[j]> array[j+1])
      				{
      					  temp       = array[j];	
        				  array[j]   = array[j+1];
        				  array[j+1] = temp;
      				}
    			}
  		}
 

	}


  
  printf("Sorted list in ascending order:\n");
 
 for (j =0; j<argc-1; j++)
		{
			printf("%d\t",array[j]);
		}
 
  return 0;
}
