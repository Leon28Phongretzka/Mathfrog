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
#define forn(i,a,b) for (int i = (int)a; i < int(b); i++)
#define forr(i,a,b) for (int i = (int)a; i >= int(b); i--)
#define fora(i, n) for(auto i:n)
string mult(string a, string b)
{
    string res="";
    int n=a.size();
    int m=b.size();
    res.assign(n+m,'0');
    for(int i=n-1; i>=0;i--)
    {
        for(int j=m-1; j>=0; j--)
        {
            int mul=(a[i]-'0')*(b[j]-'0');
            int p1=i+j, p2=i+j+1;
            int sum=mul+res[p2]-'0';
            res[p2]=sum%10+'0';
            res[p1]+=sum/10;
        }
    }
    while (res[0] == '0' && res.length() > 1)
    {
        res.erase(0, 1);
    }
    return res;
}
ll get(ll x)
{
    ll res = 0;
    while(x%2==0)
    {
        res++; x/=2;
    }
    return res;
}
void solve()
{
    ll n; cin >> n;
    vi a;
    int res=0;
    forn(i,0,n)
    {
        int x; cin >> x;
        res+=get(x);
    }
    vi v;
    forn(i,1,n+1)
    {
        v.pb(get(i));
    }
    sort(v.begin(), v.end(), greater<int>());
    int ans=0;
    forn(i,0,v.size())
    {
        if(res>=n) break;
        ans++;
        res+=v[i];
    }
    if(res>=n) cout << ans << endl;
    else cout << -1 << endl;
    
    
    
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}