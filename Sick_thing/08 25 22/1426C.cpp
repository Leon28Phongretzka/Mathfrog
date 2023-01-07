#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 0; i < int(n); i++)
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
int bin_search(int arr[], int l, int r, int k) 
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==k) return mid;
        if(arr[mid]>k) return bin_search(arr,l,mid-1,k);
        return bin_search(arr,mid+1,r,k);
    }
    return -1;
}
int binary_search(int arr[], int n, int k)
{
    return bin_search(arr, 0, n - 1, k);
}
void solve()
{
    int n; cin >> n;
    int num = round(sqrt(n));
    int k=n/num;
    int f=n-num*k;
    if(f==0) cout << num+k-2 << endl;
    else if(f) cout << num+k-1 << endl;
}
int main()
{  
    int t; cin >> t;
    while(t--) solve();
}