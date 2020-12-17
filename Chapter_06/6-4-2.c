#include<stdio.h>

int m[3][3];

int f(int a[3][3]){
	//printf("%d",a[0][0]);
	return a[0][1]==a[1][0] && a[0][2]==a[2][0] && a[1][2]==a[2][1];
}


int main(){
	int n,i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&m[i][j]);
	printf("%d",f(m));
	return 0;
}