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
#define A189 4005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
bool check(int x, int y)
{
    if(x==1&&y==1) return 1;
    // else return 0;
}
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int x = 0, y = 0;
    bool check = false;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='U') y++;
        else if(s[i]=='D') y--;
        else if(s[i]=='R') x++;
        else if(s[i]=='L') x--;
        // cout << x << " " << y << endl;
        if(x==1&&y==1) 
        {
            check = true;
            break;
        }
    }
    if(check) cout << "YES" << endl;
    else cout << "NO" << endl;
    

}

int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
