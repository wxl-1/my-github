#include<stdio.h>
int main (void)
{
	int a[100],b[100];
	int i,j,n,p,t=0,m=0,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	    scanf("%d",&b[j]);
	for(i=0;i<n;i++)
	   { 
	       for(j=0;j<n;j++)
	          {
				  
			    if(a[i]==b[j])
	               {
	               	   for(p=i;p<n;p++)
						  if(a[i]==a[p+1])
	               	    t++;
	               	  if(b[i]==b[p+1])
	               	    m++; 
						if(t==m)   
					   count=1;
	             	
				   }
			}
		  
	    }
	      if(count != 0 )
		      printf("1");
		   else
		      printf("0");
		   	     
                
	return 0;
}


