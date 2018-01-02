#include <iostream>
#include <cmath>
using namespace std;

bool ok(int q[], int c, int n) {
   // Fill in.
}

// The function below is from a working n queens program.
// Add a 2nd parameter, k, and modify the function so that it will work for the k bishops program.
// You will have to change the board representation,
// the conditions for when you've found a solution and when to backtrack, and the ok function call.
int nqueens(int n) {
   int* q = new int[n];
   q[0] = 0;
   int c = 0, solutions = 0;
   while (c >= 0) {
      ++c;
      if (c == n) {
         ++solutions;
         --c;
      }
      else
         q[c] = -1;
      while (c >= 0) {
         ++q[c];
         if (q[c] == n)
            --c;
         else if (ok(q, c))
            break;
      }
   }
   delete[] q;
   return solutions;
}

int main() {
   int n, k;
   while (true) {
      cout << "Enter value of n: ";
      cin >> n;
      if (n == -1)
         break;
      cout << "Enter value of k: ";
      cin >> k;
      cout << "number of solutions: " << kbishops(n, k) << "\n";
   }
   return 0;
}
