#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   
   cin >> highwayNumber;

   bool isOddInterstate;
   bool isPrimaryInterstate;
   bool isAuxiliaryInterstate;
   bool isNonValidInterstate;
   
   if (highwayNumber % 2 == 1) {                            // finds if odd
      isOddInterstate = true;
      }
   else
      isOddInterstate = false;
   
   if (highwayNumber >=1 && highwayNumber <=99) {           // finds if Primary or Auxiliary Interstate
      isPrimaryInterstate = true;
      isAuxiliaryInterstate = false;
   }
   else {
      isAuxiliaryInterstate = true;
      isPrimaryInterstate = false;
   }
   
   if (highwayNumber % 100 == 0 || highwayNumber <=0) {     // finds if valid interstate
      isNonValidInterstate = true;
   }
   else
      isNonValidInterstate = false;
      
      
      
      
   if (isNonValidInterstate) {                              // begins output
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }
   else if ( isPrimaryInterstate) {
       cout << "I-" << highwayNumber << " is primary,";
   }
   else 
      cout << "I-" << highwayNumber << " is auxiliary, serving I-" << highwayNumber % 100 << "," ;

   if (!(isNonValidInterstate)) {                          // outputs direction
      if (isOddInterstate) {
         cout << " going north/south." << endl;
      }
      else
         cout << " going east/west." << endl;
   }

   return 0;
}
