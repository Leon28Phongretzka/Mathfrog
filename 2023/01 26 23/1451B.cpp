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
    int n,k; cin >> n >> k;
    string s; cin >> s;
    int ok = 0;
    for(int i=0; i<k; i++)
    {
        int l,r; cin >> l >> r;
        l--, r--;
		int L = 0, R = n - 1;
		while(s[R] != s[r]) R--;
		while(s[L] != s[l]) L++;
		printf("%s\n", L != l or R != r ? "YES" : "NO");
    }

}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}