#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,i;
	double x, e, t,y,s = 1;
	scanf("%lf %lf",&x, &e);
	y = x;

	for (n=2;n>=2;n++)
	    {
		    for(i=1;i<=(2*n-1);i++)
		    {
				
				s=s*i;
		    }
	        t = (double)pow(x,(2*n-1)) / s;
	        y =y+ pow(-1,(n-1)) * pow(x,(2*n-1)) / s;
	        if(t < e)
	            {
				    printf("%d %.9lf", n, y);
	                break;
	            }
	        else 
	            {
	            	i=1;
	            	s=1;
				}
	    }
	    
	    
	return 0;
}


