#include<bits/stdc++.h>
using namespace std;
int cmpfunc(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int count0=0;
    int count5=0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    } 
    int sum=0;
    sort(a,a+n,greater<int>());
    for(int i = 0; i < n; i++) 
    {
        if(a[i]==0) count0++;
        if(a[i]==5) count5++;
    }
    for(int i=count5; i>=0; i--)
    {
        if(i%9==0)
        {
            count5=i;
            break;
        }
    }
    //cout << count0 << " " << count5 << endl;
    if(count5==0)
    {
        if(count0==0) cout << -1 << endl;
        else cout << 0 << endl;
    }
    else
    {
        if(count0==0) cout << -1 << endl;
        else
        {
            for(int i=0; i<count5; i++) cout << 5;
            for(int i=0; i<count0; i++) cout << 0;
            cout << endl;
        }
        
    }
    


    
}