#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int main() {
	int n;
	float arr[1000], max = -1, sum = 0, avg = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%f", &arr[i]);
		if (arr[i] > max) max = arr[i];
	}
	
	for (int i = 0; i < n; i++) {
		arr[i] = (arr[i] / max) * 100;
		sum += arr[i];
	}

	avg = sum / n;

	printf("%f", avg);

	return 0;
}