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
ll f(ll x){
    ll cur=1;
    while(cur<=x){
        cur*=2;
    }
    return cur;
}
void solve()
{
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<k; i++)
    {
        int j,k; cin >> j >> k;
        if(k<j) swap(j,k);
        a[j]=min(a[j],k-1);
    }
    int res = n;
    for(int i=n-1; i>0; i--)
    {
        a[i-1]=min(a[i-1],a[i]);
        res+=a[i];
    }
    cout << res << endl;
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
