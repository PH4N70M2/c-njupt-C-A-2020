#include<stdio.h>

void swp(int *a, int *b){
	int p;
	 p=*a;
	*a=*b;
	*b= p;
}

void selectsort(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		int pos=i;
		for(j=i+1;j<n;j++){
			if(a[pos]>a[j])
				pos=j;
		}
		if(pos!=i)
			swp(a+pos,a+i);
	}	
}

void init(int a[],int *m){
	int i;
	scanf("%d",m);
	for(i=0;i<(*m);i++)
		scanf("%d",&a[i]);
}

void out(int a[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

int main(){
	int n;
	int a[10];

	init(a,&n);
	selectsort(a,n);
	out(a,n);
}
