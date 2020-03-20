bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    int i,j,k,z,c,h=0,t,m;
    int arr[9];
    
    for(i=0;i<boardSize;i++){
        for(j=0;j<*boardColSize;j++){
            if(board[i][j]!='.'){
               z=board[i][j];
                
                 for(k=j+1;k<boardSize;k++){
                     if(z==board[i][k]){
                         return false;
                     }
                }
                  for(c=i+1;c<*boardColSize;c++){
                     if(z==board[c][j]){
                         return false;
                     }
                 
                }
                
                
            }
        }
    }
      //3x3
    for(i=0;i<9;i+=3){
        for(j=0;j<9;j+=3){
           
            for(k=i;k<i+3;k++){
                for(c=j;c<j+3;c++){
                      arr[h]=board[k][c];
                        h++;
                }
                }
                for(h=0;h<9;h++){
                    if(arr[h]!='.'){
                        for(m=h+1;m<9;m++){
                            if(arr[m]==arr[h]){
                                return false;
                            }
                        }
                    }
                    
                }
            h=0;
        }
    }
    
    return true;
}
