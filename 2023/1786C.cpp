#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
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
    long long ans = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    // for(int i=0; i<n; i++) cout << a[i] << " ";
    vector<int> num(n+1);
    for(int i=0; i<n; i++)
    {
        num[a[i]]++;
    }
    int pivot = 0;
    for(int i=1; i<=n; i++)
    {
        if(num[i]>0)
        {
            pivot++;
        }
        else break;
    }
    // cout << pivot << endl;
    int pivot_pt = find(a.begin(), a.end(), pivot) - a.begin();
    // cout << pivot_pt << endl;
    for(int i=pivot_pt,j=pivot; i<n; i++)
    {
        if(a[i]>j)
        {
            j++;
            ans += (a[i]-j);
            a[i] = j;
            
        }

    }
    for(int i=0; i<n; i++) cout << a[i] << " "; cout << endl;
    cout << ans << endl;
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
