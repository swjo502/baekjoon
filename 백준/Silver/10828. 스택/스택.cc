#include <stdio.h>
#include <string.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int stack[10000];

int main() {
	int n, operand, top = -1;
	char oper[10];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", oper);

		if (strcmp(oper, "push") == 0) {
			scanf("%d", &operand);
			stack[++top] = operand;
		}

		else if (strcmp(oper, "pop") == 0) {
			if (top == -1) {
				printf("-1\n");
			}
			else printf("%d\n", stack[top--]);
		}

		else if (strcmp(oper, "size") == 0) {
			printf("%d\n", top + 1);
		}

		else if (strcmp(oper, "empty") == 0) {
			if (top == -1) printf("1\n");
			else printf("0\n");
		}

		else if (strcmp(oper, "top") == 0) {
			if (top == -1) printf("-1\n");
			else printf("%d\n", stack[top]);
		}
	}
}