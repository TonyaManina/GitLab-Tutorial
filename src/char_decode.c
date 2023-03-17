#include <stdio.h>
int cod() {
    char inp_smb;
    char end_smb = ' ';
    while (end_smb != '\n') {
        scanf("%c%c", &inp_smb, &end_smb);
        if (inp_smb != ' ' && (end_smb == ' ' || end_smb == '\n')) {
            if(end_smb !='\n') {printf("%X ",inp_smb);}
            else {printf("%X", inp_smb);}
        }
        else {
            printf("n/a");
            return 199;
        }
    }
    return 0;
}
int decoding() {
    int inp_smb,scan;
    char end_smb = ' ';
    while (end_smb != '\n') {
        scan = scanf("%X%c", &inp_smb, &end_smb);
        if (scan) {
            if (inp_smb > 127) {
                printf("n/a");
                return 200;
            }
            if (inp_smb != ' ' && (end_smb == ' ' || end_smb == '\n')) {
                if(end_smb !='\n') {printf("%c ",inp_smb);}
                else {printf("%c", inp_smb);}
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


int main(int arg, char *args[]) {
    char *old = args[1];
    int old_i = old[0] - '0';
    if (arg != 2) {
        printf("n/a");
        return 100;
    }

    if (old_i == 1) {
        decoding();
    }
    else {
        if (old_i == 0) {
            cod();
            }
        else {
            printf("n/a");
            return 100;
        }
        return 0;
    }
    return 0;
}