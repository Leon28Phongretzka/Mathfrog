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
    ll n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    int l = 1, r = n*n, t = 0;
    for(ll i=0 ;i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            if(t) a[i][j]=l++;
            else a[i][j]=r--;
            t^=1;
        }
        if(i&1) reverse(a[i].begin(), a[i].end());
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
