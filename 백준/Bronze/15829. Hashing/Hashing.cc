#include <stdio.h>
#include <string.h>
#include <math.h>
#define modular 1234567891
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int main() {
	int l, arr2[51];
	long long sum = 0, mul = 1;
	char arr[51];

	scanf("%d", &l);
	scanf("%s", arr);

	for (int i = 0; i < l; i++) {
		arr2[i] = arr[i] - 96;
	}

	for (int i = 0; i < l; i++) {
		sum += arr2[i] * mul;
		mul = (mul * 31) % modular;
		sum %= modular;
	}

	printf("%lld", sum % modular);

	return 0;
}