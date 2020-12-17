#include<stdio.h>

int main(){
//	printf("1 1 2 3 5 8 13 21 34 55");
	int a=1,b=1;
	int c;
	printf("1 1");
	
	int i;
	for(i=3;i<=10;i++){
		c=a+b;
		printf(" %d",c);
		a=b;b=c;
	}
	return 0;
}