#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define forn(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a; i >= b; i--)
#define fora(i, n) for(auto i:n)
#define Len 100005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
void solve()
{
    int n; cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x; a.pb(x);
    }
    vector<int> odd1;
    vector<int> even1;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0) even1.pb(a[i]);
        else odd1.pb(a[i]);
    }
    bool ok = is_sorted(odd1.begin(), odd1.end())&&is_sorted(even1.begin(), even1.end());
    ok &= is_sorted(even1.begin(), even1.end());
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
