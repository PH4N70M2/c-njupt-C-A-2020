#include<stdio.h>

int isnum(char c){
	return c<='9'&&c>='0';
}

int main(){
	char s[101]="";
	gets(s);
	int i;
	for(i=0;s[i];i++){
		if(/*!*/isnum(s[i])){
//			s[i]=0;
			printf("%c",s[i]);
		}
	}

//	for(i=0;i<101;i++)
//		if(s[i])
//			printf("%c",s[i]);

}
