#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef multiset<ll> msll;
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
typedef vector<pii> vpii;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sr insert
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (ll i = 0; i < ll(n); i++)
#define fora(i, n) for (auto i:n)
#define fora2(i, n) for (auto &i : n)
#define Len 100005
const int MOD = 1000000007;
const int N = 2e5 + 10;
ll a[N], b[N], c[N], d[N],freq[N];
void solve() 
{
    ll n, q;
	cin >> n >> q;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
 
	while(q--) 
    {
		int l, r;
		cin >> l >> r;
		freq[l]++;
		freq[r + 1]--;
	}
 
	for(int i = 1; i <= n; i++)
		freq[i] += freq[i - 1];
	sort(freq + 1, freq + n + 1);
	// for(int i=1; i<=n; i++) cout << freq[i] << " ";
	// cout << endl;
	ll ans = 0;
	for(int i = 1; i <= n; i++)
		ans += a[i] * freq[i];
	cout << ans;

    
    
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    // int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    solve();
}
