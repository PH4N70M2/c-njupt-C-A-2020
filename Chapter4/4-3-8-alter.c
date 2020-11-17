#include<stdio.h>
#include<math.h>

int i,j;

int p(int x){
	if(x&1){
		int k=sqrt(x*1.0);
		int i=3;
		for(;i<=k;i+=2){
			if(!(n%i)){
				return 0;
			}
		}
		return 1;
	}
	else{
		return 0;
	}
	
}

int main(){
	int flag=0;
	for(i=101;i<1000;i+=2){
		if(p(i)){
			printf("%6d",i);
			if(!(++flag%5))
				printf("\n");
		}
	}
	return 0;
}