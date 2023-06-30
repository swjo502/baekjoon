#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int stack[100000], top = 0;
int arr[100000];
char chk[100000];

void push(int n) {
	stack[++top] = n;
}

void pop() {
	stack[top--] = 0;
}

int main() {
	int n;
	int index = 0, num = 0, ans = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		while (1) {
			if (ans == 1) break;

			if (stack[top] == arr[i]) {
				pop();
				chk[index++] = '-';
				break;
			}

			else if (stack[top] > arr[i]) {
				printf("NO\n");
				ans = 1;
				break;
			}

			else {
				push(++num);
				chk[index++] = '+';
			}
		}
	}

	if (ans == 0) {
		for (int i = 0; i < index; i++) {
			printf("%c\n", chk[i]);
		}
	}
}