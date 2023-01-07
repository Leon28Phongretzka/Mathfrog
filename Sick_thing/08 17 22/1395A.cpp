#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long r,g,b,w;
        cin >> r >> g >> b >> w;
        int ans=0;
        long long sum=r%2+g%2+b%2+w%2;
        //cout << sum << endl;
        if(sum<=1||(r&&g&&b&&sum>=3)) ans=1;
        else ans=0;
        if(ans==1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}