#include<iostream>
using namespace std;

int g = 20;

int func();

int main() {

  int k = func();
  cout << g << endl;
  cout << k << endl;
  cout << 1.5 << endl;
  cout << 2E-3 << endl;
  cout << true << endl;
  cout << false << endl;


  char a[] = "Hello, dear";
  char b[] = {'h','i','\0'};
  #define pi 3.14;
  #define c "HALLO";

  double p = pi;
  char q[] = c;


//  define pi = 3.14;


  cout << a << endl;
  cout << b << endl;
  cout << "hello, \
dear" << endl;
  cout << "hello, " "d" "ear" << endl;
  cout << p << endl;
  cout << q << endl;




  return 0;
}

int func(){
  int g = 10;
  return g;
}
