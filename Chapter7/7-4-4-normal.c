#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int n, m;
	scanf("%d%d", &n, &m);

	int* queue = (int*)malloc(sizeof(int) * (n + 1));
	memset(queue, -1, sizeof(int) * (n + 1));

	int p =(m>n) ? m%n : m;
	queue[0] = n;

	while (queue[0] > 1) {
		queue[p]++;
		queue[0]--;
		int i = m;
		while (i) {
			p++;
			if (p > n)
				p = 1;
			if (queue[p])
				i--;
		}
	}
	int i;
	for (i = 1; i <= n; i++)
		if (queue[i]) {
			printf("%d", i);
			break;
		}

}
