#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,s=0;
    cin >> n >> d;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        s=s+a[i];
    }
    if(s+10*(n-1)>d) cout << -1 << endl;
    else cout << (d-s)/5 << endl;
}
