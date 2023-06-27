#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int main() {
	int n;
	int con = 0, sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum = (i + i % 10 + (i / 10) % 10 + (i / 100) % 10 + (i / 1000) % 10 + (i / 10000) % 10 +
			(i / 100000) % 10 + (i / 1000000) % 10);

		if (sum == n) {
			con = i;
			break;
		}
	}

	printf("%d", con);

	return 0;
}