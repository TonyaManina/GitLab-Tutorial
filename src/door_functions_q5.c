#include <math.h>
#include <stdio.h>

double V_A(double x) {
    double ret = 1 / (1 + x * x);
    return ret;
}

double L_B(double x) {
    double b = sqrt(1 + 4 * x * x);
    double c = (x * x) + 1;
    double ret;
    if (b < c) {
        ret = -1;
    } else {
        ret = sqrt(b - c);
    }
    return ret;
}

double pow_gip(double x) {
    double ret = 0;
    if (x == 0) {
        ret = -1;
    } else {
        ret = 1 / (x * x);
    }
    return ret;
}

void tabl() {
    double I = 2 * M_PI / 41;
    double x, y1, y2, y3;
    for (int i = 0; i <= 41; i++) {
        x = -M_PI + i * I;
        y1 = V_A(x);
        y2 = L_B(x);
        y3 = pow_gip(x);
        printf("%.7f | ", x);
        printf("%.7f | ", y1);
        if (y2 < 0) {
            printf("- | ");
        } else {
            printf("%.7f | ", y2);
        }
        if (y3 < 0) {
            printf("\n");
        } else {
            printf("%.7f\n", y3);
        }
    }
}

void graf_V_A() {
    double min_y = 1 / (1 + M_PI * M_PI), max_y = 1;
    double J = (max_y - min_y) / 10;
    double I = 2 * M_PI / 41;
    double x, y1;
    for (int j = 0; j <= 20; j++) {
        printf("\n");
        for (int i = 0; i <= 41; i++) {
            x = -M_PI + i * I;
            y1 = V_A(x);
            if ((y1 <= (max_y - j * J)) && (y1 >= (max_y - ((j + 1) * J)))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
    }
}

void garaf_L_B() {
    double min_y = 0.3061966, max_y = 0.761782;
    double J = (max_y - min_y) / 20;
    double I = 2 * M_PI / 41;
    double x, y2;
    for (int j = 0; j <= 20; j++) {
        printf("\n");
        for (int i = 0; i <= 41; i++) {
            x = -M_PI + i * I;
            y2 = L_B(x);
            if ((y2 <= (max_y - j * J)) && (y2 >= (max_y - ((j + 1) * J)))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
    }
}

void graf_pow_gip() {
    double min_y = 1 / M_PI * M_PI, max_y = 170.3209097;
    double J = (max_y - min_y) / 15;
    double I = 2 * M_PI / 41;
    double x, y2;
    for (int j = 0; j <= 20; j++) {
        printf("\n");
        for (int i = 0; i <= 41; i++) {
            x = -M_PI + i * I;
            y2 = pow_gip(x);
            if ((y2 <= (max_y - j * J)) && (y2 >= (max_y - ((j + 1) * J)))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
    }
}

int pointer(double p_y, double d_y, double min_y) {
    int pos = 1;
    int g_p = 1;
    double min_d = 9999999;
    double r;
    while (pos <= 21) {
        r = ((min_y + (d_y)*pos) - p_y);
        if (r < 0) {
            r = r * (-1);
        }
        if (r < min_d) {
            min_d = r;
            g_p = pos;
        }
        pos++;
    }
    return g_p;
}
void pointer_print(int p_y) {
    for (int counter_sp = 1; counter_sp <= p_y - 1; counter_sp++) {
        printf(" ");
    }
    printf("*");
    for (int counter_sp = 1; counter_sp <= 21 - p_y; counter_sp++) {
        printf(" ");
    }
    printf("\n");
}
int main() {
    graf_V_A();
    printf("\n");
    garaf_L_B();
    printf("\n");
    graf_pow_gip();
    return 0;
}
