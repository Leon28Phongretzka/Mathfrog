#include <bits/stdc++.h>
using namespace std;
int fct(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        //cout << Common_Divisor(n) << endl;
        int a,b;
        a=1+n;
        while(!fct(a)) a++;
        b=a+n;
        while(!fct(b)) b++;
        cout << a*b << endl;

    }
}