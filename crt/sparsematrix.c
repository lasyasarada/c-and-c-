#include<stdio.h>
int main(void){
	//scanf("%d%d",&n,&m);
	int n,m,i,j,c=0,c1=0;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }	
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j]==0)
            	c=c+1;
            else
            	c1+=1;
        }
    }	
    if(c>c1)
    	printf("Sparse Matrix");
    else
    	printf("Not");
}
