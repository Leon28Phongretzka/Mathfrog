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
    vector<int> b(n-1);
    for(int i=0; i<n; i++) cin >> a[i];
    ll sum = 0;
    for(int i=0; i<n; i++) sum+=a[i];
    for(int i=0; i<n-1; i++)
    {
        b[i]=a[i]+a[i+1];
    }
    sort(b.begin(),b.end());
    // for(int i=0; i<n-1; i++) cout << b[i] << " ";
    int min_b = b[0];
    // cout << min_b << endl;
    if(min_b==-2) sum+=4;
    else if(min_b==2) sum-=4;
    cout << sum << endl;
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
