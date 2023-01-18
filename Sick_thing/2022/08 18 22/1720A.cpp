#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a, ll b)
{
    return a*b/gcd(a,b);
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c,d;
        ll ans=0;
        cin >> a >> b >> c >> d;
        if(a*d==b*c) ans=0;
        else if((a==0||c==0)||((lcm(a,d))==1||lcm(c,b)==1)||(a*d)%(b*c)==0||(b*c)%(a*d)==0) ans=1;
        else ans=2;
        cout << ans << endl;
    }
}