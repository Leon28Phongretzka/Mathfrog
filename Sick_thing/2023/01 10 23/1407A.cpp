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
    // Idea:
    // Divine this vector to two part: Odd index and Even Index
    // If Odd_i XNOR Even_i equal to 1 => Add to elements to vector resule
    // Else if Odd_i ( or Even_i ) = 0 => Add to vector result
    int n; cin >> n; vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    vector<int> v1;
    vector<int> v2;
    for(int i=0; i<n; i++)
    {
        if(i%2==0) v1.pb(a[i]);
        else v2.pb(a[i]);
    }
    vector<int> b;
    for(int i=0; i<n/2; i++)
    {
        if(!(v1[i]^v2[i]))
		{
			b.push_back(v1[i]);
			b.push_back(v2[i]);
		}
        else if(v1[i]==0&&v2[i]==1) b.pb(v1[i]);
        else if(v1[i]==1&&v2[i]==0) b.pb(v2[i]);
    }
    cout << sz(b) << endl;
    for(int i=0; i<sz(b); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
