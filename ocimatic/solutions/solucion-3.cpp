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

  if(W + D > 4 && W + D <= 9) { // Revisamos si debemos contar un fin de semana
    suma_total += D + 2;
  } else if (W + D > 9) { // Revisamos si debemos contar dos fines de semana
    suma_total += D + 4;
  } else {
    suma_total += D;
  }

  cout << suma_total << endl;
  
  return 0;
}