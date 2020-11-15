#include <iostream>
using namespace std;

int main() {
  // Leemos el input
  int D, W;
  cin >> D >> W;
  
  // Disminuimos W en 1 para partir desde 0 contando
  W--;

  // Revisamos si debemos contar el fin de semana
  if(W + D > 4) {
    cout << D + 2 << endl;
  } else {
    cout << D << endl;
  }
  
  return 0;
}