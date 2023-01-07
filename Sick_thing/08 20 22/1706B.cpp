#include<bits/stdc++.h>
using namespace std;
int T,n,a[1000000],t[1000000],ans[1000000];
int main()
{
	cin>>T;
	while(T--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)t[i]=0,cin>>a[i];
		for(int i=1;i<=n;i++)ans[i]=0;
		for(int i=1;i<=n;i++)
		{
			if(t[a[i]]==0||(i-t[a[i]])%2==1)ans[a[i]]++,t[a[i]]=i;
		}
		for(int i=1;i<=n;i++)cout<<ans[i]<<" ";cout<<endl;
	}
	return 0;
}