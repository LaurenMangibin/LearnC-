#include <iostream>
#include <cmath>

double calcArea(int radius){
  return M_PI*radius*radius;
}

double calcCircumference (int radius){
  return 2*M_PI*radius;
}

int main(){
  using namespace std;

  /*Question 2*/
  // cout<<"Normal int: "<< sizeof(int) << " Unsigned Int:" << sizeof(unsigned int)
  // << " Long int: " << sizeof(long int)<< endl;

  /*Question 3*/
  int radius = -1;
  cout << "Radius Size? ";
  cin >> radius;

  cout << "Area: " << calcArea(radius) << endl;
  cout << "Circumference: " << calcCircumference(radius) << endl;
  return 0;
}
