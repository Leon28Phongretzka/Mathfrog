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
    int x,y,z; cin >> x >> y >> z;
    int a,b,c,d; cin >> a >> b >> c >> d;
    int arr[3];
    arr[0]=a+c+abs(b-d);
    arr[1]=b+d+abs(a-c);
    arr[2]=abs(y-b)+abs(a-c)+abs(y-d);
    arr[3]=abs(x-c)+abs(b-d)+abs(x-a);
    sort(arr,arr+4);
    cout << arr[0] + z << endl;
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
