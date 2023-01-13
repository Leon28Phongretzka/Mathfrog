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
    // Idea: 
    // Swap the role of number and position number
    // This action help you to know how many times you need to erase
    // And the last one, you need to know how many element left in the vector and ceiling it

    int n, k; cin >> n >> k;
    vector<int> a(n+1);
    vector<int> pos(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        pos[a[i]-1] = i;
    }
    // for(int i=0; i<n; i++) cout << pos[i]+1 << ' ';
    // cout << endl;
    int res = 1;
    while(res < n && pos[res] > pos[res - 1])
    {
        res++;
    }
    int left = n - res;
    cout << (left+k-1)/k << endl;
    
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
