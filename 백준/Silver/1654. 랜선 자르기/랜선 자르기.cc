#include <stdio.h>
#include <stdlib.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int arr[10000];

int compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b)return 1;
	else if (*(int*)a < *(int*)b) return -1;
	else return 0;
}

int main() {
	int n, k, cnt = 0, ans = 0;
	long long low, high, mid;

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	qsort(arr, n, sizeof(int), compare);
	low = 1, high = arr[n - 1];

	while (low <= high) {
		cnt = 0;
		mid = (low + high) / 2;
		for (int i = 0; i < n; i++) {
			cnt += arr[i] / mid;
		}

		if (cnt >= k && ans < mid) ans = mid;

		if (cnt >= k) {
			low = mid + 1;
		}
		else if (cnt < k) {
			high = mid - 1;
		}
	}

	printf("%d", ans);

	return 0;
}