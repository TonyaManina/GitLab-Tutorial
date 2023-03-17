
#include <stdio.h>
int Fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
int main() {
    char smb1 = '\n';
    int number, scan = scanf("%d%c", &number, &smb1);
    ;
    if (scan == 2 && smb1 == '\n') {
        printf("%d", Fibonacci(number));
    } else {
        printf("n/a");
    }
}
