#include<stdio.h>

void out(int a[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void r1mov(int a[], int n){
	int t=a[n-1];
	int i=0;
	for(i=n-1;i;i--)
		a[i]=a[i-1];
	a[0]=t;
}

void init(int a[],int *m){
	int i;
	scanf("%d",m);
	for(i=0;i<(*m);i++)
		scanf("%d",&a[i]);
}

int main(){
	int n;
	int a[100];

	init(a,&n);

	int m,i;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		r1mov(a,n);
	}

	out(a,n);
}
