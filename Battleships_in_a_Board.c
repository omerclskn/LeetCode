int countBattleships(char** board, int boardSize, int* boardColSize){
int i,j,count=0;
    for(i=0;i<boardSize;i++){
      for(j=0;j<boardColSize[i];j++){
        if(board[i][j]=='X' && (j==0 || board[i][j-1]=='.') && (i==0 || board[i-1][j]=='.'))
            count++;
}
}
    return count;
}
