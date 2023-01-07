#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define iz insert
#define sz(x) ((int)(x.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
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
typedef set<int> si;
typedef set<ll> sl;
int bin_search(vl s, int n)
{
    long long x; cin >> x;
    int l = 1, r = n, ans = -1;
    while(l <= r) 
    {
        int mid = (l + r) / 2;
        if(s[mid - 1] >= x) 
        {
            ans = mid;
            r = mid - 1;
        } 
        else 
        {
            l = mid + 1;
        }
    }
    return ans;
}
void solve()
{
    int n,q; cin >> n >> q;
    vl a(n), s(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.rbegin(), a.rend());
    for(int i=0; i<n; i++)
    {
        s[i]=(i?s[i-1]:0)+a[i];
    }
    //for(int i=0; i<n; i++) cout << s[i] << " ";
    //cout << endl;
    while(q--)
    {
        cout << bin_search(s,n) << endl;
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