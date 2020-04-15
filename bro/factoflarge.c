#include<stdio.h>
int factProduct(int a[],int f,int n)
{
	int c=0,i=0,s;
	while(i<n)
	{
		s=a[i]*f+c;
		a[i]=s%10;
		c=s/10;
		i++;
	}	
	while(c!=0)
	{
		a[n]=c%10;
		c=c/10;
		n++;		
	}    	
    return n;
}
     
int main(void)
{  
	int val,a[5000],i,n=1;
    a[0]=1;
    scanf("%d",&val);	
    for(i=2;i<=val;i++) {
		n=factProduct(a,i,n);    		
    }	
    
    printf("The value of %d! : \n",val);
	for(i=n-1;i>=0;i--)
    {
		printf("%d",a[i]);    	
    }
	printf("\n"); 	
    printf("Length of the %d! : %d",val,n);
   	return 0;
}
