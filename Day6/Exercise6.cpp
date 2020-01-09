#include <iostream>

int main(){
  using namespace std;

  /*Questions 1 and 2*/
  // int arr1[5] = {0,1,2,3,4};
  // int arr2[5] = {5,6,7,8,9};
  //
  // for (int i = 4; i>=0; i--){
  //   cout<< arr1[i] + arr2[i]<< endl;
  // }

  /*Question 3*/
  // cout << "How many numbers of the Fibonnacci sequence would you like to see? " << endl;
  // int number = 0;
  // cin >> number;
  //
  // long int num1 = 0 ; long int num2 = 1;
  //
  // for (int i = 0; i < number; i++){
  //     cout << num1 + num2 << endl;
  //
  //     long temp = num2;
  //     num2 = num1 + num2;
  //     num1 = temp;
  // }

  /*Question 4*/
  enum Rainbow{
    Red = 0,
    Orange,
    Yellow,
    Green,
    Blue,
    Purple
  };

  cout << "Enter a number and see if it's a color in the rainbow! I'm too lazy" << endl;
  int color = -1;
  cin >> color;

  switch(color){
    case Red:
    case Orange:
    case Yellow:
    case Green:
    case Blue:
    case Purple:
      cout << "Yes! That color is in the rainbow" << endl;
      break;
    default:
      cout << "Nope. That color is not in the rainbow" << endl;

  }

  return 0;
}
