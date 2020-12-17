#include<stdio.h>

#define DAYS_FEB(year) ((!(y%4)&&(y%100))||!(y%400))?29:28

int main()
{
	int y;
	scanf("%d",&y);
	printf("days of the FEB.: %d",DAYS_FEB(y));
	return 0;
}
