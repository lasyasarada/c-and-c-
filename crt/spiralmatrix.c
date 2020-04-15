/*
	l			r
t	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25
b	26 27 28 29 30






algorithm--->
dir=0 right
dir=1 down
dir=2 left
dir=3 up
dir=0
while(l<=r&&t<=b)
{
	if(dir==0){
		for(int i=l;i<=r;i++)
			pf(a[t][i]);
	}
	t++;
	dir++;
	else if(dir==1){
		for(int i=t;i<=b;i++)
			pf(a[i][r]);
	}
	r--;
	dir++;
	else if(dir==2){
		for(int i=r;i>=l;i--)
			pf(a[b][i]);
	}
	b--;
	dir++;
	else if(dir==3){
		for(int i=b;i>=t;i--)
			pf(a[i][l]);
	}
	l++;
	dir=0;
}
or else instead of dir we can wite commonly
dir=(dir+1)%4

*/





#include <stdlib.h>
#include <stdio.h>
void f(int m,int n,int a[m][n]){
	int p = 0, q = 0;
	int i;
    while (p < m && q < n) { 
        for (i = q; i < n; ++i) { 
            printf("%d",a[p][i]); 
        } 
        p++; 
        for (i = p; i < m; ++i) { 
            printf("%d",a[i][n-1]); 
        } 
        n--; 
        if (p < m) { 
            for (i = n - 1; i >= q; --i) { 
                printf("%d",a[m-1][i]);  
            } 
            m--; 
        } 
        if (q < n) { 
            for (i = m - 1; i >= p; --i) { 
                printf("%d",a[i][q]);  
            } 
            q++; 
        } 
    } 
}
int main()
{
    int n,m,i,j;
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
    f(m,n,a);
    return 0;
}


