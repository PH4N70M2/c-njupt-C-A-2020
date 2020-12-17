#include<stdio.h>

int md[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int r(int y){
	return !(y%400) || !(y%4)&&(y%100);
}

int main(){
	int y,m,d;
	int ans=0;
	scanf("%d-%d-%d",&y,&m,&d);
	md[2]+=r(y);
	
	int i;
	for(i=1;i<m;i++)
		ans+=md[i];
	ans+=d;

	printf("%d",ans);
	return 0;
}
