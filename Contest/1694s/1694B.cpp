#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef map<string,int> msi;
typedef map<string,ll> msll;
typedef multiset<ll> msetll;
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
void subString(string s, int n)
{
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
    int ans0=0;
    int ans1=0;
    int ans=n;
    for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
            cout << s.substr(i, len) << " ";
        }
        cout << endl;
    }
    //if(ans0==ans1) ans++;
    //return ans;
}
void solve() 
{
	int n; cin >> n;
    string s; cin >> s;
    //cout << s << endl;
   ll ans=n;
    for(int i=1; i<n; i++)
    {
        if(s[i]!=s[i-1]) ans+=i;
    }
    cout << ans << endl;
}

int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    //solve();
}