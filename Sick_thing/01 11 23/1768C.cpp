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
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        a[i] -= 1;
    }
    vector<int> cnt(n);
    vector<vector<int>> at(n);
    for (int i = 0; i < n; i++) 
    {
      cnt[a[i]] += 1;
      at[a[i]].push_back(i);
    }
    vector<int> twos;
    vector<int> zeros;
    bool ok = true;
    for (int i = 0; i < n; i++) 
    {
        if (cnt[i] == 0)
        {
            zeros.push_back(i);
        }
        if (cnt[i] == 2) 
        {
            twos.push_back(i);
        }
        if (cnt[i] > 2) 
        {
            ok = false;
            break;
        }
    }
    if (!ok) 
    {
      cout << "NO" << '\n';
      continue;
    }
    auto p = a;
    auto q = a;
    int k = (int) twos.size();
    for (int i = 0; i < k; i++) 
    {
        if (twos[i] < zeros[i]) 
        {
            ok = false;
            break;
        }
        int v = twos[i];
        p[at[v][0]] = zeros[i];
        q[at[v][1]] = zeros[i];
    }
    if (ok) 
    {
        cout << "YES" << '\n';
        for (int i = 0; i < n; i++) 
        {
            cout << p[i] + 1 << " \n"[i == n - 1];
        }
        for (int i = 0; i < n; i++) 
        {
            cout << q[i] + 1 << " \n"[i == n - 1];
        }
        } else {
        cout << "NO" << '\n';
    }
    
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
