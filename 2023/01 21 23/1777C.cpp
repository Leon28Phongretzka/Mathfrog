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
// Find all the divisors of a number
vector<int> divisors(int n)
{
    vector<int> res;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            res.pb(i);
            if(i*i!=n) res.pb(n/i);
        }
    }
    return res;
}
void solve()
{
    int n,m; cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.rbegin(),a.rend());
    vector<int> div(m);
    int left = 0, right = 0;
    for(int i=0; i<m; i++) div[i] = 0;
    div[1]=1;
    for(int i=0; i<n; i++)
    {
        vector<int> d = divisors(a[i]);
        
        for(int j=0; j<d.size(); j++)
        {
            if(d[j] < m && div[d[j]]==0)
            {
                div[d[j]] = 1;
            }
        }

        
    }
    


    
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
