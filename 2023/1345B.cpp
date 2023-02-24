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
    vector<int> dp(Len);
    // 2 7 15 26 40 57 
    // công thức chung?
    // 3*0+2*1 = 2
    // 3*1+2*2 = 7
    // 3*3+2*3 = 15
    // 3*6+2*4 = 26
    // 3*10+2*5 = 40
    for(int i=0; i<n; i++)
    {
        dp[i] = dp[i-1] + 3*i + 2;
    }
    
    

}

int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
