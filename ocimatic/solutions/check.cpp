#include <iostream>
using namespace std;

int correct(int d, int w) {
    int r = 0;
    if (--w > 4L) {
        r += 7L - w;
        w = 0L;
    }
    r += d + (w + d) / 5L * 2L;
    return r;
}

int solution(int D, int W){
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

    return suma_total;
}

int main() {

    for(int w = 1; w <= 7; w++) {
        for(int d = 1000000000; d <= 10000000000; d+=1000000000) {
            if(correct(d, w) != solution(d, w)){
                cout << "Error" << endl;
                cout << "D:" << d << " , W:" << w << endl; 
                cout << correct(d, w) << endl;
                cout << solution(d, w) << endl;
            }
        }
    }
    return 0;
}