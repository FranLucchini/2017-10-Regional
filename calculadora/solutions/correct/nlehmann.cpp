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
using namespace std;

int main() {
  int N;
  vector<int> m = {0, 1, 2, -1, -1, 5, 9, -1, 8, 6};

  cin >> N;
  vector<int> digits(N);
  for (int i = 0; i < N; ++i)
    cin >> digits[i];

  string res = "Mauricio\n";
  for (int i = 0; i <= N/2; ++i) {
    if (digits[i] != m[digits[N - i - 1]]) {
      res = "Camilo\n";
      break;
    }
  }
  cout << res;
}
