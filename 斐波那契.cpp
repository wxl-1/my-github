#include<stdio.h>
int main()
{
    int i;
    float t,s=0,a=2,b=1;
    for(i=1;i<=20;i++)
    {
    	s=s+a/b;
    	t=a;
    	a=a+b;
    	b=t;
	}
	printf("%f",s);
	
	return 0;
}
