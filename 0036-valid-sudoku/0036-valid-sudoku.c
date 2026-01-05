bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    for(int i=0; i<9; i++){                 
        for(int j=0; j<9; j++){            
            if(board[i][j] != '.'){         
                for(int x=0; x<9; x++){
                    if(board[i][j] == board[i][x] && x!=j) return false;    
                    if(board[i][j] == board[x][j] && x!=i) return false;    
                }
            
                for(int x=0; x<3; x++){
                    for(int y=0; y<3; y++){
                        if(board[i][j] == board[(i/3)*3 + x][(j/3)*3 + y]){
                            if(((i/3)*3 + x != i) && ((j/3)*3 + y != j)) return false;
                        }
                    } 
                }
            }
        }
    }
    return true;
}
    
