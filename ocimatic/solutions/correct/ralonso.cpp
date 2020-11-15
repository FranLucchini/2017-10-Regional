#include <iostream>

using namespace std;

int main() {
  int w;
  long long d, r = 0L;
  cin >> d >> w;
  if (--w > 4L) {
    // cout << w << endl;
    r += 7L - w;
    w = 0L;
  }
  cout << w << endl;
  r += d + (w + d) / 5L * 2L;
  cout << (w + d) / 5L << endl;
  cout << r << endl;
  return 0;
}
