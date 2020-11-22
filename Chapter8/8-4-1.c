#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char s[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int midx(int x, int b){//max_index b->base
	int t=1,i=1;
	for(;(t*=b)<x;i++);
	return i;
}

void d2n(int x, int n,int *dep, char *re){
	if(!x)
		return;
	else{
		d2n(x/n,n,dep,re);
		re[(*dep)++]=s[x%n];
	}
}

int main(){
	int x,n=16;
	scanf("%d",&x);

	int len=midx(x,n);
	char *ans=(char*)malloc(len);
	memset(ans,0,len);
//	char /***/ans[100]; 

	int d=0;
	d2n(x,n,&d,ans);

	int i;
	for(i=0;i<d;i++)
		printf("%c",ans[i]);

	free(ans);
}
