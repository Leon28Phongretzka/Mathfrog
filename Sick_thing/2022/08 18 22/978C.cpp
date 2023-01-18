#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll m,n,t=0,x;
	ll c=0,s=0;
	cin>>n>>m;
	ll a[n+5],b[m+5];
	for(ll i=0;i<n;i++) cin>>a[i];
	for(ll i=0;i<m;i++)
    {
		cin>>x;
		while(s+a[t]<x) s+=a[t++];
		cout<<t+1<<" "<<x-s<<endl;
	}
}