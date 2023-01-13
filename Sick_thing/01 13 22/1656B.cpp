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
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    bool ok = false;
    for(int i=0; i<n; i++)
    {
        int x=a[i]+k;
        auto it = lower_bound(a.begin(),a.end(),x);
        cout << *it << endl;
        if(it!=a.end()&&*it==x)
        {
            ok = true;
            break;
        }
    }
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
