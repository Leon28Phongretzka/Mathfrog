#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,k;
    int f,t;
    int M=INT_MIN;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> f >> t;
        M=max(M,(t>k)?f-t+k:f);
    }
    cout<<M;
}