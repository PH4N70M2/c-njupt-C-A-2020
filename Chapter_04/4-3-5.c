#include<stdio.h>

int gcd(int a, int b){
	int c;
	while((c=a%b)){
		a=b;b=c;
	}
	return b;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",gcd(a,b));
	return 0;
}