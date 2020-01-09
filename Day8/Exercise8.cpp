#include <iostream>

int main(){
  using namespace std;

  /*Question 1*/
  // int number = 3;
  ////add const to prevent changes
  // const int* pNum1 = &number;
  // *pNum1 = 20;
  // int* pNum2 = pNum1;
  // number *= 2;
  // cout << *pNum2 << endl;

  /*Question 5*/
  int* pointToAnInt = new int;
  //added star to pNumberCopy
  int* pNumberCopy = pointToAnInt;
  *pNumberCopy = 30;
  cout << *pointToAnInt;
  //delete pNumberCopy;
  delete pointToAnInt;

  return 0;
}
