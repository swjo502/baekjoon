#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int map[500][500];

int main() {
	int n, m, b;
	int height = 0, time = INT_MAX, min = 256, max = 0;

	scanf("%d %d %d", &n, &m, &b);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
			if (min > map[i][j]) min = map[i][j];
			if (max < map[i][j]) max = map[i][j];
		}
	}

	//땅의 높이가 제일 높은 것을 출력해야 함으로 max부터 min까지
	for (int i = max; i >= min; i--) {
		int tmp = 0, blocks = b;

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				int sub = map[j][k] - i;

				if (sub > 0) {
					tmp += sub * 2;
					blocks += sub;
				}
				else if (sub < 0) {
					tmp -= sub;
					blocks += sub;
				}
			}
		}

		if (blocks >= 0) {
			if (time > tmp) {
				time = tmp;
				height = i;
			}
		}
	}

	printf("%d %d", time, height);
	return 0;
}

