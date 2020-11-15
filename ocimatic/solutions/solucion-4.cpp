#include <iostream>
using namespace std;

int main() {
  // Leemos el input
  int D, W;
  cin >> D >> W;

  W--;

  int suma_total = 0;

  if( W == 5){
    suma_total += 2;
    W = 0;
  }

  if( W == 6){
    suma_total += 1;
    W = 0;
  }

  int dias_extra = (W + D) / 5 * 2;
  
  suma_total += D + dias_extra;

  cout << suma_total << endl;

  return 0;
}