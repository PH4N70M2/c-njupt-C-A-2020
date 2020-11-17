#include<stdio.h>
#include<string.h>
#include<math.h>

char p[2001];
int q[265];

void makeprime(int n){
	int i,j;
	int m=sqrt(n*1.0);
	memset(p,0,sizeof(p));
	for(i=2;i<=m;i++)
		if(!p[i])
			for(j=i*i;j<=n;j+=i)
				p[j]++;

	for(i=2,j=0;i<=n;i++)
		if(!p[i])
			q[++j]=i;
	q[0]=j;
}

int main(){
	makeprime(2000);
	int i,j;
	int flag=0;
	for(i=4;i<=2000;i+=2){
		for(j=1;j<=q[0];j++)
			if(!p[i-q[j]]){
				printf("%4d=%4d+%4d ",i,q[j],i-q[j]);
				break;
			}
		if(!(++flag%4))printf("\n");
	}
	return 0;
}