#include <algorithm>
struct a
{
    int num1;
    int num2;
};

bool acompare(a lhs, a rhs) 
{ 
    return lhs.num1 < rhs.num1; 
}

int main()
{
   a array[1000];
   std::sort(array, array+1000, acompare);
}