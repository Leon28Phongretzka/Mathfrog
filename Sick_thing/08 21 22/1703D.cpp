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
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s[n];
        map<string,bool> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]] = true;
        }
        for(int i = 0; i < n; i++)
        {
            bool ok=false;
            for(int j=1; j<s[i].length(); j++)
            {
                //sub string is the function returns 
                //a string is smaller than the original string 
                //( sub_len < org_strlen )
                string pf=s[i].substr(0,j), sf=s[i].substr(j, s[i].length() - j);
                if(mp[pf]&&mp[sf])
                {
                    ok=true;
                }
            }
            cout << ok;
        }
        cout << endl;
    }
}