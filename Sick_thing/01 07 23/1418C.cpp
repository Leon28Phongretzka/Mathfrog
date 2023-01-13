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
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    // him[i] - the smallest # of skip point required if friends
    // us[i] -- the smallest # of skip point required if our
    vector<int> him(n+1);
    vector<int> us(n+1);
    him[n]=us[n]=0;
    for(int i=n-1; i>=0; i--)
    {
            // him[i]1
            him[i]=us[i+1]+a[i];
            if(i+2<=n)
            {
                him[i]=min(him[i], us[i+2]+a[i]+a[i+1]);
            }

            // us[i]
            us[i] = him[i+1];
            if(i+2<=n)
            {
                us[i]=min(us[i], him[i+2]);
            }
    }

    for(int i=n-1; i>=0; i--) cout << him[i] << " "; cout << endl;
    for(int i=n-1; i>=0; i--) cout << us[i] << " ";cout << endl;

    cout << him[0] << endl;

}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
