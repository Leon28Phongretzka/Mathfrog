#include<iostream>
#include<algorithm>
using namespace std;
struct log 
{
       int sd;
       int ed;
} log[1000];
bool key(int i,int j) 
{
    return (log[i].ed<log[j].ed);
}
int main() 
{
    int n,i;
    cin>>n;
    for (i=0;i<n;i++) cin>>log[i].sd>>log[i].ed;
    sort(log,log+n,key);
    for (i=0;i<n;i++) cout<<log.sd<<","<<log.ed<<endl;
    system("PAUSE");
}