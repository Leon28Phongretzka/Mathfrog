#include<bits/stdc++.h>
using namespace std;
#define Mod2(a) ((a%2==0) ? (a/2) : (a/2+1))
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long a,b,c,d;
        cin >> a >> b >> c >> d;
        long long ans=0;
        if(b>=a) ans=b;
        else if(d>=c) ans=-1;
        else0
        {
            ans=b+(c*((a-b+c-d-1)/(c-d)));
        }
        cout << ans << endl;
    }   
}