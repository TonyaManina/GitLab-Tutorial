#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>
#include <time.h>
#include <unistd.h>

void print_screen_line_floor();
void print_screen_win(int key);
void print_screen_head(int score_1, int score_2);
void print_screen(int y_l, int y_r, int x_b, int y_b, int score_1, int score_2);

int main() {
    int y_l = 11;
    int y_r = 1;
    int x_b = 41;
    int y_b = 13;
    int score_1 = 0;
    int score_2 = 0;
    char key;
    int dx_b, dy_b, count = 0;
    fd_set fds;
    struct timeval tv = {.tv_sec = 0, .tv_usec = 0};
    srand(time(NULL));
    if (rand() % 2) {
        dx_b = 1;
    } else {
        dx_b = -1;
    }
    if (rand() % 2) {
        dy_b = 1;
    } else {
        dy_b = -1;
    }
    do {
        system("clear");
        print_screen(y_l, y_r, x_b, y_b, score_1, score_2);
        key = 's';
        FD_ZERO(&fds);
        FD_SET(0, &fds);
        system("/bin/stty raw");
        if (select(1, &fds, NULL, NULL, &tv)) {
            scanf("%c", &key);
        }  //
        system("/bin/stty cooked");
        if (key == 'a' && y_l > 1) {
            y_l--;
        }
        if (key == 'z' && y_l < 23) {
            y_l++;
        }
        if (key == 'k' && y_r > 1) {
            y_r--;
        }
        if (key == 'm' && y_r < 23) {
            y_r++;
        }
        if (key == 'e' || score_1 == 21 || score_2 == 21) {
            break;
        }
        if (y_b == 1 || y_b == 25) {
            dy_b = dy_b * (-1);
        }
        if ((x_b == 4) && ((y_b == y_l) || (y_b == y_l + 1) || (y_b == y_l + 2))) {
            dx_b = dx_b * (-1);
        }
        if ((x_b == 77) && ((y_b == y_r) || (y_b == y_r + 1) || (y_b == y_r + 2))) {
            dx_b = dx_b * (-1);
        }
        if (x_b == 1 || x_b == 79) {
            if (x_b == 1) {
                score_2++;
            } else {
                score_1++;
            }
            x_b = 41;
            y_b = 13;
            if (rand() % 2) {
                dx_b = 1;
            } else {
                dx_b = -1;
            }
            if (rand() % 2) {
                dy_b = 1;
            } else {
                dy_b = -1;
            }
        }
        count++;
        if (count == 13) {
            x_b = x_b + dx_b;
            y_b = y_b + dy_b;
            count = 0;
        }
        sleep(1 - 0.0000001);
    } while (1);
    system("clear");
    if (score_1 == 21) {
        print_screen_win(1);
    }
    if (score_2 == 21) {
        print_screen_win(0);
    }
    return 0;
}
void print_screen_win(int key) {
    if (key) {
        printf("player left win!");
    } else {
        printf("player right win!");
    }
}
void print_screen_line_floor() {
    for (int i = 1; i < 83; i++) {
        printf("-");
    }
}
void print_screen_head(int score_1, int score_2) {
    print_screen_line_floor();
    printf("\n");
    printf("                                        PONG\n");
    printf("                                score: %d", score_1);
    if (score_1 < 10) {
        printf(" ");
    }
    printf("| score: %d\n", score_2);
    print_screen_line_floor();
    printf("\n");
}
void print_screen(int y_l, int y_r, int x_b, int y_b, int score_1, int score_2) {
    print_screen_head(score_1, score_2);
    print_screen_line_floor();
    printf("\n");
    for (int y = 1; y < 26; y++) {
        printf("|");
        for (int x = 1; x < 81; x++) {
            if (x == 2 && (y == y_l || y == y_l + 1 || y == y_l + 2)) {
                printf("|");
            } else if (x == 78 && (y == y_r || y == y_r + 1 || y == y_r + 2)) {
                printf("|");
            } else if (x == 41 && ((y != y_b) || (x != x_b))) {
                printf("|");
            } else if (x == 41 && x_b == 41 && y == y_b) {
                printf("o");
            } else if (y == y_b && x == x_b) {
                printf("o");
            } else {
                printf(" ");
            }
        }
        printf("|");
        printf("\n");
    }
    print_screen_line_floor();
    printf("\n");
    printf("                               press \"e\" to exit\n");
}
