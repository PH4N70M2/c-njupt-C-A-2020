#include<stdio.h>

int main(){
	int i,t;
	int max=0x80000002;
	int min=0x7FFFFFFE;
//	printf("%d\n%d\n",max,min);
	for(i=1;i<=4;i++){
		scanf("%d",&t);
		if (t>max) max=t;
		if (t<min) min=t;
	}
	printf("max=%d, min=%d",max,min);
	return 0;

}
