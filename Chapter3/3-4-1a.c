#include<stdio.h>

int f(int n){
	return (n>0)?n:-n;
}

int main(){

	int x;
	scanf("%d", &x);
	x=f(x);
//	printf("%d\n",x);
	int ans=0;
	do
	{
		ans+=x%10;
		x/=10;
	}while(x);
	
	printf("%d",ans); 
	return 0;
}
