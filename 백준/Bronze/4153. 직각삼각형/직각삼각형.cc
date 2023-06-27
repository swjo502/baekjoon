#include <stdio.h>

int main() {
	int a, b, c;

	while (1) {
		int max = -1;
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0) break;

		if (a > max) max = a;
		if (b > max) max = b;
		if (c > max) max = c;

		if (max == a) {
			if (b * b + c * c == a * a) printf("right\n");
			else printf("wrong\n");
		}
		else if (max == b) {
			if (a * a + c * c == b * b) printf("right\n");
			else printf("wrong\n");
		}
		else if (max == c) {
			if (a * a + b * b == c * c) printf("right\n");
			else printf("wrong\n");
		}
	}
	return 0;
}