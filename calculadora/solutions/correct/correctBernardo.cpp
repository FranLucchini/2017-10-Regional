#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)n; ++i)
#define repx(i,x,n) for(int i = x; i < (int)n; ++i)
#define invrep(i, n) for(int i = n-1; i >= 0; --i)
#define pb push_back
#define coutv(v)  cout << #v << ": "; rep(i, v.size())  cout << v[i] << " "; cout << endl;
#define coutvar(n) cout << #n << ": " << n << endl;

using namespace std;
typedef long long intt;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vector<int>> vvi;
typedef vector<vector<ii>> vvii;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  map<char, char> M;
  M['6'] = '9';
  M['9'] = '6';
  M['0'] = '0';
  M['8'] = '8';
  M['2'] = '5';
  M['5'] = '2';

  string s; cin >> s;
  bool invertible = true;
  rep(i, s.size()){
    if(M.count(s[i]) == 0 or M[s[i]] != s[s.size()-1-i])
      invertible = false;
  }
  cout << (invertible ? "Wax" : "Camilo") << endl;
	return 0;
}
