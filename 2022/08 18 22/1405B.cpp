#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        long long ans=0;
        for(int i=0; i<n; i++)
        {
            long long x; cin >> x;
            ans=max(0LL, ans+x);
        }
        cout << ans << endl;
    }
}