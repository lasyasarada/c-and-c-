/*input--->6
	  	   1 2 3 4 5 6
	       3
 output--->3 2 1 6 5 4
*/
//program works on only even number of elements
#include<stdio.h>
void f(int a[],int n);
void swap(int *p,int *q);
int main(){
	int n,k,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i+=k){
		f(a+i,k);//call-by value
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void f(int a[],int n){
	int i,j;
	for(i=0,j=n-1;i<j;i++,j--){
		swap(&a[i],&a[j]);//call-by reference
	}
}
void swap(int *p,int *q){
	int t=*p;
	*p=*q;
	*q=t;
}
