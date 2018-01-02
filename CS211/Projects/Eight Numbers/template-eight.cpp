#include <iostream>
#include <cmath>
using namespace std;

bool ok(int q[], int c) {
   // Fill in.
}

void print(int q[]) {
   // Fill in.
}

void next(int q[], int c) {
   if (c == 8) // Change to 3 for stable marriage
      print(q);
   else for (q[c] = 0; q[c] < 8; ++q[c]) // Change to 1 and 9 for 8 numbers in a cross, 0 and 3 for stable marriage
      if (ok(q, c))
         next(q, c+1);
}

int main() {
   int q[8];
   next(q, 0);
   return 0;
}
