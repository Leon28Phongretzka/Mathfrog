#include <bits/stdc++.h>
typedef unsigned long long int lli;
using namespace std;
class BigNum
{
  public:
    string num;
    BigNum() {}
    BigNum(string n)
    {
        this->num = n;
    }
    BigNum(char n)
    {
        this->num = string(1, n);
    }
    ~BigNum() {}
    void print()
    {
        cout << num << endl;
        // cout << "---------" << endl;
    }
    void fix()
    {
        while (num[0] == '0' && num.length() > 1)
        {
          num.erase(0, 1);
        }
    }
    bool operator>(BigNum b)
    {
        if (num.length() > b.num.length())
          return true;
        else if (num.length() < b.num.length())
          return false;
        else
          return num > b.num;
    }
    bool operator>=(BigNum b)
    {
        if (num.length() >= b.num.length())
          return true;
        else if (num.length() < b.num.length())
          return false;
        else
          return num >= b.num;
    }
    BigNum operator+(BigNum x)
    {
        BigNum c;
        int carry = 0;
        for (int i = num.length() - 1, j = x.num.length() - 1; i >= 0 || j >= 0; i--, j--)
        {
            int a = (i >= 0) ? num[i] - '0' : 0;
            int b = (j >= 0) ? x.num[j] - '0' : 0;
            int sum = a + b + carry;
            if (sum >= 10)
            {
                sum = sum % 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            c.num = string(1, sum + '0') + c.num;
        }
        if (carry == 1)
        {
            c.num = string(1, '1') + c.num;
        }
        return c;
    }
    BigNum operator-(BigNum x)
    {
        bool flag = false;
        BigNum m=x;
        BigNum n=*this;
        BigNum res;
        if (m > n)
        {
            flag = true;
            swap(m.num, n.num);
        }
        int carry=0;
        for(int i=n.num.length()-1,j=m.num.length()-1;i>=0||j>=0;i--,j--)
        {
            int a=(i>=0)?n.num[i]-'0':0;
            int b=(j>=0)?m.num[j]-'0':0;
            int sub=a-b-carry;
            if(sub<0)
            {
                sub=sub+10;
                carry=1;
            }
            else

            {
                carry=0;
            }
            res.num=to_string(sub)+res.num;
        }
        //if flag=true insert "-" to the first element of res
        if(flag)
        {
            res.num="-"+res.num;
        }
        return res;
    }
    BigNum operator*(BigNum x)
    {
        BigNum res;
        BigNum a=x;
        BigNum b=*this;
        int n=a.num.size();
        int m=b.num.size();
        //create res is the answer
        res.num.assign(n+m,'0');
        for(int i=n-1; i>=0;i--)
        {
            for(int j=m-1; j>=0; j--)
            {
                int mul=(a.num[i]-'0')*(b.num[j]-'0');
                int p1=i+j, p2=i+j+1;
                int sum=mul+res.num[p2]-'0';
                res.num[p2]=sum%10+'0';
                res.num[p1]+=sum/10;
            }
        }
        while (res.num[0] == '0' && res.num.length() > 1)
        {
            res.num.erase(0, 1);
        }
        return res;
    }
    void Swap(BigNum &a, BigNum &b)
    {
      BigNum temp = a;
      a = b;
      b = temp;
    }

};
int main()
{
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
      BigNum a, b;
      cin >> a.num >> b.num;
      BigNum sum = a + b;
      BigNum sub = a - b;
      BigNum mul = a * b;
      //BigNum div = (a % c * (a ^ b - 1) % c) % c;
      sum.print();
      //sub.print();
      mul.print();
      //div.print();
    }
    // system("pause");
    return 0;
}