#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(x) ((int)(x.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<bool, ll> pbl;
typedef pair<ul, int> pui;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<int> vi;
typedef vector<int>::iterator ip;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pbl> vpbl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<pdd> vpdd;
typedef vector<string> vs;
typedef vector<pui> vpui;
typedef vector<ul> vu;
unordered_set<ll> cubes;
const ll N = 1'000'000'000'000L;
void precalc() 
{
  for (ll i = 1; i * i * i <= N; i++) 
  {
    cubes.insert(i * i * i);
  }
}
void answer(int ans)
{
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}
void solve()
{
    ll x;
    cin >> x;
    if(x==1)
    {
        cout << "NO\n";
        return;
    }
    ll k1=cbrt(x/2);
    ll k2=cbrt(x);
    for (ll i = k1; i<=k2; i++) 
    {
        if (cubes.count(x - i * i * i)) 
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    precalc();
    int t;
    cin >> t;
    while(t--) 
    {
        solve();
    }
}