#include <stdio.h>
#include <stdlib.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

struct info {
	int age;
	char name[101];
};

struct info person[100000];

int compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b) return 1;
	else if (*(int*)a < *(int*)b) return -1;
	else return 0;
}

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0;i < n;i++) {
		scanf("%d %s", &person[i].age, person[i].name);
	}

	qsort(person, n, sizeof(person[0]), compare);

	for (int i = 0;i < n;i++) {
		printf("%d %s\n", person[i].age, person[i].name);
	}

	return 0;
}

