#include <iostream>

using namespace std;

const int M = 5, N = 4;

int main()
{
  auto index = [] (int a, int b) {return a + (b - 1) * M;};

  cout << index(3, 3) << endl;

  return 0;
}
