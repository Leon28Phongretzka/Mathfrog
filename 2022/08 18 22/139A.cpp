#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[7];
    int sum_arr=0;
    int sum=0;
    int ans=0;
    for(int i=0; i<7; i++)
    {
        cin >> a[i];
        sum_arr+=a[i];
    }
    while(n>sum_arr)
    {
        n=n-sum_arr;
    }
    //cout << n << endl;
    for(int i=0; n>0; i++)
    {
        n-=a[i];
        if(n<=0) cout << i+1 << endl;
    }
    //cout << n << endl;

}