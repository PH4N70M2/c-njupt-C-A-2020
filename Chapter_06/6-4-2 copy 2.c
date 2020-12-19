#include<stdio.h>
#include<stdlib.h>

int isSymmetric(int **a, int n) {
	int i = 0;
	int j = 0;

	for (; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (*(*(a + i) + j) != *(*(a + j) + i)){
				return 0;
			}
		}
	}
	return 1;

}

int main(){
	int n=3;
	int row=n, col=n;
	int **a = (int**)calloc(row, sizeof(int*));
	int p;
	for(p=0; p<row; p++){
		a[p] = (int*)calloc(col, sizeof(int));
	}

	int i,j;
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d", &a[i][j]);
	printf("%d",isSymmetric(a, n));
	return 0;
}