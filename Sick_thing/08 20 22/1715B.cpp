#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(x) ((int)(x.size()))
#define UM unordered_map
#define US unordered_set
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<bool, ll> pbl;
typedef vector<pbl> vpbl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<pdd> vpdd;
typedef vector<string> vs;
typedef pair<ul, int> pui;
typedef vector<pui> vpui;
typedef vector<ul> vu;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k,b,s;
        cin >> n >> k >> b >> s;
        int flag=0;
        ll a[n]={0};
        if((s<k*b)||s>n*(k-1)+k*b) cout << -1 << endl;
        else
        {
            a[0]=k*b;
            s-=k*b;
            for(int i=0; i<n&&s>0; i++)
            {
                a[i]+=min(k-1,s);
                s-=min(k-1,s);
            }
            for(int i=0; i<n; i++)
            {
                cout << a[i] <<" ";
            }
            cout << endl;
        }
        

    }
}
