#include <iostream>
using namespace std;

int main() {
  // Leemos el input
  int W;
  long long D;

  cin >> D >> W;

  W--;

  long long suma_total = 0L;

  if( W > 4){
    suma_total += 7L - W;
    W = 0;
  }

  long long dias_extra = (W + D) / 5L * 2L;
  
  suma_total += D + dias_extra;

  cout << suma_total << endl;

  return 0;
}