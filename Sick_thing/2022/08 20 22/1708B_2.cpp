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
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
	int t;
    cin>>t;
	while(t--)
    {
		ll n,a,b;
        ll count=0;
        cin >> n >> a >> b;
        int flag=0;
        for(int i=1;i<=n;i++)
        {
			long long k=b/i;
            k=k*i;
			if(k<a) flag=true;
		}
		if(flag) cout << "NO" << endl;
		else 
        {
            cout << "YES" << endl;
            for(int i=1; i<=n; i++)
            {
				long long k=b/i;k=k*i;
				cout << k << " ";
            }
            cout << endl;
	    }
}
}
