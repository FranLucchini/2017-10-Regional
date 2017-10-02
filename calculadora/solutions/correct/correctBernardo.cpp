#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)n; ++i)
#define repx(i,x,n) for(int i = x; i < (int)n; ++i)
#define invrep(i, n) for(int i = n-1; i >= 0; --i)
#define pb push_back
#define coutv(v)  cout << #v << ": "; rep(i, v.size())  cout << v[i] << " "; cout << endl;
N#define coutvar(n) cout << #n << ": " << n << endl;

using namespace std;
typedef long long intt;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vector<int>> vvi;
typedef vector<vector<ii>> vvii;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  map<int, int> M;
  M[6] = 9;
  M[9] = 6;
  M[0] = 0;
  M[8] = 8;
  M[2] = 2;
  M[5] = 5;
  M[1] = 1;
  int N; cin >> N;
  bool invertible = true;
  vi s(N); rep(i, N) cin >> S[i];
  rep(i, M){
    if(M.count(s[i]) == 0 or M[s[i]] != s[s.size()-1-i])
      invertible = false;
  }
  cout << (invertible ? "Mauricio" : "Camilo") << endl;
	return 0;
}
