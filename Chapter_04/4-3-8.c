#include<stdio.h>
#include<math.h>

const int N=1001;

int i,j;
int p[1001];

int main(){
	int n=sqrt(N);
	memset(p,0,sizeof(p));

	for(i=2;i<=n;i++){
		if(!p[i]){
			for(j=2*i;j<=N;j+=i)
				p[j]++;
		}
	}

	int flag=0;
	for(i=100;i<1000;i++){
		if(!p[i]){
			printf("%6d",i);
			if(!(++flag%5))
				printf("\n");
		}
	}
	return 0;
}