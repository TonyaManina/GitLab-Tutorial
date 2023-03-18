#include<stdio.h>

int main() {
    int x = 79;
    int y = 25;
    char inputButton;
    
    int BallXChange = 1;
    int BallYChange = 1;
    int endGame = 0;
    int BallX = 40;
    int BallY = 12;
    int RackX_L = 4;
    int RackY_L_1 = 11;
    int RackY_L_2 = 12;
    int RackY_L_3 = 13;
    
    int RackX_R = 75;
    int RackY_R_1 = 11;
    int RackY_R_2 = 12;
    int RackY_R_3 = 13;
    int Score_L = 0;
    int Score_R = 0;
    
    
    while ( endGame != 1 ) {
        printf ("\033[0d\033[2J");
            /*
     TL;DR: этот код является частью игры, которая рисует мяч и две стойки на консоли и имитирует движение мяча, когда он касается стоек или границ консоли. Он также обновляет счет, когда мяч набирает очко.

     Код представляет собой основной цикл простой игры, имитирующей классическую аркадную игру Pong. В каждой итерации цикла код рисует на консоли кадр игры, включая мяч и две стойки, и обновляет положение мяча в соответствии с его движением и любыми столкновениями со стойками или границами консоли. Он также обновляет счетчик очков, когда мяч набирает очко.

     Отрисовка игры выполняется путем печати символов на консоли с помощью функции printf(). Мяч обозначается символом «0», стойки — символом «#», а границы консоли — символом «*». Код использует вложенные циклы для перебора вертикального и горизонтального положения консоли и печати соответствующего символа в каждой позиции.

     Движение мяча управляется двумя переменными, BallX и BallY, которые представляют текущие координаты мяча на консоли. Код обновляет эти переменные в каждой итерации цикла на основе текущей скорости мяча, представленной переменными BallXChange и BallYChange, которые могут быть положительными или отрицательными в зависимости от направления мяча.

     Столкновения мяча со стойками обнаруживаются путем сравнения координат мяча с координатами стоек. Если мяч попадает в стойку, его горизонтальная скорость меняется на противоположную. Если мяч касается левой или правой границы консоли, счет левого или правого игрока соответственно увеличивается, а мяч сбрасывается в центр консоли с новым направлением, определяемым его положением относительно средней линии консоль.

     В целом код реализует простую, но функциональную игру, демонстрирующую основы консольной графики и игровой физики.
     
     */////////////////////

        for( int yi = 0; y >= yi; yi++ ) {
            for( int xi = 0; x >= xi; xi++ ) {
                if  (((( xi >= 0 ) && (( yi == 0 ) || ( yi == 25 )))) || ((( yi >= 0 ) && (( xi == 0) || ( xi == 79 ))))){
                        printf("*");
                } else {
                    
                        
                    if (( xi == RackX_L ) && (( yi == RackY_L_1 ) || ( yi == RackY_L_2 ) || ( yi == RackY_L_3 ))) {
                        xi = xi + 1;
                        printf("#");
                            
                    }
                    
                    if (( xi == RackX_R ) && (( yi == RackY_R_1 ) || ( yi == RackY_R_2 ) || ( yi == RackY_R_3 ))) {
                        xi = xi + 1;
                        printf("#");
                            
                    }
                    if (( xi == BallX ) && ( yi == BallY )) {
                        
                        if ( BallY == 24 ) {
                            BallY = 24;
                            BallYChange = BallYChange *  -1 ;
                        }
                        if ( BallY == 1 ) {
                            BallY =  1;
                            BallYChange = BallYChange * -1 ;
                        }
                        if ( BallX == 1 ) {
                            Score_R =Score_R + 1;
                            if (0 <= BallY <= 12 ){
                                BallXChange = 1;
                                BallYChange = -1;
                                
                            } else {
                                BallXChange = 1;
                                BallYChange = 1;
                            }
                            BallX = 40;
                            BallY = 12;
                        }
                        if ( BallX == 78 ) {
                            Score_L = Score_L + 1;
                            if (0 <= BallY <= 12 ){
                                BallXChange = -1;
                                BallYChange = 1;
                            } else {
                                BallXChange = -1;
                                BallYChange = -1;
                            }
                            BallX = 40;
                            BallY = 12;
                            
                            
                        }
                        
                        if (( BallX == 5 ) && (( BallY == RackY_L_1 )||( BallY == RackY_L_2 ) || ( BallY == RackY_L_3 ))) {
                            BallX = 5;
                            BallXChange = BallXChange *  -1 ;
                            
                        }
                        
                        
                        printf("0");
                        
                        if  (( BallX == 74 ) && (( BallY == RackY_R_1 )||( BallY == RackY_R_2 ) || ( BallY == RackY_R_3 ))) {
                            BallX = 74;
                            BallXChange = BallXChange *  -1 ;
                            printf("#");
                            xi = xi + 1;
                            
                        }
                        xi = xi + 1;
                        
                    }
                    
                    printf(" ");
                }
            }
            
            printf("\n");
        }
        ////////////////////////////
        printf ("мяч %d %d\n",BallX, BallY);
        printf (" счет %d %d\n", Score_L, Score_R);
        fflush(stdin);
        scanf("%c", &inputButton);
            
            switch( inputButton ){
                case ' ':
                    BallX = BallX + BallXChange;
                    BallY = BallY + BallYChange;
                    break;
                case 'a':
                    BallX = BallX + BallXChange;
                    BallY = BallY + BallYChange;
                    RackY_L_1 = RackY_L_1 - 2;
                    RackY_L_2 = RackY_L_2 - 2;
                    RackY_L_3 = RackY_L_3 - 2;
                    
                    break;
                case 'z':
                    BallX = BallX + BallXChange;
                    BallY = BallY + BallYChange;
                    RackY_L_1 = RackY_L_1 + 2;
                    RackY_L_2 = RackY_L_2 + 2;
                    RackY_L_3 = RackY_L_3 + 2;
                    
                    break;
                case 'k':
                    BallX = BallX + BallXChange;
                    BallY = BallY + BallYChange;
                    RackY_R_1 = RackY_R_1 - 2;
                    RackY_R_2 = RackY_R_2 - 2;
                    RackY_R_3 = RackY_R_3 - 2;
                    
                    break;
                case 'm':
                    BallX = BallX + BallXChange;
                    BallY = BallY + BallYChange;
                    RackY_R_1 = RackY_R_1 + 2;
                    RackY_R_2 = RackY_R_2 + 2;
                    RackY_R_3 = RackY_R_3 + 2;
                    
                    break;
                    
            }
        
            
            
        if ( (Score_L >= 2) || (Score_R >= 2) ){
            
            if ( Score_L >= 2 ){
               
                    
                        printf("Победил игрок 1!\n");
                    
                        printf("Счет %d %d\n", Score_L, Score_R);
                    
            }
            
            if ( Score_R >= 2 ){
               
                        printf("Победил игрок 2!\n");
                    
                        printf("Счет %d %d\n", Score_L, Score_R);
                   
            }
            
            endGame = 1;
        }
            
           
        
    }
        
    
}
