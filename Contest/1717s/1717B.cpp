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
#define forn(i, n) for (int i = 1; i < int(n); i++)
#define fora(i, n) for(auto x:n)
#define Len 100005
const int MOD = 1000000007;
void solve() 
{
    int n,k,r,c;
    cin >> n >> k >> r >> c;
    //cout << lcm(12,4) << endl;
    char a[n+1][n+1];
    int h=r+c;
    while(h>k)
    {
        h=h-k;
    }
    //cout << h << endl;
    int pz[n];
    int i=0;
    pz[1]=h;
    for(i=2;i<=n;i++)
    {
        pz[i]=pz[i-1]+k;
    }
    forn(i,n+1)
    {
        forn(j,n+1)
        {
            a[i][j]='.';
        }
    }
    if(k==1)
    {
        forn(i,n+1)
        {
            forn(j,n+1)
            {
                a[i][j]='X';
            }
        }
    }
    forn(i,n+1)
    {
        forn(j,n+1)
        {
            for(int p=1; p<=n; p++)
            if(i+j==pz[p]) a[i][j]='X';
        }
    }
    forn(i,n+1)
    {
        forn(j,n+1)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    
}


int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}