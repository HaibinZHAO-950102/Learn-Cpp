#include <iostream>
using namespace std;

int main()
{
  int i = 5, s = 0;

  while (i --) {
    cout << i << endl;
    s += (i + 1) * (i + 1);
  }
  cout << i << endl;
  cout << s << endl;

  int s1 = 0;
  for (size_t i = 0; i < 5; i++) {
    /* code */
    s1 += (i + 1) * (i + 1);
  }
  cout << s1 << endl;

  int ar[5] = {3, 2, 5, 7, 9};
  for (auto &x : ar) {
    cout << x << endl;
  }

  int k = 1;
  do {
    cout << k << endl;
  } while(k > 10);




















  return 0;
}
