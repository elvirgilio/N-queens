bool solveNQueen(int board[N][N], int col) {
   if (col >= N) //when N queens are placed successfully
      return true;
   for (int i = 0; i < N; i++) { //for each row, check placing of queen is possible or not
      if (isValid(board, i, col) ) {
         board[i][col] = 1; //if validate, place the queen at place (i, col)
         if ( solveNQueen(board, col + 1)) //Go for the other columns recursively
            return true;
         board[i][col] = 0; //When no place is vacant remove that queen
      }
   }
   return false; //when no possible order is found
}
