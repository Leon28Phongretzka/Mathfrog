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
    if(n>sum_arr)
    {
        n=n-sum_arr*(n/sum_arr);
    }
    //cout << n << endl;  
    for(int i=0; i<7; i++)
    {
        if(sum<n) sum+=a[i];
        else
        {
            if(i==0) i++;
            cout << i << endl;
            break;
        }
    } 
     
}