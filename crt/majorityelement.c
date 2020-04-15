#include<stdio.h>
int majEle(int a[],int n){
    int maxc=0,maxv=0,i,j;
    for( i=0;i<n;i++){
        int c=0;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c>maxc){
            maxc=c+1;
            maxv=a[i];
        }
    }
    if(maxc > n/2)
    return maxv;
    else 
    return -1;
}
int sort(int a[],int n){
    int t,i,j;
    for( i=1;i<n;i++){
        for( j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
   }
int main() {
    int t,n,i,j;
    //scanf("%d",&t);
//	while(t--){
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	   sort(a,n);
	   printf("%d\n",majEle(a,n));
//	}
	return 0;
}
