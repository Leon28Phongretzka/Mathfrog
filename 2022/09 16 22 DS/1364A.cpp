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
#define fora(i, n) for (auto &i : n)
#define Len 100005
void solve()
{
    int n, x;
    cin >> n >> x;
    vi s;
    int count=0, l=-1, r, sum=0;
    forn(i,n)
    {
        int a; cin >> a;
        s.pb(a);
        if(a%x)
        {
            if(l==-1) l=i;
            r=i;
        }
        sum+=a;
    }
    if(sum%x)
    {
        cout << n << endl;
        return;
    }
    else if(l==-1)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << n-min(l+1, n-r) << endl;
        return;
    }
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) solve();
    // solve();
}