#include<stdio.h>
int main(void)
{
	int i, j, t, m, n; 
	for(i=1;i<=7;i++)
	   {
	   	  if(i<=4)
			{
			    printf("\n");
		        for (j=1;j<=4-i;j++)
	                printf(" ");
	    	    for(t=1;t<=2*i-1;t++)    
			        printf("*");
		    }
		   else
		    {
		    	printf("\n");
		    	for(n=1;n<=i-4;n++)
		    	    printf(" ");
		    	for(m=1;m<=7-2*(i-4);m++)
		    	    printf("*");
			}
			 
		
        }
    
    
	
	return 0; 
}
