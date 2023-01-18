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
void solve()
{
    int n; cin >> n;
    cin.ignore();
    string s; cin >> s;
    // cout << s << endl;
    // forn(i,0,n-3)
    // {
    //     // create all sub string with length = 4
    //     string sub = s.substr(i,4);
    //     cout << sub << endl;
    // }
    string res = "ACTG";
    int ans = INT_MAX;
    forn(i,0,n-3)
    {
        // create all sub string with length = 4
        string sub = s.substr(i,4);
        int cnt = 0;
        forn(j,0,4)
        {
            int tmp = abs(sub[j]-res[j]);
            // cout << min(tmp, 26-tmp) << " ";
            cnt += min(tmp, 26-tmp);
        }
        // cout << endl;
        // cout << cnt << endl;
        ans = min(ans, cnt);
    }
    cout << ans << endl;
    

}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    // int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    solve();
}