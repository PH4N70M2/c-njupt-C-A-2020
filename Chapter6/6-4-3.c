#include<stdio.h>
#include<string.h>

int f(int x){
	return (x%77) && (!(x%7)||!(x%11));
}
//7 and 11 are primes, so you can just multiply, it works too.

int main(){
	int a,b,i;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
		if(f(i))
			printf("%d ",i);
	
	return 0;
}