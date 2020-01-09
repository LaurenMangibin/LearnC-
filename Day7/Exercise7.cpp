#include <iostream>
#include <cmath>

/* Question 1
//Volume of Sphere
double Volume(int radius){
  return 4 * (M_PI * radius * radius * radius)/3;
}
//Volume of Cylinder
double Volume(int radius, int height){
  return M_PI * radius * radius * height;
}
*/
void Area_Circumference (int r, double& area, double& circumference){
  area = M_PI*r*r;
  circumference = 2*M_PI*r;
  return;
}

double addList (double list[], int length){
  double total = 0;
  for (int i = 0; i < length; i++){
    total += list[i];
  }
  return total;
}

int main(){
  using namespace std;
  /*Question 1 Overloading
  cout << "Cylinder: " << Volume(5, 9) << endl;
  cout << "Sphere: "<< Volume(5) << endl;
  */

  /*Question 2 Pass an Array
  double list[4] = {1.34, 23.234, 23423.4, 34829.234};
  cout << "Total: " << addList(list, 4) << endl;
  */

  /*Question 4 Pass by reference*/
  double area = 0;
  double circumference = 0;
  cout << "Area: " << area << " Circumference: " << circumference << endl;
  Area_Circumference(5, area, circumference);
  cout << "Area: " << area << " Circumference: " << circumference << endl;

  return 0;
}
