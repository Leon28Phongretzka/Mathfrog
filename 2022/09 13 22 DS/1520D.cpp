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
#define fora(i, n) for (auto i: n)
#define Len 100005
long long Ft_rcz(int n)
{  
    //Factorial Recursion
    long long sum=1;
    for(int i=2; i<=n; i++)
    {
        sum*=i;
    }
    return sum;

}
long long nC2(int n)
{
    return Ft_rcz(n)/(Ft_rcz(n-2)*Ft_rcz(2));
}
void solve()
{
    int n; cin >> n;
    mii mp;
    long long ans=0;
    //create a map to store the number of the element and the position of the element
    forn(i, n)
    {
        int x; cin >> x;
        //if(x==i+1) ans++;
        x-=i; ans+=mp[x];
        mp[x]++;
    }
    //cout << nC2(ans) << endl;
    cout << ans << endl;
}
int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; cin.ignore(); for (int i = 1; i <= tt; i++) solve();
    // solve();
}