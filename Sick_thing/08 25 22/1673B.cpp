#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 0; i < int(n); i++)
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
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int l=s.length();
    map<char,int> mp;
    int cnt=0;
    //dung map de danh dau so luong phan tu
    for(int i=0; i<s.length(); i++)
    {
        if(!mp[s[i]]) cnt++;
        mp[s[i]] = 1;
    }
    int ok=1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!=s[i%cnt]) ok=0;
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main()
{
	int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
