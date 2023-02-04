#include <iostream>

using namespace std;

// struct Rectangle
// {
//   int length;
//   int width;

// };

// void initialize(struct Rectangle *r, int l, int w)
// {
//   r->length=l;
//   r->width=w;
// }

// int area(struct Rectangle r)
// {
//   return r.length*r.width;
// }

// void changeLength(struct Rectangle *r, int l)
// {
//   r->length=l;
// }

class Rectangle
{
  private:
    int length;
    int width;
  public:
    Rectangle(){length=width=1;}
    Rectangle(int l, int w);
    int area();
    int perimeter();
    int getLength(){return length;}
    void setLength(int l){length=l;}
    ~Rectangle();
};

Rectangle::Rectangle(int l, int w)
{
  length = l;
  width = w;
}

int Rectangle::area()
{
  return length*width;
}

int Rectangle::perimeter()
{
  return 2*(length+width);
}

Rectangle::~Rectangle()
{
  
}

int main() {
  // struct Rectangle r;  
  // initialize(&r, 10, 5);
  // cout << area(r);
  // changeLength(&r, 20);
  Rectangle r(10,5);
  cout << r.area() << "\n" ;
  cout << r.perimeter() << "\n";
  r.setLength(20);
  cout << r.getLength() << "\n";
  
  
}

