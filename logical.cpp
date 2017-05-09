#include <iostream>
using namespace std;

int main() {
   int a = 15;
   int b = 20;
   int c ;

   if ( a && b ) {
      cout << "Line 1 - Condition is true"<< endl ;
   }

   if ( a || b ) {
      cout << "Line 2 - Condition is true"<< endl ;
   }

   /* Let's change the values of  a and b */
   a = 15;
   b = 18;

   if ( a && b ) {
      cout << "Line 3 - Condition is true"<< endl ;
   } else {
      cout << "Line 4 - Condition is not true"<< endl ;
   }

   if ( !(a && b) ) {
      cout << "Line 5 - Condition is true"<< endl ;
   }

   return 0;
}
