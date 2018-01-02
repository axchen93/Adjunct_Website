#include <iostream>
#include <cmath>
using namespace std;

// Returns true if the queen in column c is ok
bool ok(int q[], int c) {
   for each i from 0 to c-1
      if (there is a conflict between the queens in columns i and c)
         return false;
   return true;
}

void print(int q[]) {
   static int numSolutions = 0;
   cout << "Solution #" << ++numSolutions << ": ";
   // Print the array
   cout << "\n";
}

int main() {
   int q[8] = {};   // Initialize the array to 0.
   // Start in the 1st row, 1st column
   while (c >= 0) { // End the loop if you backtrack from the first column
      // Move to the next column
      // If you have passed the last column,
         // Call the print function and backtrack
      // Otherwise, move to one before the first row
      while (c >= 0) {
         // Move to the next row
         // If you have passed the end of the column, backtrack
         // Otherwise, call the ok function.  If it returns true, go back to the beginning of the outer loop.
      }
   }
   return 0;
}
