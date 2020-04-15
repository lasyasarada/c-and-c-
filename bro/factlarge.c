#include<stdio.h>
int main(void)
{  
	int val,arr[1000],i,j,n=1;
    arr[0]=1;
    int v;
    scanf("%d",&val);	
    for(i=2;i<=val;++i) {
		int c=0,i,s;
		for(j=0;j<n;j++)
		{
			s=arr[j]*i+c;
			arr[j]=s%10;
			c=s/10;
		}	
		while(c!=0)
		{
			arr[n]=c%10;
			c=c/10;
			n++;		
		}    	
    	 		
    }	
    v=n;
    printf("%d \n",v);
    for(i=v-1;i>=0;--i)
    {
		printf("%d",arr[i]);    	
    } 	
   	return 0;
}
