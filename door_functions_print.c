#include <stdio.h>
#include <math.h>

int point_define(double y_pos, double d_y, double min_y);
void point_printer(int point_y);
double func_1(double x);
double func_2(double x);
double func_3(double x);

int main() {
    double step = 2 * M_PI / 41;
    double x = M_PI * (-1);

    int i = 1;
    double min_y = 1;
    double d_y = ((1 / (1 + M_PI * M_PI)) - 1) / 20;
    while (i <= 42) {
        int point_y;
        double y_pos;
        y_pos = func_1(x);
        point_y = point_define(y_pos, d_y, min_y);
        point_printer(point_y);
        x += step;
        i++;
    }
    printf("\n");
    // НИЖЕ ДЛЯ 2 И ТРЕТИЙ ФУНКЦИИ НЕ РЕАЛИЗОВАНО 
    int i = 1;
    double min_y = 1;
    double d_y = ((1 / (1 + M_PI * M_PI)) - 1) / 20;
    while (i <= 42) {
        int point_y;
        double y_pos;
        y_pos = func_1(x);
        point_y = point_define(y_pos, d_y, min_y);
        point_printer(point_y);
        x += step;
        i++;
    }
    printf("\n");

    int i = 1;
    double min_y = 0;
    double d_y = ((1 / (M_PI * M_PI)) - 1) / 20;
    while (i <= 42) {
        int point_y;
        double y_pos;
        y_pos = func_1(x);
        point_y = point_define(y_pos, d_y, min_y);
        point_printer(point_y);
        x += step;
        i++;
    }
    return 0;
}

double func_1(double x) { return 1 / (1 + pow(x, 2));}
double func_2(double x) { return sqrt(sqrt(1 + 4 * x * x) - x * x - 1); }
double func_3(double x) { return 1 / (x * x); }

int point_define(double y_pos, double d_y, double min_y) {
    int current_pos = 1;
    int good_pos = 1;
    double min_delta = 9999999;
    double some;
    while (current_pos <= 21) {
        some = ((min_y + (d_y) * current_pos) - y_pos);
        if (some < 0) {some = some * (-1);}
        if (some < min_delta) {
            min_delta = some;
            good_pos = current_pos;
        }
        current_pos++;
    }
    return good_pos;
}
void point_printer(int point_y) {
    for(int space_count = 1; space_count <= point_y - 1; space_count++) {printf(" ");}
    printf("*");
    for(int space_count = 1; space_count <= 21 - point_y; space_count++) {printf(" ");}
    printf("\n");
}
