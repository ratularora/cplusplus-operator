#include <iostream>
using namespace std;

int main() {
   int a = 7;
    int b = 7;
   int c = 0;

   c = a & b;             // and
   cout << "Line 1 - Value of c is : " << c << endl ;

   c = a | b;             // or
   cout << "Line 2 - Value of c is: " << c << endl ;

   c = a ^ b;             // xor
   cout << "Line 3 - Value of c is: " << c << endl ;

   c = ~a;                // -compliment
   cout << "Line 4 - Value of c is: " << c << endl ;

   c = a << 2;            // shift operator
   cout << "Line 5 - Value of c is: " << c << endl ;

   c = a >> 2;            // shift operator
   cout << "Line 6 - Value of c is: " << c << endl ;

   return 0;
}
