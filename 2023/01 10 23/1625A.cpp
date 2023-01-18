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
    vector<vector<int>> cnt(k, vector<int>(2,0));
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        // Convert x to binary
        for(int j=0; j<k; j++)
        {
            int bit = (x >> j) & 1;
            cnt[j][bit]+=1;
        }
    }
    int y=0;
    for(int i=0; i<k; i++)
    {
        if(cnt[i][1]>cnt[i][0])
        {
            y+=1<<i;
        }
    }
    cout << y << endl;
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
