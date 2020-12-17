#include<stdio.h>
#include<math.h>

const double pi=3.1415926;

double area(double r, double h){
	return pi*r*r + pi*r*sqrt(r*r+h*h);
}

double volume(double r, double h){
	return pi*r*r*h/3.0f;
}

int main(){
	double r,h;
	scanf("%lf%lf",&r,&h);
	double a=area(r,h);
	double v=volume(r,h);
	printf("Radius=%.2f,Height=%.2f,Area=%.2f,Volume=%.2f",r,h,a,v);
	return 0;
}
