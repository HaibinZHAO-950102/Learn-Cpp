#include <iostream>
using namespace std;

int sum(int, int);
int sum(int, int, int);

int main()
{
  cout << sum(1,2) << endl;
  cout << sum(1,2,3) << endl;

  return 0;
}

int sum(int a, int b)
{
  return a + b;
}
int sum(int a, int b, int c)
{
  return a + b + c;
}
