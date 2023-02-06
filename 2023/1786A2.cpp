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
    int n, cnt = 1, real = 0, dealt = 0; cin >> n;
 
    vector<vector<int>> ans(2, vector<int>(2, 0));
    for(int i=1; n>0; i++)
    {
        if(cnt%2==0) real^=1;
        int toDeal = min(n, i);
        ans[real][dealt%2] += (toDeal+1)/2;
        ans[real][1-dealt%2] += toDeal/2;
        n-=toDeal;
        dealt += toDeal;
        cnt++;
    }
    cout << ans[0][0] << " " << ans[0][1] << " " << ans[1][0] << " " << ans[1][1];
    cout << endl;

}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
