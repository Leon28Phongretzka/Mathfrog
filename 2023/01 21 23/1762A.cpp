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
	vector<ll> a(n);
	ll sum=0, ct=1e9;
	for(int i=0; i<n; i++) 
	{
		cin >> a[i];
		sum+=a[i];
	}
	for(int i=0; i<n; i++)
	{
		ll cnt=0;
		while((a[i]-a[i]/2)%2==0)
		{
			a[i]=a[i]/2;
			cnt++;
		}
		ct=min(ct, cnt);
	}
	if(sum%2) cout << ct+1 << endl;
	else cout << 0 << endl;
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
