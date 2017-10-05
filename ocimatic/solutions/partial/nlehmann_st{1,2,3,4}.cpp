/*
 * -----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <nlehmann@dcc.uchile.cl> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return Nicolás Lehmann
 * -----------------------------------------------------------------------------
 */
#include <iostream>
using namespace std;

int main() {
  int D, W;
  cin >> D >> W;

  W -= 1;
  int business_days = 0;
  int total_days = 0;
  while(business_days < D) {
    if (W < 5)
      business_days += 1;
    total_days += 1;
    W = (W + 1) % 7;
  }
  cout << total_days << endl;
  return 0;
}
