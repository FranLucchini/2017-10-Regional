#include <iostream>
#include <sstream>
#include <utility>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <functional>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
int T,C,Pt,Pc,Rt,Rc;
	cin >> T;
	cin >> Pt;
	cin >> Rt;
	cin >> C;
	cin >> Pc;
	cin >> Rc;
	if(T > C){cout << (T-C)*min(Rt,Pc) << endl;}
	else{cout << (C-T)*min(Pt,Rc) << endl;}
}
