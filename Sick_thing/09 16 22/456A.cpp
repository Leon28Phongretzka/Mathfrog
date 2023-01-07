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
typedef set<int> si;
typedef set<ll> sll;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fora1(i, n) for (auto &i : n)
#define fora2(i, n) for (auto i : n)
#define Len 100005
// long long angle[25]={60,90,108,120,135,140,144,150,156,160,162,165,168,170,171,172,174,175,176,177,178,179,180};
void solve()
{
    int n; cin >> n;
    // mii s;
    int flag=-1;
    int x,y;
    forn(i, n)
    {
        cin >> x >> y;
        if(x!=y) 
        {
            cout << "Happy Alex\n"; return;
        }
    }
    // if(flag) cout << "Happy Alex\n";
    cout << "Poor Alex\n";
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    // int tt; cin >> tt; for (int i = 1; i <= tt; i++) solve();
    solve();
}