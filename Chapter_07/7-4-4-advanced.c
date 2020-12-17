#include<stdio.h>

int joseph(int n, int m){
	int x=0,i=2;
	for(;i<=n;i++)
		x=(x+m)%i;
	return x;
}

int josephRE(int n, int m){
	return (n==1)?0:(josephRE(n-1,m)+m)%n;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",josephRE(n,m)+1); 	//it starts from 0. To satisfy the OJ requirement, I add 1 to it.
//	printf("%d",joseph(n,m)+1);	//both availble, choose as you like.
}
