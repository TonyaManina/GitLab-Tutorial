#include <stdio.h>

#define WIDTH_SCRING 80
#define HEIGHT_SCRING 25
#define HEIGHT_SCOPE 3
#define ROCKET1_START_Y 19
#define ROCKET2_START_Y 5
#define ROCKET1_DEFAULT_X 2
#define ROCKET2_DEFAULT_X (WIDTH_SCRING - 3)
#define BALL_START_X (WIDTH_SCRING / 2)
#define BALL_START_Y (HEIGHT_SCRING / 2)
#define START_INPUT_SCOPE 25
#define NUMBER_SCOPE_CHARACTERS 55
#define WINSCORE 21
#define TRUE 1
#define FALSE 0

int main() {
    int Rocket1_X = ROCKET1_DEFAULT_X;
    int Rocket1_Y = ROCKET1_START_Y;
    int Rocket2_X = ROCKET2_DEFAULT_X;
    int Rocket2_Y = ROCKET2_START_Y;
    int Ball_X = BALL_START_X;
    int Ball_Y = BALL_START_Y;
for (int y = 0; y<HEIGHT_SCOPE; y++) {
    for (int x = 0; x<WIDTH_SCRING; x++) {
        if ((y == 0 && x != 0 && x != WIDTH_SCRING - 1) || (y == HEIGHT_SCOPE - 1 && x != 0 && x != WIDTH_SCRING - 1)) {
            printf("-");
        } 
        else if (x == START_INPUT_SCOPE) {
            printf("Player one: %d | Player two %d", 0, 0);
        }
        else if (y == 1 && x < WIDTH_SCRING - NUMBER_SCOPE_CHARACTERS) {
            printf(" ");
        }
        else if (y != 1) {
            printf(" ");
        }
    }
    printf("\n");
}

for (int y = 0; y < HEIGHT_SCRING; y++) {
    for (int x = 0; x < WIDTH_SCRING; x++) {
        if ((x == ROCKET1_DEFAULT_X && (y == Rocket1_Y - 1 || y == Rocket1_Y || y == Rocket1_Y + 1 )) || (x == ROCKET2_DEFAULT_X && (y == Rocket2_Y -1 || y == Rocket2_Y || y == Rocket2_Y + 1 ))) {
            printf("|");
        } else if (x == Ball_X && y == Ball_Y + 5) {
            printf("*");
        } else if ((y == 0 && x!= 0 && x != WIDTH_SCRING - 1) ||
        (y == HEIGHT_SCRING - 1 && x != 0 && x != WIDTH_SCRING - 1)) {
            printf("-");
        } else if ((x == 0 && y!= 0 && y!= HEIGHT_SCRING - 1) ||
        (x == WIDTH_SCRING - 1 && y!=0 && y!= HEIGHT_SCRING-1) ||
        (x == WIDTH_SCRING/2)) {
            printf("|");
        } else {
            printf(" ");
        }
    }
    printf("\n");
}


    return 0;
}