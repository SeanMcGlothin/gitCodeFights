#include <iostream>
#include <vector>

using namespace std;
/*
 * Start Testing Arrays
 */
//int centuryFromYear(int year);
int main(){
  int *val = new int;
  do{
    cout << "Enter a val" << endl;
    cin >> *val;
    if (*val){
      cout << "Val = " << *val << endl;
    }else{
      cout << "Aborting" << endl;
      break;
    }
  }while(*val);
  return 0;
}
