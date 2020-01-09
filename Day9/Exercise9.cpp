#include <iostream>
#include <string>
using namespace std;

class Human{
private:
  int age;
  string name;

public:
  Human(int humanAge = 0, string humanName = "none")
  :age(humanAge), name(humanName) {}
};

class Circle{
private:
  int radius;
  const double pi = 3.14159;

public:
  Circle(int inputRadius = 0)
  :radius(inputRadius) {}

  double Area(){
    return pi*radius*radius;
  }

  double Circumference(){
    return 2*pi*radius;
  }

};


int main(){

  Circle* circ = new Circle(4);
  cout << "Circumference: " << circ->Circumference() << endl;
  cout << "Area: " << circ->Area() << endl;

  delete circ;

  return 0;

}
