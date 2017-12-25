#include <iostream>
#include "add.h"
#include "centuryFromYear.h"
using namespace std;
/*
  Runs codefights arcade tests
  Now on GitHub!!
 */
//int centuryFromYear(int year);
int main(){
  int inputYear;
  cout << "Enter a year: " << endl;
  cin >> inputYear;
  cout << "The century is: " << centuryFromYear(inputYear) << endl;
  return 0;
}
