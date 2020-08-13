#include <iostream>
using namespace std;

int main ()
{
  // 变量定义
  int a, b;
  int c;
  float f;

  enum color { red, blue = 5, green } g;
  g = green;


  // 实际初始化
  a = 10;
  b = 20;
  c = a + b;

  cout << c << endl;

  f = 70.0/3.0;
  cout << f << endl;

  cout << g << endl;


  return 0;
}
