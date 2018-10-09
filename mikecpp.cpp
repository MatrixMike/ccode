#include <iostream>

// g++ mikecpp.cpp  -o mikecpp

using namespace std;

int ledarray[] = { 2, 3, 4, 5, 6 };

int numLEDs = 3;
int
main ()
{
  int numLEDs = 4;

//  int num = 1;
  int z = 3;
  cout << ledarray[z];
  cout << " separator ";
  //   cin >> num;   // mod by mike : read from cin and put integer into num...
  // num % 2 computes the remainder when num is divided by 2
  //    if ( num % 2 == 0 )
// for ( z=0; z < numLEDS; z++) {
  // /  {
  //    cout << num << " is even ";   // standard out mjh 
  cout << numLEDs << " size ";	// standard out mjh 

  // /  }


  return 0;
}
