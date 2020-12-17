#include<stdio.h>

void T(int i, int m){
	int j;
	for(j=1;j<=m+1-i;j++)
		printf(" ");
	for(j=1;j<=i*2-1;j++)
		printf("*");
	printf("\n");
}

void printDiamond (int n){
	int m=n/2;
	int i,j;
	for(i=1;i<=m+1;i++){
		T(i,m);
	}
	for(i=m;i>=1;i--){
		T(i,m);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printDiamond(n);
	return 0;
}