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
#define fora(i, n) for(auto i:n)
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
const int MOD = 1000000007;
void solve() 
{
    int n; cin >> n;
    int c1=0, c2=0;
    for(int i=0; i<n-2; i++)
    {
        c1^=i;
        c2^=(i+1);
    }
    //cout << c1 << " " << c2 << endl;
    ll last=((ll)1<<31)-1;
    if(c1!=0)
    {
        for(int i=0; i<n-2; i++)
        {
            cout << i << " ";
        }
        c1^=last;
        cout << last << " " << c1 << endl;
    }
    else
    {
        for(int i = 1; i <= n-2; i++)
        {
            cout << i << " ";
        }
        c2^=last;
        cout << last << " " << c2 << endl;
    }
}

int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}