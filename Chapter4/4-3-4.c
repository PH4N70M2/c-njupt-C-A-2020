#include<stdio.h>

#define F(i,j) for(i=j;i<=50;i++)

int main(){
	int x,y,z;
//	int flag=0;
	F(x,1){
		F(y,x)
			F(z,y){
				if(x*x+y*y==z*z){
//					if(flag)printf("\n");
//					flag++;
					printf("%3d %3d %3d\n",x,y,z);
				}
			}
	}
	return 0;
}
