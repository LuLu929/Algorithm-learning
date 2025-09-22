#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int head = 0, tail = 0;
int list[10001] = {};
void push(int num) {
	list[tail++] = num;
}
void pop() {
	printf("%d\n", tail == head ? -1 : list[head++]);
}
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		char input[6] = {};
		scanf(" %s", input);
		if (strcmp(input, "push") == 0) {
			int num;
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(input, "pop") == 0) {
			pop();
		}
		else if (strcmp(input, "size") == 0) {
			printf("%d\n", tail - head);
		}
		else if (strcmp(input, "empty") == 0) {
			printf("%d\n", tail == head ? 1 : 0);
		}
		else if (strcmp(input, "front") == 0) {
			printf("%d\n", tail == head ? -1 : list[head]);
		}
		else if (strcmp(input, "back") == 0) {
			printf("%d\n", tail == head ? -1 : list[tail - 1]);
		}
	}
}
