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
    int n,l,k; cin >> n >> l >> k;
    vector<int> d(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> d[i];
    }
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    d.push_back(l);
    a.push_back(0);
    const long long inf = (long long) 1e18;
    vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, inf));
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j <= k; j++) 
        {
            for (int p = i - 1; p >= 0; p--) 
            {
                int old_j = j - (i - p - 1);
                if (old_j >= 0) 
                {
                dp[i][j] = min(dp[i][j], dp[p][old_j] + (d[i] - d[p]) * a[p]);
                }
            }
        }
    }
    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j<n+1; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << *min_element(dp.back().begin(), dp.back().end()) << '\n';
}
int main()
{
    FAST_IO;
	// int tt; cin >> tt; while(tt--) solve();
	solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
