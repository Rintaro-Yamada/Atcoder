# include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (n); ++i)
# define rep2(i, a, b) for (int i = (a); i < (b); ++i)
# define MAX 128
# define fst first
# define sec second
# define pb push_back
# define mp make_pair
# define ALL(x) (x).begin(), (x).end() //vectorのソート. sort(ALL(x))と書くと昇順に変更される.
# define debug(x) cerr << #x << ": " << x << '\n'
# define bit(n) (1LL << (n))
using namespace std;
using ll = long long;
using pii = pair<int, int>;
const double PI = 3.141593;
const int MOD = (int)1e9 + 7;
const int INF = 100100100;
const double EPS = 1e-9;
template <class T>
bool chmax(T &a, const T &b){if (a < b){a = b;return 1;}return 0;}
template <class T>
bool chmin(T &a, const T &b){if (b < a){a = b;return 1;}return 0;}
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; } //最大公約数
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }     //最小公倍数
ll combination(ll n, ll r){if (r * 2 > n)r = n - r;ll dividend = 1;ll divisor = 1;for (ll i = 1; i <= r; ++i){dividend *= (n - i + 1);divisor *= i;}return dividend / divisor;} //組み合わせ

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  return 0;
}