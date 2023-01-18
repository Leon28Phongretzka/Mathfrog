#include<bits/stdc++.h>
using namespace std;
int scp(int t)
{
    if(t<1) return 0;
    int i=sqrt(t);
    if(i*i==t) return 1;
    else return 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n==1) cout << "NO" << endl;
        else
        {
            int t=n;
            while(t%2==0) t=t/2;
            if(scp(t)&&n%2==0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}