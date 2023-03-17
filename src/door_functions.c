#include <math.h>
#include <stdio.h>

double V_A(double x) {
    double y;
    y = 1 / (1 + x * x);
    return y;
}
// x >= -1 * M_PI && x <= M_PI
double L_B(double x) {
    double eq, ret = 0;
    if (sqrt(1 + (4 * x * x)) - x * x - 1 >= 0) {
        eq = sqrt(sqrt(1 + (4 * x * x)) - x * x - 1);
        ret = eq;
    } else {
        ret = 12345;
    }
    return ret;
}

double pow_gip(double x) {
    double y, ret = 0;
    if (x != 0) {
        y = 1 / (x * x);
        ret = y;
    } else {
        ret = 12345;
    }
    return ret;
}

int main() {
    double mpi = -1 * M_PI, otrezok = (mpi * 2 * -1) / 41;
    int check = 12345;
    for (int i = 0; i < 42; i++) {
        if (L_B(mpi) == check && pow_gip(mpi) == check) {
            printf("%.7lf | %.7lf | - | - \n", mpi, V_A(mpi));
        } else if (L_B(mpi) == check) {
            printf("%.7lf | %.7lf | - | %.7lf\n", mpi, V_A(mpi), pow_gip(mpi));
        } else if (pow_gip(mpi) == check) {
            printf("%.7lf | %.7lf | %.7lf | - \n", mpi, V_A(mpi), L_B(mpi));
        } else {
            printf("%.7lf | %.7lf | %.7lf | %.7lf\n", mpi, V_A(mpi), L_B(mpi), pow_gip(mpi));
        }
        mpi += otrezok;
    }
}
