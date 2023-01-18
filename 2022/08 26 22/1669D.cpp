#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<bool, ll> pbl;
typedef pair<ul, int> pui;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<int> vi;
typedef vector<int>::iterator ip;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pbl> vpbl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<pdd> vpdd;
typedef vector<string> vs;
typedef vector<pui> vpui;
typedef vector<ul> vu;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 0; i <= int(n); i++)
void solve()
{
    int n;
	cin >> n;
	string s;
	cin >> s;
	//use W in the last element like a pivot
	//it means W will close the loop of the string.
	s.push_back('W');
	int ans = 1;
	int r = 0,b = 0;
	for (auto l : s) 
    {
		if (l == 'W') 
        {
			if (r + b > 0 && (r == 0 || b == 0)) 
            {
				ans = 0;
			}
			r = 0; b = 0;
		}
		if (l == 'R') 
        {
			r += 1;
		}
		if (l == 'B') 
        {
			b += 1;
		}
        cout << (ans ? "YES\n" : "NO\n");
		}

}
int main()
{
    FAST_IO;
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}