#include <stdio.h>

int f(int a, int b) {
    return b ? f(b, a % b) : a;
}

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != 2) {
        while (getchar() != '\n');
    }
    printf("%d\n", f(a, b));
    return 0;
}   