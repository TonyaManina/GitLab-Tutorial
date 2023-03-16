#include <stdio.h>

int decoding();
int coding();

int main(int arg_count, char *args[]) {
    char *mode = args[1];
    int mode_int = mode[0] - '0';
    if (arg_count != 2) {
        printf("n/a");
        return 100;
    }

    if (mode_int == 1) {
        decoding();
    }
    else {
        if (mode_int == 0) {
            coding();
            }
        else {
            printf("n/a");
            return 100;
        }
        return 0;
    }
    return 0;
}
int coding() {
    char inp_symb;
    char end_symb = ' ';
    while (end_symb != '\n') {
        scanf("%c%c", &inp_symb, &end_symb);
        if (inp_symb != ' ' && (end_symb == ' ' || end_symb == '\n')) {
            if(end_symb !='\n') {printf("%X ",inp_symb);}
            else {printf("%X", inp_symb);}
        }
        else {
            printf("n/a");
            return 199;
        }
    }
    return 0;
}
int decoding() {
    int inp_symb;
    char end_symb = ' ';
    int valid;
    while (end_symb != '\n') {
        valid = scanf("%X%c", &inp_symb, &end_symb);
        if (valid) {
            if (inp_symb > 127) {
                printf("n/a");
                return 200;
            }
            if (inp_symb != ' ' && (end_symb == ' ' || end_symb == '\n')) {
                if(end_symb !='\n') {printf("%c ",inp_symb);}
                else {printf("%c", inp_symb);}
            }
            else {
                printf("n/a");
                return 199;
            }
        }
        else {
            printf("n/a");
            return 100;
        }
    }
    return 0;
}
