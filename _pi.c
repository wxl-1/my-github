#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	double s=1,e, pi, t;
	
	scanf("%lf",&e);
	for(n=2;n>=2 ;n++)
	{
	    t = 4 * (1.0/ (2*n-1));
	    s = s + pow(-1,(n-1)) *(1.0/(2*n-1));
	    pi = 4 * s;
	    if(t < e)
	    {
			printf("%d",n);
			break;
		}
		
   }
    
    return 0;
}


