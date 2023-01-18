#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b;
        cin >> a >> b;
        int last_ans=0;
        long long ans=max(a,b)/min(a,b);
        //cout << ans << endl;
        if(ans==1)
        {
            if(a!=b) cout << -1 << endl;
            else cout << 0 << endl;
        }
        else if(ans*min(a,b)!=max(a,b)) cout << -1 << endl;
        else 
        {
        
            while(ans%2==0)
            {
                ans=ans/2;
                last_ans++;
            }
            //cout << ans << endl;
            
            if(last_ans%3==0) last_ans=last_ans/3;
            else last_ans=last_ans/3+1;
            if(ans!=1) last_ans=-1;
            cout << last_ans << endl;
        }
        
    }
}