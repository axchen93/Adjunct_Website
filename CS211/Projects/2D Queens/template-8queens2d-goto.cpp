#include <iostream>
using namespace std;

int main() {
   // Initialize the board to 0
   int q[8][8] = {};

   // Start in the 1st row, 1st column, and place a queen there
   int r = 0, c = 0;
   q[r][c] = 1;

nextCol:
   // Move to the next column

   if (you have passed the last column)
      goto print;

   // Move to one before the first row
   r = -1;

nextRow:
   // Move to the next row
   r++;

   if (you have passed the end of the column)
      goto backtrack;

   // If there is a queen in the same row (to the left), goto nextRow
   for each square to the left of the current square
      if (there is a queen on that square)
         goto nextRow;

   // If there is a queen in the upper-left diagonal, goto nextRow
   for (int i = 1; ...; i++) // End the loop when you are above or left of the chessboard
      if (there is a queen i spots above and left of the current square)
         goto nextRow;

   // If there is a queen in the lower-left diagonal, goto nextRow
   for (int i = 1; ...; i++) // End the loop when you are below or left of the chessboard
      if (there is a queen i spots below and left of the current square)
         goto nextRow;

   // Place a queen in the current square (2D version only)

   goto nextCol;

backtrack:
   // Move to the previous column

   if (you have moved to the left of the chessboard)
      exit the program
      
   // Find the square in the column with a queen in it and set r to the row number of that square
   
   // Remove the queen from the current square

   goto nextRow;

print:
   static int numSolutions = 0;
   cout << "Solution #" << ++numSolutions << ":\n";
   // Use a nested loop to print the chessboard
   goto backtrack;
}
