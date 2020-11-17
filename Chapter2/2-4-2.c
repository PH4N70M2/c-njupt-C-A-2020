#include<stdio.h>

const double pi=3.14159;

int main(){

	double r,h,v,a;

	scanf("%lf%lf", &r, &h);

	v = pi * r * r * h;
	a = 2 * pi * r * (r+h);

	printf("volume=%.3lf,  area=%.3lf", v, a);

	return 0;
	
}
