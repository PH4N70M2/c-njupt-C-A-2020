#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void T(int *a, int *b){
	int i;
	for(i=1;a[i];i++){  //start from i=1 to ensure a[i-1] always fall in the valid range.
		printf("%15d",a[i]);
		b[i]=a[i-1]+a[i];
	}
	a[i]=b[i]=1;
	
	for(i=1;a[i];i++)
		a[i]=b[i];
	
	printf("\n");
}


int main(){

	int i,n;
	scanf("%d",&n);
	int m=(n+2)<<2;   // T(a,b) makes a[n+1]=b[n+1]=1, so 4 extra bytes are needed.
	int *a=(int*)malloc(m);
	int *b=(int*)malloc(m);
	memset(a,0,m);
	memset(b,0,m);
	a[1]=1;

	for(i=1;i<=n;i++)
		T(a,b);
	
	return 0;
}
