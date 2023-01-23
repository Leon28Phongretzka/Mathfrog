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
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    // Idea:
    // Find the longest subarray has the same difference between the first and last element
    // But, we need to note that, in case the first/last element is 1 and 1000, the subarray length reduce by 1
    // Why? Bcz 1 and 1000 are the first and last element of array ( if the array has )
    // So, we need to add 2 more element to the array, a[0] = 0 and a[n+1] = 1001 in order to make the subarray length correct
    a[0]=0;
    a[n+1]=1001;
    int ans = 0;
    for(int i=0; i<=n; i++)
    {
        for(int j=i+1; j<=n+1; j++)
        {
            if(a[j]-a[i]==j-i)
            {
                ans = max(ans, j-i-1);
            }
        }
    }
    cout << ans << endl;

}
int main()
{
    FAST_IO;
	// int tt; cin >> tt; while(tt--) solve();
	solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
