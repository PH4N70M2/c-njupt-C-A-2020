#include<stdio.h>

int sgn(int x){
	return x?x>0?1:-1:0;
}

int main(){
	int x;
	scanf("%d",&x);
	printf("%d",sgn(x));
	return 0;
}