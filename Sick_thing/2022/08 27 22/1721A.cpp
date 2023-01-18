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
typedef vector<string> vs;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define Len 100005
int Reverse(string &s)
{
    int n = s.length();
    if(s[0]!=s[n-1]) return 0;
    return 1;
}
int Even(string &s)
{
    int n = s.length();
    forn(i,n)
    {
        if((s[i]-'0')%2) return 0;
    }
    return 1;
}
void subString(string s, int n)
{
    int ans=0;
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
        {
            //cout << s.substr(i, len) << endl;
            string k=s.substr(i, len);
            if(Reverse(k)) ans++;
        }
    cout << ans << endl;
}
void solve()
{
    char s[2][2];
    int a[26]={0};
    int dem=0;
    int ans=0;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> s[i][j];
            a[s[i][j]-'a']++;
        }
    }
    for(int i=0; i<26; i++)
    {
        if(a[i]>0) 
        {
            //cout << a[i] << " ";
            dem++;
        }
    }
    //cout << dem;
    if(dem==1) ans=0;
    else if(dem==2) ans=1;
    else if(dem==3) ans=2;
    else if(dem==4) ans=3;
    cout << ans;
    cout << endl;
    
}
int main()
{
    FAST_IO;
    int t; cin >> t;
    while(t--) solve();
}
