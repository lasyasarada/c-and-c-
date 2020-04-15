#include<stdio.h>
#include<stdbool.h>
const int n,m;
int findTimeforEveryonetobeInfected(int a[n][m]){
	int changeto=0;//change to infected	
	int infected=1; //initail infected value
	int i,j;//outer and inner loop variables
    while (true) //check every person and stop if no one to be checked and changeto=0 and return infected
	{ 
        for(i=0;i<n;i++){ 
            for(j=0;j<m;j++){ 
                if(a[i][j]==infected){ //if infected
                	if(a[i][j+1]==0 && i>=0 && i<n && j+1>=0 && j+1<m){ //check right
                        a[i][j+1]=a[i][j]+1; 
                        changeto=1; 
                    } 
                    if(a[i][j-1]==0 && i>=0 && i<n && j-1>=0 && j-1<m){ //check left
                        a[i][j-1]=a[i][j]+1; 
                        changeto=1; 
                    } 
                	if(a[i-1][j]==0 && i-1>=0 && i-1<n && j>=0 && j<m){ //check up
                        a[i-1][j]=a[i][j]+1; 
                        changeto=1; 
                    } 
                    if(a[i+1][j]==0 && i+1>=0 && i+1<n && j>=0 && j<m){ //check down
                        a[i+1][j]=a[i][j] + 1; 
                        changeto=1; 
                    } 
                    
                } 
            } 
        } 
        if(changeto!= 1) 
            break; 
        changeto= 0; 
        infected++; 
    } 
    for(i=0;i<n;i++) { 
        for(j=0;j<m;j++){ 
            if(a[i][j] == 0) 
               	return -1;//if not infected
        } 
    } 
    return infected-1;//return time taken
}
int main(void){
	int i,j; 
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);//read the data from user
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			printf("%d ",a[i][j]);//print the data that is read from user
		printf("\n");
	}
    printf("\n\nTime taken to infect everyone :: %d",findTimeforEveryonetobeInfected(a));//is called to find the time taken
	return 0;
}
