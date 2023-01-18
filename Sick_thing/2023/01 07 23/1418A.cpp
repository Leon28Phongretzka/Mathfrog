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
    // k torches = k sticks + k coals ( proven )
    // k coals <= k*y sticks ( proven )
    // k+k*y = k * (y+1) sticks ( proven )
    // 1 stick => x-1 extra ( proven )
    int x,y,k;
    cin >> x >> y >> k;
    long long need = ( long long ) k *(y+1) - 1;
    long long ans = ( need + (x-2))/(x-1)+k;
    cout << ans << endl;

}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
