#include<stdio.h>
int leftrotate(int a[],int n,int k){
	int i,j;
	for(i=0;i<n;i++){
		int first=a[0];
		for(j=0;j<k-1;j++){
			a[j]=a[j+1];
			printf("%d ",a[j]);
		}
		a[j]=first;
		printf("%d ",a[j]);
	}
	//printf("%d ",a[j]);
}
int rightrotate(int a[],int n,int k){
	int i,j;
	for(i=0;i<n;i++){
		int last=a[k-1];
		for(j=k-1;j>0;j--){
			a[j]=a[j-1];
			printf("%d ",a[j]);
		}
		a[j]=last;
		printf("%d ",a[j]);
	}
	//printf("%d ",a[j]);
}
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	leftrotate(a,n,k);
	rightrotate(a,n,k);
}
