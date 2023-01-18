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
    cin.ignore();
    string s; cin >> s;
    vector<int> appear(26); for(int i=0; i<26; i++) appear[i]=0;
    for(int i=0; i<sz(s); i++) appear[s[i]-'a']++;
    int res = 0;
    sort(appear.begin(),appear.end());
    // lược bỏ các phần tử bằng 0 của appear
    // for(int i=0; i<sz(appear); i++) cout << appear[i] << " ";
    map<int, int> mp;
    for(int i=0; i<sz(appear); i++)
    {
        if(appear[i]!=0) mp[appear[i]]++;
    }
    // for(auto i:mp) cout << i.first << " " << i.second << endl;
    for(auto i:mp)
    {
        int aut = i.first*i.second;
        aut = max(aut, i.first*i.second);   
        cout << aut << endl;
    }
    cout << res << endl;
    // cout << endl;
    
}
int main()
{
    FAST_IO;
	int tt; cin >> tt; while(tt--) solve();
	// solve();
	// freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
