#include <iostream>

using namespace std;

int main()
{
  int a = 100;

  int *i;
  i = &a;
  cout << i << endl;
  cout << *i << endl;

  int *j = &a;
  cout << j << endl;
  cout << *j << endl;

  return 0;
}
