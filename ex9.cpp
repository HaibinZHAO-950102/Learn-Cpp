#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
  char a[100] = "Hallo, World!";
  char b[100] = "Hi!";
  char c[100];

  strcpy(c, a);   // 复制a到c
  cout << a << endl;
  cout << c << endl;
  cout << strlen(c) << endl;
  cout << strlen(b) << endl;

  strcat(a, b);
  cout << a << endl;


  cout << strcmp(a, c) << endl;
  cout << strcmp(a, b) << endl;
  cout << strcmp(b, a) << endl;

  string d = "Hello";
  string e;

  int i = d.size();
  cout << i << endl;


  return 0;
}
