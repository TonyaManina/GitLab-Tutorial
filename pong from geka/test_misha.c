#include<stdio.h>
#include<unistd.h>


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
    
    
    while ( inputButton == '\n' ) {
        printf ("\033[0d\033[2J");
        Sleep(4);
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
                    if ((BallX<1) || (BallX>77) || (BallY<1) || (BallY>24)){
                        BallX = 40;
                        BallY = 9;
                    } else {
                        if (( xi == BallX ) && ( yi == BallY )) {
                            
                            if ( BallY == 24 ) {
                                BallY = 24;
                                BallYChange = BallYChange *  -1 ;
                            }
                            if ( BallY == 1 ) {
                                BallY =  1;
                                BallYChange = BallYChange * -1 ;
                            }
  
                            
                            if (( BallX == 5 ) && (( BallY == RackY_L_1 )||( BallY == RackY_L_2 ) || ( BallY == RackY_L_3 ))) {
                                BallX = 5;
                                BallXChange = BallXChange *  -1 ;
                                
                            }
                            
                            if ( BallX == 4 ) {
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
                            if ( BallX == 76 ) {
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
                            
                            printf("0");
                            
                            if  (( BallX == 74 ) && (( BallY == RackY_R_1 )||( BallY == RackY_R_2 ) || ( BallY == RackY_R_3 ))) {
                                BallX = 74;
                                BallXChange = BallXChange *  -1 ;
                                printf("#");
                                xi = xi + 1;
                                
                            }
                            xi = xi + 1;
                            
                        }
                        BallX++;
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
        printf ("мяч %d %d\n",BallX, BallY);
        printf (" счет %d %d\n", Score_L, Score_R);
        fflush(stdout);
        scanf("%c", &inputButton);

            switch( inputButton ){

                case ' ':
                    BallX = BallX + BallXChange;
                    BallY = BallY + BallYChange;
                    break;
                case 'a':
                    BallX = BallX + BallXChange;
                    BallY = BallY + BallYChange;
                    if (RackY_L_1 == 1){
                        continue;
                    }
                    RackY_L_1 = RackY_L_1 - 1;
                    RackY_L_2 = RackY_L_2 - 1;
                    RackY_L_3 = RackY_L_3 - 1;

                    break;
                case 'z':
                    BallX = BallX + BallXChange;
                    BallY = BallY + BallYChange;
                    if (RackY_L_3 == 24){
                        continue;
                    }
                    RackY_L_1 = RackY_L_1 + 1;
                    RackY_L_2 = RackY_L_2 + 1;
                    RackY_L_3 = RackY_L_3 + 1;

                    break;
                case 'k':
                    BallX = BallX + BallXChange;
                    BallY = BallY + BallYChange;
                    if (RackY_R_1 == 1){
                        continue;
                    }
                    RackY_R_1 = RackY_R_1 - 1;
                    RackY_R_2 = RackY_R_2 - 1;
                    RackY_R_3 = RackY_R_3 - 1;

                    break;
                case 'm':
                    BallX = BallX + BallXChange;
                    BallY = BallY + BallYChange;
                    if (RackY_R_3 == 24){
                        continue;
                    }
                    RackY_R_1 = RackY_R_1 + 1;
                    RackY_R_2 = RackY_R_2 + 1;
                    RackY_R_3 = RackY_R_3 + 1;

                    break;

            }
//
            
            
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
