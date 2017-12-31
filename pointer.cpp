#include <iostream>
#include <vector>
using namespace std;
void pointer(){
  int *val = new int;
  vector<int> inputSeq;
  do{
    cout << "Enter a val" << endl;
    cin >> *val;
    if (*val){
      //cout << "Val = " << *val << endl;
      inputSeq.push_back(*val);
      cout << "The pointer position is " << val << endl;
    }//else{
      //cout << "Aborting" << endl;
      //break;
    //}
  }while(*val);
  cout << "Your vector is:";
  for (vector<int>::iterator it = inputSeq.begin(); it != inputSeq.end(); ++it){
    cout << ' ' << *it;
  }
  cout << endl;
}
