/*
 * -----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <nlehmann@dcc.uchile.cl> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return Nicolás Lehmann
 * -----------------------------------------------------------------------------
 */

#include <vector>
#include <iostream>
using namespace std;

long long pow2(long long a) {
  return a * a;
}

long long dist2(pair<int, int> a) {
  return pow2(a.first) + pow2(a.second);
}

int main() {
  int N, K;
  cin >> N >> K;

  vector<pair<int,int>> meblins;
  for (int i = 0; i < N; ++i) {
    int X, Y;
    cin >> X >> Y;
    meblins.emplace_back(X, Y);
  }

  long long r = 0;
  while(true) {
    int count = 0;
    for (int i = 0; i < N; ++i)
      if(r*r >= dist2(meblins[i]))
        count++;
    if (count >= K)
      break;
    r++;
  }
  cout << r << endl;
}
