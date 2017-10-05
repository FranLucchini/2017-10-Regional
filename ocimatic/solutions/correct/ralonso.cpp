#include <iostream>

using namespace std;

int main() {
  int w;
  long long d, r = 0L;
  cin >> d >> w;
  if (--w > 4L) {
    r += 7L - w;
    w = 0L;
  }
  r += d + (w + d) / 5L * 2L;
  cout << r << endl;
  return 0;
}
