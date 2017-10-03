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
#include <algorithm>
#include <cmath>
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

  sort(meblins.begin(), meblins.end(), [](pair<int,int> a, pair<int,int> b) {
      return dist2(a) < dist2(b);
    });

  cout << (int) ceil(sqrt(dist2(meblins[K-1]))) << endl;
}
