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
#define forn(i, n) for (int i = 1; i <= int(n); i++)
#define fora(i, n) for(auto x:n)
#define Len 100005
const int MOD = 1000000007;
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return(gcd(b, a%b));
}
ll lcm(ll a, ll b)
{
    return a*b/gcd(a, b);
}
int arraySum(vector<int> &v)
{
   int initial_sum = 0;
   return accumulate(v.begin(), v.end(), initial_sum);
}
void solve() 
{
    int n;
    cin >> n;
    //cout << n << endl;
    //cout << lcm(12,4) << endl;
    ll sum=0;
    if(n%6==0) sum=16*(n/6);
    else if(n%6==1) sum=16*(n/6)+1;
    else if(n%6==2) sum=16*(n/6)+4;
    else if(n%6==3) sum=16*(n/6)+7;
    else if(n%6==4) sum=16*(n/6)+10;
    else if(n%6==5) sum=16*(n/6)+11;
    cout << sum << endl;
}

int main() 
{
    FAST_IO;
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}