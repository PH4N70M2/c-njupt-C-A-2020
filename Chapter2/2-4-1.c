#include<stdio.h>
int main(){

	int a=sizeof(char);
	int b=sizeof(int);
	int c=sizeof(short);
	int d=sizeof(long);
	int e=sizeof(unsigned int);
	int f=sizeof(float);
	int g=sizeof(double);
	
	printf("sizeof(char)=%d\n",a);
	printf("sizeof(int)=%d\n",b);
	printf("sizeof(short)=%d\n",c);
	printf("sizeof(long)=%d\n",d);
	printf("sizeof(unsigned int)=%d\n",e);
	printf("sizeof(float)=%d\n",f);
	printf("sizeof(double)=%d\n",g);

	return 0;
}
