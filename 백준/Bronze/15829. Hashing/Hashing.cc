#include <stdio.h>
#include <string.h>
#include <math.h>
#define modular 1234567891
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int main() {
	int l;
	long long int sum = 0;
	char arr[6];

	scanf("%d", &l);
	scanf("%s", arr);

	for (int i = 0; i < l; i++) {
		sum += (arr[i] - 96) *pow(31, i);
	}
	sum %= modular;

	printf("%lld", sum);

	return 0;
}