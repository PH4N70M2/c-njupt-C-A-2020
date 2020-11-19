#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void kick(int x, int *t, int n[], int p[]) {
	n[p[x]] = n[x];
	p[n[x]] = p[x];
	(*t)--;
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int sz = sizeof(int) * (n + 1);

	int  *next=(int*)malloc(sz);
	int  *prev=(int*)malloc(sz);
	
	int i = 1;
	for (; i <= n; i++) {
		next[i] = i + 1;
		prev[i] = i - 1;
	}
	next[n] = 1;
	prev[1] = n;
	int cnt = n;
	//initializing the chain

	int p = m;
	if (p > m)
		p = m % n;

	while (cnt > 1) {
		kick(p, &cnt, next, prev);
		for (i = 1; i <= m; i++) {
			p = next[p];
		}
	}
	printf("%d", p);

}