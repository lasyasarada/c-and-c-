#include<stdio.h>
/*
 	*
   ***
  *****
 *******
*********
*/
void pattern1(int n){
	int row,c;
	for (row = 1; row <= n; row++)  // Loop to print rows
    {
		for (c = 1; c <= n-row; c++)  // Loop to print spaces in a row
      		printf(" ");

    	for (c = 1; c <= 2*row - 1; c++) // Loop to print stars in a row
     		printf("*");

    printf("\n");
  	}
}
/*
*
**
***
****
*****
*/
void pattern2(int n){
	int c,k;
	for (c = 1; c <= n; c++)
  	{
    	for(k = 1; k <= c; k++)
      		printf("*");

    	printf("\n");
  	}
}
/*
   *
  *A*
 *A*A*
*A*A*A*
*/
void pattern3(int n){
	int c,k;
	for (c = 1; c <= n; c++)
  	{
    	for (k = 1; k <= n-c; k++)
      		printf(" ");

    	for (k = 1; k < c; k++)
      		printf("*A");

    	printf("*\n");
  	}
}
/*
    1
   232
  34543
 4567654
567898765
*/
void pattern4(int n){
	int c,row,t=1;
	for (row = 1; row <= n; row++) {
    	for (c = 1; c <= n - row; c++)
      		printf(" ");
    	t = row;
    for (c = 1; c <= row; c++) {
      printf("%d", t);
      t++;
    }
    t = t - 2;
    for (c = 1 ; c < row; c++) {
      	printf("%d", t);
      	t--;
    }
    printf("\n");
  	}
}
/*
1  2  4  7
3  5  8 11
6  9 12 14
10 13 15 16
*/
void pattern5(int r){
	int n, p = 1, a[100][100], j, m, k;
  	for (j = 1; j <= r; j++) {
    	m = 0;
    	n = j;
    	for (k = 1; k <= j; k++)
     	 	a[m++][--n] = p++;
  	}
  	for (j = 1; j <= r-1; j++) {
    	m = j;
    	n = r-1;
    	for (k = 1; k<= r-j; k++)
      		a[m++][n--] = p++;
  	}
  	for (j = 0; j <= r-1; j++) {
    	for (k = 0; k <= r-1; k++)
      		printf("%d ", a[j][k]);
   	printf("\n");
  	}
}
/*
         *
       * *
     * * *
   * * * *
 * * * * *_
 */
void pattern6(int n){
	int i,j,k;
	for (i=1; i<=n; i++) {
		for (j=5; j>=i; j--) {
			printf(" ");
		}
		for (k=1; k<=i; k++) {
			printf("*");
		}
		printf("\n");
	}
}
/*
 * * * * *
   * * * *
     * * *
       * *
         *_
*/
void pattern7(int n){
	int i,j,k,samp=1;
	for (i=n; i>=1; i--) {
		for (k=samp; k>=0; k--) {
			printf(" ");
		}
		for (j=i; j>=1; j--) {
			printf("*");
		}
		samp = samp + 1;
		printf("\n");
	}
}
/*
 * * * * *
 * * * *
 * * *
 * *
 *_
*/
void pattern8(int n){
	int i,j;
	for (i=n; i>=1; i--) {
		for (j=1; j<=i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
/*
         *
       * *
     * * *
   * * * *
 * * * * *
   * * * *
     * * *
       * *
         *_
*/
void pattern9(int n){
	int i,j,k,samp=1;
	for (i=1; i<=n; i++) {
		for (k=samp; k<=n; k++) {
			printf(" ");
		}
		for (j=0; j< i; j++) {
			printf("*");
		}
		samp = samp + 1;
		printf("\n");
	}
	samp = 1;
	for (i=n-1; i>=1; i--) {
		for (k=samp; k>=0; k--) {
			printf(" ");
		}
		for (j=i; j>=1; j--) {
			printf("*");
		}
		samp = samp + 1;
		printf("\n");
	}
}
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15_
*/
void pattern10(int len){
	int rw, c, no=1 ;
	for (rw=1; rw<=len; rw++) {
		printf("\n");
		for (c=1; c<=rw; c++) {
			printf(" %2d ", no);
			no++;
		}
	}
}
/*
          0          
        1 0 1        
      2 1 0 1 2      
    3 2 1 0 1 2 3    
  4 3 2 1 0 1 2 3 4  
5 4 3 2 1 0 1 2 3 4 5_
*/
void pattern11(int no){
	int i,y,x=35;
	for (y=0;y<=no;y++) {
		goto(x,y+1);
		for (i=0-y; i<=y; i++) {
			printf(" %3d ", abs(i));
			x=x-3;
		}
	}
}
int main(void){
	int row, c, n;
	printf("N value:\n");
 	scanf("%d", &n);
	pattern1(n);
	printf("\n");
	pattern2(n);
	printf("\n");
	pattern3(n);
	printf("\n");
	pattern4(n);
	printf("\n");
	pattern5(n);
	printf("\n");
	pattern6(n);
	printf("\n");
	pattern7(n);
	printf("\n");
	pattern8(n);
	printf("\n");
	pattern9(n);
	printf("\n");
	pattern10(n);
	printf("\n");
	pattern11(n);
	printf("\n");
  	return 0;
}
