#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int diff[300000];

int compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b) return 1;
	else if (*(int*)a < *(int*)b) return -1;
	else return 1;
}

int main() {
	int n, sum = 0;
	double del, avg = 0;

	scanf("%d", &n);
	if (n == 0) {
		printf("0");
		return 0;
	}
	del = round(n * 0.15);

	for (int i = 0; i < n; i++) {
		scanf("%d", &diff[i]);
	}

	qsort(diff, n, sizeof(diff[0]), compare);

	for (int i = del; i < n - del; i++) {
		sum += diff[i];
	}
	avg = round(sum / (n - del * 2));

	printf("%.0lf", avg);

	return 0;
}