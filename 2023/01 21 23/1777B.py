#input testcase
import math

def fact(n):
    if n == 0:
        return 1
    return n * fact(n - 1)
t=int(input())

for i in range(1,t+1):
    n = int(input())
    print(fact(n)*n*(n-1)%1000000007)

