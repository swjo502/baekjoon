#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int main() {
	int n, cnt = 0;
	int arr[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		for (int j = 2; j <= arr[i]; j++) {
			if (j == arr[i]) cnt++;
			if (arr[i] % j == 0) break;
		}
	}

	printf("%d", cnt);

	return 0;
}