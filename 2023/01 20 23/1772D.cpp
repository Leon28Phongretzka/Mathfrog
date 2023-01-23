#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
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
    vector<int> a(n);
    forn(i,0,n) cin >> a[i];
    int mn = 0, mx = int(1e9);
        for(int j = 0; j + 1 < n; j++)
        {
            int x = a[j];
            int y = a[j + 1];
            int midL = (x + y) / 2;
            int midR = (x + y + 1) / 2;
            if(x < y)
                mx = min(mx, midL);
            if(x > y)
                mn = max(mn, midR);
        }
        if(mn <= mx) cout << mn << endl;
        else cout << -1 << endl;

}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
