#include<stdio.h>
int main(void)
{
	int T;
	int tcase = 1;

	scanf("%d",&T); 

	while(T--)
	{
		long long A, B, C;
		printf("Enter A, B, C\n");
	    scanf("&lld %lld %lld",&A, &B, &C);
		if(A + B > C)
            printf("Case #%d: true\n",tcase++);
        else
            printf("Case #%d: false\n",tcase++);
	}
	 
	 return 0;
}
