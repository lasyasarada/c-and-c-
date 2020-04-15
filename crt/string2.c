//input--> talentio private limited
//output-->talenio prvtimed


#include<stdio.h>
#include<string.h>
int main(void){
	char s[1000];
	gets(s);
	int n=strlen(s);
	int t[1000]={0};
	char c[n];
	int i,j;
	char *p=strlwr(s);
	//a=s[0];
	for(i=0;i<=n-1;i++){
		char t1=p[i];
		t[t1]++;
		if(t[t1]%2!=0)
			printf("%c",s[i]);
		//printf(" ");
	}
//	printf("%s",c);
	return 0;
}
