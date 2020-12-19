#include<stdio.h>

#define N 3

int isSymmetric(int *a, int n) {
	int i = 0;
	int j = 0;

	for (; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (*((a + n*i)+j) != *((a+n*j)+i)){
				return 0;
			}
		}
	}
	return 1;

}

int main(){
	int m[N][N];
	int n,i,j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d", &m[i][j]);
	printf("%d",isSymmetric(&m, N));
	return 0;
}