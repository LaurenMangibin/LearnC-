#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
  virtual double Area() = 0;
  virtual void Print() = 0;
  virtual ~ Shape() {
    cout << "Destroy Shape" << endl;
  }
};

class Triangle: public Shape
{
private:
  int base;
  int height;

public:
  Triangle(int inputBase = 0, int inputHeight = 0)
  :base(inputBase), height(inputHeight){}

  double Area() override {
    return 0.5 * base * height;
  }
  void Print() override {
    cout << "Triangle" << endl;
  }
};

class Circle: public Shape
{
private:
  int radius;

public:
  Circle(int inputRadius = 0)
  :radius(inputRadius) {}

  double Area() override {
    return M_PI*radius*radius;
  }
  void Print() override {
    cout << "Circle" << endl;
  }
};

int main(){
  Triangle *t = new Triangle(1,2);
  Circle *c = new Circle(2);
  c->Print();
  cout << "C area: " << c->Area() << endl;
  t->Print();
  cout << "T area: " << t->Area() << endl;
  delete t;
  delete c;

  return 0;
}
