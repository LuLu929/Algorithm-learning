#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int n, pos = 0;
int dat[10001] = {};
void push(int val) {
    dat[pos++] = val;
}
void pop() {
    pos--;
}
int top() {
    return dat[pos - 1];
}
int empty() {
    return pos == 0 ? 1 : 0;
}
int main() {    
    scanf("%d", &n);
    while (n--) {
        char c[7] = {};
        scanf(" %s", c);
        if (strcmp(c, "push") == 0) {
            int num;
            scanf("%d", &num);
            push(num);
        }
        else if (strcmp(c, "pop") == 0) {
            if (pos == 0) {
                printf("%d\n", -1);
            }
            else {
                printf("%d\n", top());
                pop();
            }
        }
        else if (strcmp(c, "size") == 0) {
            printf("%d\n", pos);
        }
        else if (strcmp(c, "empty") == 0) {
            printf("%d\n", empty());
        }
        else if (strcmp(c, "top") == 0) {
            printf("%d\n", pos == 0 ? -1 : top());
        }
    }
}