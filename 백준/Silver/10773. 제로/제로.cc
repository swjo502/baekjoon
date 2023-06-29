#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int stack[100000], top = -1;

void push(int n) {
	stack[++top] = n;
}

void pop() {
	stack[top--] = 0;
}

int main() {
	int k, num, sum = 0;

	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &num);
		if (num == 0) pop();
		else push(num);
	}

	for (int i = 0; i <= top; i++) {
		sum += stack[i];
	}

	printf("%d", sum);
}