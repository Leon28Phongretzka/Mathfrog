#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
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
typedef vector<string> vs;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fora(i, n) for (auto i: n)
#define Len 100005
void solve()
{
    string s;
    cin >> s;
    int n = sz(s);
    //cout << n << endl;
    vi pos;
    //Create pos R by vector pos
    //the first element is 0
    //the last element is n+1
    pos.pb(0);
    forn(i, n)
    {
        if (s[i] == 'R')
            pos.pb(i + 1);
    }
    pos.pb(n+1);
    int k = sz(pos);
    int ans=0;
    forn(i,k-1)
    {
        ans=max(ans,pos[i+1]-pos[i]);
    }
    cout << ans << endl;
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; cin.ignore(); for (int i = 1; i <= tt; i++) solve();
    // solve();
}