#include <iostream>
using namespace std;

main() {
   int a = 34;
   int c ;

   c =  a;
   cout << "Line 1 - =  Operator, Value of c = : " <<c<< endl ;

   c +=  a;
   cout << "Line 2 - += Operator, Value of c = : " <<c<< endl ;

   c -=  a;
   cout << "Line 3 - -= Operator, Value of c = : " <<c<< endl ;

   c *=  a;
   cout << "Line 4 - *= Operator, Value of c = : " <<c<< endl ;

   c /=  a;
   cout << "Line 5 - /= Operator, Value of c = : " <<c<< endl ;


   return 0;
}
