#include<stdio.h>
#include<string.h>

int a[300],b[300];

void T(){
	int i;
	for(i=1;a[i];i++){
		printf("%5d",a[i]);
		b[i]=a[i-1]+a[i];
		
	}
	a[i]=b[i]=1;
	
	for(i=1;a[i];i++)
		a[i]=b[i];
	
	printf("\n");
}


int main(){
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));	
	a[1]=1;
	
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		T();
	
	return 0;
}