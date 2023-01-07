#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef multiset<ll> msll;
typedef multimap<ll,ll> mmll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<bool, ll> pbl;
typedef pair<ul, int> pui;
typedef set<ll> sll;
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
typedef vector<pii> vpii;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (ll i = 0; i < ll(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 100005
const int MOD = 1000000007;
void solve() 
{
    ll n; cin >> n;
    mll s;
    ll bug1=0, bug2=0, bug3=0;
    mll::iterator mt;
    int k=0;
    for(int i=0; i<n; i++)
    {
        ll x; cin >> x;
        bug1+=x;
    }
    for(int i=0; i<n-1; i++)
    {
        ll x; cin >> x;
        bug2+=x;
    }
    for(int i=0; i<n-2; i++)
    {
        ll x; cin >> x;
        bug3+=x;
    }
    cout << bug1-bug2 << endl;
    cout << bug2-bug3 << endl;
}
int main() 
{
    FAST_IO;
    //freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    //int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    solve();
}