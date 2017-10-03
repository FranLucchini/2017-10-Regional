/*
 * -----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <nlehmann@dcc.uchile.cl> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return Nicolás Lehmann
 * -----------------------------------------------------------------------------
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> T(3);
  cin >> T[0] >> T[1] >> T[2];

  vector<int> C(3);
  cin >> C[0] >> C[1] >> C[2];
  if (T[0] > C[0])
    swap(T, C);

  int minCost = 1 << 30;
  for (int i = T[0]; i <= C[0]; ++i)
    minCost = min(minCost, (i - T[0])*T[1] + (C[0] - i)*C[2]);

  cout << minCost << endl;
}
