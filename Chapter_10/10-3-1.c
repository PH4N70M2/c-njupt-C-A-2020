#include<stdio.h>
#define N 100

struct score{
	int maths;
	int physics;
	int english;
};

typedef struct score SC;

struct STUDENT{
	int ID;
	char name[100];
	SC mark;
	int avgscore;
};

typedef struct STUDENT student;

int main(){
	int n;
	scanf("%d",&n);

	student stud[N];

	int i=0;
	for(;i<n;i++){
		scanf("%d",&stud[i].ID);
		scanf("%s",&stud[i].name);
		scanf("%d",&stud[i].mark.maths);
		scanf("%d",&stud[i].mark.physics);
		scanf("%d",&stud[i].mark.english);
		stud[i].avgscore=stud[i].mark.maths;
		stud[i].avgscore+=stud[i].mark.physics;
		stud[i].avgscore+=stud[i].mark.english;
		stud[i].avgscore/=3;
	}

	for(i=0;i<n;i++){
		printf("The average score of the %dth student is %d.\n",i+1,stud[i].avgscore);
	}
}
