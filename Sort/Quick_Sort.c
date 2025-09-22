#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int list[10000] = {}, n;
void quick_sort(int start, int end) {
	if (start >= end) return;
	int pivot = start;
	int left = start + 1;
	int right = end;
	while (left <= right) {
		while (left <= end && list[left] <= list[pivot]) left++;
		while (right > start && list[right] >= list[pivot]) right--;
		if (left > right) {
			int change = list[right];
			list[right] = list[pivot];
			list[pivot] = change;
		}
		else {
			int change = list[left];
			list[left] = list[right];
			list[right] = change;
		}
	}
	quick_sort(start, right - 1);
	quick_sort(right + 1, end);
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}
	quick_sort(0, n-1);
	for (int i = 0; i < n; i++) {
		printf("%d\n", list[i]);
	}
}
