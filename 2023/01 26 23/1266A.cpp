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
    string s; cin >> s;
    int sum=0, zero=0, even = 0;
    for(int i=0; i<sz(s); i++)
    {
        sum = sum + (s[i]-'0');
        zero = zero + (s[i]=='0');
        if(s[i]%2==0) even++;
    }
    // cout << sum << " " << zero << " " << even << endl;
    if(sum%3==0&&zero>0&&even>1) cout << "red" << endl;
    else cout << "cyan" << endl;

}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}