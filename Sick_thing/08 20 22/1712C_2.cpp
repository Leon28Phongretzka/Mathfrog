#include <bits/stdc++.h>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define FAST_BUILTINS
//#define BIG_FACTORIZATOR
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
using namespace std;
int a[100001],m[100001];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i], m[i] = i;
		int ans = 0;
		for (int i = 1, j = 1; i <= n; i++) {
			if (m[a[i - 1]] > m[a[i]]) {
				while (j < i) {
					if (m[a[j]]) ans++, m[a[j]] = 0;
					j++;
				}
			}
		}
		cout << ans << '\n';
    }

}