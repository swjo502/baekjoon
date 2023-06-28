#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int main() {
	int n, cnt = 0;

	scanf("%d", &n);
	
	for (int i = n; i >= 0; i -= 3) {
		if (i % 5 == 0) {
			cnt += i / 5;
			printf("%d\n", cnt);
			return 0;
		}
		else cnt++;
	}

	printf("-1\n");
	return 0;
}