#include<bits/stdc++.h>

using namespace std;

int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n-1) + fibo(n-2);
}

int main ()
{
    int num;
    cin >> num;
    cout << fibo(num);
    return 0;
}
