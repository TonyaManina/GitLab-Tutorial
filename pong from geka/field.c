#include <stdio.h>
//I WANT TO PLAY WITH YOU
//        YOUR FRIEND, AI
int main() {
    int x1 = 12;
    int y = 2;
    int x2 = 13;
    int x3 = 14;
    int x4 = 12;
    int y1 = 77;
    int x5 = 13;
    int x6 = 14;
    int a = 13, b = 40;
    int l = 0, r = 0;
    enum Move {
        UL,
        UR,
        DR,
        DL};
    enum Move move = DR;

    char but;
    
    char field[25][81];
    do {
             
    sprintf(field[0],"--------------------------------------------------------------------------------");
    for (int i = 1; i<25; i++) {
        sprintf(field[i],"!                                                                              !");
    }
    sprintf(field[24],"--------------------------------------------------------------------------------");
    
    field[x1][y] = '|';
    field[x2][y] = '|';
    field[x3][y] = '|';
    field[x4][y1] = '|';
    field[x5][y1] = '|';
    field[x6][y1] = '|';
        
        field[a][b] = 'o';
    
        
        
        printf("\033c");
   
    
    for (int i = 0; i<25; i++) {
        printf("%s\n", field[i]);
    }
        fflush(stdin);
        but = getchar();
        
        switch (move) {
                   case UR: {
                       
                       if (field[a][b] == field[1][79]){
                   
                            
                           move = DL;

                           
                       } else if (field[a - 1][b + 1] == '-') {
                    
                           
                           move = DR;
                           a = a + 2;
                           b++;

                       } else if (field[a - 1][b + 1] == field[x4][y1] || field[a - 1][b + 1] == field[x5][y1] || field[a - 1][b + 1] == field[x6][y1]) {
                     
                           move = UL;
                           a--;
                           b = b - 2;

                       } else if (field[a - 1][b + 1] == '!') {
                           l++;
                           field [a][b] = field[13][41];
                           
                           move = UR;

                       }
                       a--;
                       b++;
                   } break;
                   case UL: {
                       
                       if (field[a][b] == field[1][1]) {
                         
                           
                           move = DR;

                       } else if (field[a - 1][b - 1] == '-') {
                          
                           move = DL;
                           b--;
                           a = a + 2;
                           

                       } else if (field[a - 1][b - 1] == field[x1][y] || field[a - 1][b - 1] == field[x2][y] || field[a - 1][b - 1] == field[x3][y]) {
                        
                           move = UR;
                           a--;
                           b = b + 2;

                       } else if (field[a - 1][b - 1] == '!') {
                           r++;
                           field[a][b] = field[13][41];
                           move = UL;

                           
                       }
                       a--;
                       b--;
                   } break;
                   case DR: {
                       if (field[a][b] == field[23][80]) {
                      
                           move = UL;

                       } else if (field[a + 1][b + 1] == '-') {
                         
                           move = UR;
                           a = a - 2;
                           b++;
        
                       } else if (field[a + 1][b + 1] == field[x4][y1] || field[a + 1][b + 1] == field[x5][y1] || field[a + 1][b + 1] == field[x6][y1]) {
                       
                           move = DL;
                           a++;
                           b = b - 2;

                       } else if (field[a + 1][b + 1] == '!') {
                           l++;
                           field[a][b] = field[13][41];
                           move = DR;

                           
                       }
                       a++;
                       b++;
                   } break;
                   case DL: {
                       
                       if (field[a][b] == field[23][1]) {
                          
                           move = UR;

                       } else if (field[a + 1][b - 1] == '-') {
                           move = UL;
                           a--;
                           b--;

                       } else if (field[a + 1][b - 1] == field[x1][y] || field[a + 1][b - 1] == field[x2][y] || field[a + 1][b - 1] == field[x3][y]) {
                          

                           move = DR;
                           a++;
                           b = b + 2;
                       } else if (field[a][b] == '!') {
                           r++;
                           field[a][b] = field[13][41];
                           move = DL;
                       } else{
                       a++;
                       b--;
                       }
                   } break;
                   default: {
                       ++a;
                       --b;
                   }
               }

    if (but == 'z') {
        x1++;
        x2++;
        x3++;
    } else if (but == 'a') {
        x1--;
        x2--;
        x3--;
    }else if (but == 'm') {
        x4++;
        x5++;
        x6++;
    } else if (but == 'k') {
        x4--;
        x5--;
        x6--;
    }
        if (x3 == 24) {
            x3 = x3 - 1;
            x2 -=1;
            x1 -=1;
        } else if (x1 == 0) {
            x1 +=1;
            x2 +=1;
            x3 +=1;
        } else if (x4 == 0) {
            x4+=1;
            x5+=1;
            x6+=1;
        } else if (x6 == 24) {
            x4-=1;
            x5-=1;
            x6-=1;
        }
    } while (but != 'e');
    printf("\33[0d\33[2J");
}
