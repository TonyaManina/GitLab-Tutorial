if ( BallX == 2 ) {
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
if ( BallX == 77 ) {
    Score_L = Score_L + 1;
    if (1 <= BallY <= 12 ){
        BallXChange = -1;
        BallYChange = 1;
    } else {
        BallXChange = -1;
        BallYChange = -1;
    }
    BallX = 40;
    BallY = 12;
    
    int right_score_plus(){
        Score_L = Score_L + 1;
        if (1 <= BallY <= 12 ){
            BallXChange = -1;
            BallYChange = 1;
        } else {
            BallXChange = -1;
            BallYChange = -1;
        }
        BallX = 40;
        BallY = 12;
        
        
        
        
        
        
        
    }
