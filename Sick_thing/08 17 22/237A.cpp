#include<bits/stdc++.h>
using namespace std;
struct Client
{
    int h;
    int m;
};
int cmp(Client p1, Client p2)
{
    if(p1.h==p2.h) return p1.m<p2.m;
    return p1.h<p2.h;
}
int main()
{
    int n;
    cin >> n;
    Client d[n];
    int ans=1;
    int bot=0;
    for(int i=0; i<n; i++)
    {
        cin >> d[i].h >> d[i].m;
    }
    sort(d, d+n, cmp);
    for(int i=0; i<n-1; i++)
    {
        //cout << d[i].h << " " << d[i].m << endl;
        if(d[i].h==d[i+1].h&&d[i].m==d[i+1].m) ans++;
        else
        {
            bot=max(bot,ans);
            ans=1;
        }
    }
    if(bot<ans) bot=ans;
    cout << bot << endl;
}