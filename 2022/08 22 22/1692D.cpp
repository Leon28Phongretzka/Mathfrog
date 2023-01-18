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
int main()
{
    int division[5]={600, 60, 0, 10, 1};
    int g[16]={0,70,140,210,280,350,601,671,741,811,881,951,1202,1272,1342,1412};
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;
        int time=0;
        int ans=0;
        for(int i=0; i<5; i++)
        {
            time+=(int)(s[i]-'0')*division[i];
        }
        set<int> tm;
        for(int i=0; i<1504; i++)
        {
            tm.insert(time);
            time+=x;
            time%=1440;
        }
        for(int j:tm) cout << j << " ";
        int r=0;
        for(int i:tm)
        {
            for(int j=0; j<16; j++)
            {
                if(g[j]==i) ans++;
            }
        }
    cout << ans << endl;
    }
}