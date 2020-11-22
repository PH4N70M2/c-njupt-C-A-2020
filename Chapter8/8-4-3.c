#include<stdio.h>
#include<string.h>

int main(){
	char s[101];
	gets(s+1);
	int i;
	for(i=strlen(s)-1;i;i--){
		printf("%c",s[i]);
	}
}
