#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(x) ((int)(x.size()))
#define UM unordered_map
#define US unordered_set
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<bool, ll> pbl;
typedef vector<pbl> vpbl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<pdd> vpdd;
typedef vector<string> vs;
typedef pair<ul, int> pui;
typedef vector<pui> vpui;
typedef vector<ul> vu;
int main()
{
    int T;
    cin>>T;
    for(int z=0;z<T;z++)
    {
        int N;
        cin>>N;
        vi S(N);
        for(int i=0;i<N;i++) cin>>S[i];
        set<int> s;
        set<int>::iterator itr;
        //set la tap hop phan tu ma moi phan tu xuat hien 1 lan ( unique ) 
        bool ok = true;
        for(int i=N-2;i>=0;i--)
        {
            if(S[i] > S[i+1]) ok = false;
            if(!ok) s.insert(S[i]);
        }
        //for (itr = s.begin(); itr != s.end(); itr++) 
        //{
        //    cout << *itr << " ";
        //}
        cout<<endl;
        ok = true;
        for(int i=N-1;i>=0;i--)
        {
            if(s.count(S[i])) ok = false;
            if(!ok) s.insert(S[i]);
        }
        //for (itr = s.begin(); itr != s.end(); itr++) 
        //{
        //    cout << *itr << " ";
        //}
        cout<<s.size()<<endl;
        cout<<endl;
    }
}
