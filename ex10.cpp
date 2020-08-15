#include <iostream>

using namespace std;

int main()
{
  int a = 5;
  char b[3];

  cout << &a << endl;
  cout << &b << endl;

  int *i;
  i = &a;

  cout << i << endl;
  cout << *i << endl;

  return 0;
}
