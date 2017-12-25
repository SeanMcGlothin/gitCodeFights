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
  std::vector<int> inputSeq;
  inputSeq.push_back(1);
  inputSeq.push_back(2);
  inputSeq.push_back(10);
  inputSeq.push_back(3);
  cout << "There is an increasing sequence: " << almostIncreasingSequence(inputSeq) << endl;
  return 0;
}
