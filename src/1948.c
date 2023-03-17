#include <stdio.h>

int prost_del(int x) {
    int pr = x, cnt = 0, end;
    for (int i = 2; i <= x; i++) {
        while (pr >= 0) {
            pr -= i;
            if (pr == 0) {
                cnt += 1;
            }
        }
        pr = x;
    }
    if (cnt > 1) {
        end = 0;
    } else if (cnt == 1) {
        end = 1;
    }
    return end;
}

int prostoy_delitel(int x) {
    int promegu, counter = 0, old_counter = 0;
    if (x > 0) {
        for (int i = 1; i < x; i++) {
            promegu = x;
            while (promegu >= 0) {
                promegu = promegu - i;
                if (promegu == 0 && prost_del(i) == 1) {
                    counter = i;
                }
            }
            if (old_counter < counter) {
                old_counter = counter;
            }
        }
    } else if (x < 0) {
        for (int i = -1; i > x; i--) {
            promegu = x;
            while (promegu <= 0) {
                promegu = promegu - i;
                if (promegu == 0 && prost_del(-i) == 1) {
                    counter = -i;
                }
            }
            if (old_counter < counter) {
                old_counter = counter;
            }
        }
    }
    return old_counter;
}

int main() {
    int x;
    char smb1 = '\n';
    int scan = scanf("%d%c", &x, &smb1);
    if (scan == 2 && smb1 == '\n' && x != 2 && x != -2 && x != 1 && x != 0 && x != -1) {
        printf("%d\n", prostoy_delitel(x));
    } else if (scan == 2 && smb1 == '\n' && (x == 2 || x == -2) && x != 1 && x != 0) {
        printf("2");
    } else if (scan == 2 && smb1 == '\n' && (x == 1 || x == 0 || x == -1)) {
        printf("n/a");
    }
    return 0;
}
