#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using pii  = pair<int,int>;
#define rep(i,n) for(ll i=0; i<(n); i++)
#define rep2(i,x,n) for(ll i=x; i<(n); i++)
#define MOD 1000000007
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
const long long INF = 1LL << 60;
const double PI = 3.141593;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}    //最大公約数
ll lcm(ll a,ll b) {return a * b / gcd(a, b);}   //最小公倍数
ll combination(ll n, ll r) {
  if ( r * 2 > n ) r = n - r;
  ll dividend = 1;
  ll divisor  = 1;
  for ( ll i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
    divisor  *= i;
  }
  return dividend / divisor;
}

int main(){

}