#include <iostream>
using namespace std;

void pr (const char *a)
{
  cout << a << endl;
}

int main()
{
  char a[] = "Hello, World!";
  pr(a);
  return 0;
}
