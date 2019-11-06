#include<stdio.h>

int main (void)
{
	int a[100],b[100],c[100];
	int i,j,n,m,u,t,f=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);	
	scanf("%d",&m);    
	for(j=0;j<m;j++)
	    scanf("%d",&b[j]);
	    t=1;
	    for(i=0;i<n;i++)
		  { 
		    for(j=0;j<m;j++)
			 {
			 
			    if(a[i]==b[j])
				{
					t=0;
				 } 
			}
		if(t)
		    {
			  
			c[f]=a[i];
			f++;
		}

		t=1;
        }
	
	t=1;
	    for(i=0;i<m;i++)
		   {
		    for(j=0;j<n;j++)
			   {
			   
			    if(a[j]==b[i])
				{
					t=0;
					
				 } 
			}
		if(t)
		    {
			c[f]=b[i];
			f++;
		}
	
		t=1;
		}
	for(i=0;i<f-1;i++)
	   for(j=0;j<f-i-1;j++)
          if(c[j]>c[j+1])
		  {
		  	u=c[j];
		  	c[j]=c[j+1];
		  	c[j+1]=u;
			  }	
			  
			  		  
       	for(i=0;i<f;i++)        
	printf("%d ",c[i]);
	
	return 0;
}
