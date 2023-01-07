#include<bits/stdc++.h>
#include"BigNum.h"
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<bool, ll> pbl;
typedef pair<ul, int> pui;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<int> vi;
typedef vector<int>::iterator ip;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pbl> vpbl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<pdd> vpdd;
typedef vector<string> vs;
typedef vector<pui> vpui;
typedef vector<ul> vu;
typedef vector<string> vs;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 1; i <= int(n); i++)
#define fora(i, n) for(auto x:n)
#define Len 100005
BigInteger::BigInteger() 
{
	vi num;
}

BigInteger::BigInteger(char *s) 
{
	int len = s.length();
	for (int i = 0; i < len; i++) 
	{
		num.pb(s[i] - '0');
	}
}

bool BigInterger::isBigger(BigInteger other)
{
	if (num.size() > other.num.size()) return true;
	if (num.size() < other.num.size()) return false;
	for (int i = num.size() - 1; i >= 0; i--) 
	{
		if (num[i] > other.num[i]) return true;
		if (num[i] < other.num[i]) return false;
	}
	return false;
}

bool BigInterger::isSmaller(BigInteger other)
{
	if (num.size() < other.num.size()) return true;
	if (num.size() > other.num.size()) return false;
	for (int i = num.size() - 1; i >= 0; i--) 
	{
		if (num[i] < other.num[i]) return true;
		if (num[i] > other.num[i]) return false;
	}
	return false;
}

BigInterger BigInterger::add(BigInteger other)
{
	BigInteger res;
	int carry = 0;
	for (int i = 0; i < num.size() || i < other.num.size(); i++) 
	{
		int sum = carry;
		if (i < num.size()) sum += num[i];
		if (i < other.num.size()) sum += other.num[i];
		res.num.pb(sum % 10);
		carry = sum / 10;
	}
	if (carry) res.num.pb(carry);
	return res;
}

BigInterger BigInterger::sub(BigInteger other)
{
	BigInteger res;
	int carry = 0;
	for (int i = 0; i < num.size(); i++) 
	{
		int sum = num[i] - carry;
		if (i < other.num.size()) sum -= other.num[i];
		if (sum < 0) 
		{
			sum += 10;
			carry = 1;
		}
		else carry = 0;
		res.num.pb(sum);
	}
	while (res.num.size() > 1 && res.num.back() == 0) res.num.ob();
	return res;
}

void BigInterger::input()
{
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++) 
	{
		num.pb(s[i] - '0');
	}
}

void BigInterger::output()
{
	for (int i = num.size() - 1; i >= 0; i--) cout << num[i];
	cout << endl;
}

