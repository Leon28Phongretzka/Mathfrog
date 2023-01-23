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
int gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
void solve()
{
    int n; cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    ll sum = a[0];
    for(int i=1; i<n; i++)
    {
        sum*=a[i];
    }
    cout << (sum+(n-1))*2022 << endl;
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
