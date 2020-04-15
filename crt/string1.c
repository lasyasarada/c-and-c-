//input-->lasya sarada
//output-->sarada lasya
#include<stdio.h>
#include<string.h>
int main(void){
	char s[1000];
	int i,n;
	//scanf("%s",s);
	gets(s);
	n=strlen(s);
	for(i=n-1;i>=0;i--){
		if(s[i]==' '){
			s[i]='\0';
			printf("%s ",&(s[i])+1);
		}
	}
	printf("%s ",s);
	return 0;
}
