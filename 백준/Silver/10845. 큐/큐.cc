#include <stdio.h>
#include <string.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int queue[10001];

int main() {
	int n, operand;
	int top = -1, rear = -1;
	char oper[6];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", oper);

		if (strcmp(oper, "push") == 0) {
			scanf("%d", &operand);
			queue[++rear] = operand;
		}
		else if (strcmp(oper, "pop") == 0) {
			if (top == rear) printf("-1\n");
			else printf("%d\n", queue[++top]);
		}
		else if (strcmp(oper, "size") == 0) {
			printf("%d\n", rear - top);
		}
		else if (strcmp(oper, "empty") == 0) {
			if (top == rear) printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(oper, "front") == 0) {
			if (top == rear) printf("-1\n");
			else printf("%d\n", queue[top + 1]);
		}
		else if (strcmp(oper, "back") == 0) {
			if (rear == top) printf("-1\n");
			else printf("%d\n", queue[rear]);
		}

	}
}

