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
void solve()
{
    int n;
        cin >> n;
        vi v(n);
        for(auto &x : v) cin >> x;
        if(n&1)
        {
            cout << "NO\n";
            return;
        }
        vi v2;
        sort(v.begin(), v.end());
        for(int i=0; i<n/2; i++)
        {
            v2.push_back(v[i]);
            v2.push_back(v[i+n/2]);
        }
        for(int i=0; i<n; i++)
        {
            if(v2[i]==v2[(i+1)%n])
            {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
        for(auto x:v2) cout << x << " ";
        cout << endl;
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