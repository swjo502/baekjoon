#include <stdio.h>
#include <stdbool.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

char stack[51];
int top = 0;

void push(char c) {
	stack[top++] = c;
}

char pop() {
	return stack[--top];
}

int empty() {
	if (top == 0) return 0;
	else return 1;
}

void init() {
	for (int i = 0;i < 50; i++) {
		stack[i] = ' ';
	}
	top = 0;
}

int chk(char* str) {
	bool res = true;
	for (int i = 0; str[i]; i++) {
		if (str[i] == '(') push(str[i]);
		else {
			if (empty() == 0) {
				res = false;
			}
			else {
				pop();
			}
		}
	}

	if (empty() == 1) res = false;

	init();

	return res;
}

int main() {
	int n;
	char str[51];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", str);

		if (chk(str) == true) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

