#include<stdio.h>

int isNarcissus(int n){
	int t=n;
	int s=0;
	int i;
	do{
		i=t%10;
		s+=i*i*i;	
	}
	while(t/=10);
	return (s-n)?0:1;
}

int main(){
	int n;
	for(n=100;n<=999;n++)
		if(isNarcissus(n))
			printf("%5d",n);
	return 0;
}