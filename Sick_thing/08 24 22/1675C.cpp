#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(x) ((int)(x.size()))
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
int search(int l, int r, char *ar)
{
	for(int i=0; i<=r; i++)
    {
        if(ar[i]=='1') l=i;
        else if(ar[i]=='0')
        {
            r=i; 
            break;
        }
    }
    return r-l+1;
}
void solve()
{
    string s;
    cin >> s;
    int n=s.length();
    int ans=0;
    //cout << n << endl;
    if(n==1) cout << 1 << endl;
    else
    {
        int l=0;
        int r=n-1;
        for(int i=0; i<=r; i++)
        {
            if(s[i]=='1') l=i;
            else if(s[i]=='0')
            {
                r=i; 
                break;
            }
        }
        cout << r-l+1 << endl;
    }
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}