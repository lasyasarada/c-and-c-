#include<stdio.h>
int main(void){
	int m,n,i,j,s=0;
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==j)
				s+=a[i][j];
		}
	}
	printf("%d",s);
}
