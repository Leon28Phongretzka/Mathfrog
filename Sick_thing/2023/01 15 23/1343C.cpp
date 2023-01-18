#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define forn(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a; i >= b; i--)
#define fora(i, n) for(auto i:n)
#define Len 100005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;
int sgn(int x)
{
    if(x>0) return 1;
    else if(x<0) return 0;
}
void solve()
{
        int n;
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		long long sum = 0;
		for (int i = 0; i < n; ++i) 
        {
			int cur = a[i];
			int j = i;
			while (j < n && sgn(a[i]) == sgn(a[j])) {
				cur = max(cur, a[j]);
				++j;
			}
			sum += cur;
			i = j - 1;
		}
		cout << sum << endl;

}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
