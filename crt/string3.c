#include<stdio.h>
#include<string.h>
int main(void){
	char c[1000],s[1000];
	int i,ct=0,j;
	gets(c);
	gets(s);
	int n=strlen(c);
	int p=strlen(s);
	for(i=0;i<n-1;){
		for(j=0;j<p-1;){
			if(c[i]==s[j]){
				ct=ct+1;
				i++;
				j++;
			}
		if(ct==p)
			break;
		}
	}
	if(ct!=p){
		printf("-1");
	}
	else
		printf("%d",i);
	
}
