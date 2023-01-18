#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (ll i = 0; i < ll(n); i++)
#define fora(i, n) for(auto i:n)
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
        cin >> n;
        vector<string> v[3];
        map<string, ll> m;
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                string s;
                cin >> s;
                m[s] += 1;
                v[i].push_back(s);
            }
        }
        ll ans[3] = {};
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (m[v[i][j]] == 1) ans[i] += 3;
                if (m[v[i][j]] == 2) ans[i] += 1;
            }
        }
        cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
	}
}