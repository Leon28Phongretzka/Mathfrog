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
    // Idea:
    // c is the possible maxi GCD
    // use selection check
    ll n; cin >> n;
    vector<int> a(n);
    forn(i,0,n) cin >> a[i];
    vector<int> c(1,0);
    vector<int> b;
    vector<bool> used(n, false);
    forn(i,0,n)
    {
        int best = -1;
        int id = -1; 
        forn(j,0,n)
        {
            if( !used[j] && __gcd(c.back(),a[j]) > best)
            {
                best = __gcd(c.back(), a[j]);
                id = j;
            }
        }
        used[id]=true;
        c.pb(best);
        b.pb(a[id]);
    }
    forn(i,0,n) cout << b[i] << " ";
    cout << endl;
    for(int i=0; i<sz(c); i++) cout << c[i] << " ";    
    cout << endl;
    cout << endl;
}
int main()
{
    FAST_IO;
	ll tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
