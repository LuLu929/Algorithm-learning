#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 10000
int list[2*MAX+1] = {};
int head = MAX, tail = MAX;
void push_front(int num) {
	list[head--] = num;
}
void push_back(int num) {
	list[++tail] = num;
}
void pop_front() {
	printf("%d\n", head == tail ? -1 : list[++head]);
}
void pop_back() {
	printf("%d\n", head == tail ? -1 : list[tail--]);
}
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		char command[11] = {};
		scanf(" %s", command);
		if (strcmp(command, "push_front") == 0) {
			int x;
			scanf("%d", &x);
			push_front(x);
		}else if (strcmp(command, "push_back") == 0) {
			int x;
			scanf("%d", &x);
			push_back(x);
		}
		else if (strcmp(command, "pop_front") == 0) {
			pop_front();
		}
		else if (strcmp(command, "pop_back") == 0) {
			pop_back();
		}
		else if (strcmp(command, "size") == 0) {
			printf("%d\n", tail - head);
		}
		else if (strcmp(command, "empty") == 0) {
			printf("%d\n", head == tail ? 1 : 0);
		}
		else if (strcmp(command, "front") == 0) {
			printf("%d\n", head == tail ? -1 : list[head+1]);
		}
		else if (strcmp(command, "back") == 0) {
			printf("%d\n", head == tail ? -1 : list[tail]);
		}
	}
}
