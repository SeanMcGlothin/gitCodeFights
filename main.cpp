#include <iostream>
#include <vector>
#include "add.h"
#include "centuryFromYear.h"
#include "almostIncreasingSequence.h"

using namespace std;
/*
  Runs codefights arcade tests
  Now on GitHub!!
 */
//int centuryFromYear(int year);
int main(){
  int inputSeq;
  cout << "Enter a Sequence: " << endl;
  cin >> inputSeq;
  cout << "There is an increasing sequence: " << almostIncreasingSequence(inputSeq) << endl;
  return 0;
}
