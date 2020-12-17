#include<stdio.h>

struct FILM{
	char name[100];
	int rate[5];
	double score;
};

typedef struct FILM Fi;
Fi f[10]; 

int maxrate=0x80000000;
int maxp=0;

int main(){
	int n;
	printf("Enter the num of films: ");
	scanf("%d",&n);
	
	int i=0;
	for(;i<n;i++){
		printf("Enter %d-th Film : ",i+1);
		scanf("%s",f[i].name);
	}

	for(i=0;i<n;i++){
		printf("Rating for %s :\n",f[i].name);
		f[i].score=0;
		
		int j=0;
		for(;j<5;j++){
			scanf("%d",&(f[i].rate[j]));
			f[i].score+=f[i].rate[j]/5.0;
			if(maxrate<f[i].score){
				maxp=i;
				maxrate=f[i].score;
			}
		}
	}

	for(i=0;i<n;i++){
		printf("Score for film %s is %lf.\n",f[i].name,f[i].score);
	}
	printf("The most popular film is %s.",f[maxp].name);
}
