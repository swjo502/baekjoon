#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_NO_SECURE_WARNINGS
#pragma warning(disable:6031)

int arr[500000];
int cnt[8001];

int compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b) return 1;
	else if (*(int*)a < *(int*)b)return -1;
	else return 0;
}

int main() {
	int n, max = -4001, min = 4001, avg = 0, flag = 0, max_cnt = 0;
	double sum = 0;
	int median = 0, range = 0, mode = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
		cnt[arr[i] + 4000]++;
		if (max_cnt < cnt[arr[i] + 4000]) max_cnt = cnt[arr[i] + 4000];
	}

	//산술평균
	avg = round(sum / n);

	//정렬 후 중앙값
	qsort(arr, n, sizeof(int), compare);
	median = arr[(n / 2)];

	//최빈값, 여러 개면 2번째로 작은 수 출력
	for (int i = 0; i < 8001; i++) {
		//배열 내 수 없으면 패스
		if (cnt[i] == 0) continue;
		
		//미리 구한 빈도와 같으면 flag 1로 설정 후 최빈값 설정,
		if (cnt[i] == max_cnt) {
			if (flag == 0) {
				mode = i - 4000;
				flag = 1;
			}
			//이미 최빈값이 설정되어 있는데 2번째로 최빈값이 발견된다면 값 업데이트 후 반복 종료
			else if (flag == 1) {
				mode = i - 4000;
				break;
			}
		}
	}

	//범위
	range = max - min;

	printf("%d\n%d\n%d\n%d", avg, median, mode, range);
}