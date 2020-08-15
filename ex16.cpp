#include <iostream>

using namespace std;

class Box
{
  public:
    double length;
    double breadth;
    double height = 1;

    void setlen(double len)
    {
      length = len;
    }
};

int main()
{
  Box box;

  box.breadth = 2;
  box.setlen(3);

  cout << box.length * box.breadth * box.height << endl;

  return 0;
}
