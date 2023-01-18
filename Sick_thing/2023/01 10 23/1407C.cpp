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
    // Pick two numbers in da set
    // Compare and find smaller one
    // Erase it
    int n; cin >> n;
    auto Ask = [&](int x, int y)
    {
        cout << "?" << " " << x+1 << " " << y+1 << endl;
        int z; cin >> z;
        return z; 
    };
    vector<int> p(n);
    int i=0;
    for (int j = 1; j < n; j++) 
    {
        int pi_mod_pj = Ask(i, j);
        int pj_mod_pi = Ask(j, i);
        // cout << pi_mod_pj << " " << pj_mod_pi << endl;
        if (pi_mod_pj > pj_mod_pi) 
        {
            // pi < pj
            p[i] = pi_mod_pj;
            i = j;
        } 
        else 
        {
            // pi > pj
            p[j] = pj_mod_pi;
        }
    }
    p[i] = n;
    cout << "!";
    for (int i = 0; i < n; i++) 
    {
        cout << " " << p[i];
    }
    cout << endl;
}
int main()
{
    FAST_IO;
	// ll tt; cin >> tt; while(tt--) solve();
	solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
