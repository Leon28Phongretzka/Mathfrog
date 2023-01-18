#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int h,k,cmp,q;
        h=b/c;
        cmp=h*c+c-1;
        if(cmp>b) cmp-=c;
        if(cmp<a) cmp=b;
        cout << cmp%c+cmp/c << endl;
    }
}