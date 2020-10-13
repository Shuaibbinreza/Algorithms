#include <iostream>
#include "math.h"
#include <iomanip>

using namespace std;

int call_count = 0;

int fibo(int n)
{
    call_count+=1;
    if(n<=2)
    {
        return 1;
    }
    else {
            //call_count += 1;
            return fibo(n-1) + fibo(n-2);
         }
    return n;
}

int main()
{
    int num;
    cout<<"\nenter the number of integers to be printed in the fibonacci series\n";
    cin>>num;
    cout<<"\nfibonacci series for first "<<num<<" numbers is\n";
    cout<<"\n\nSerial Number\t"<<"FIBO_NUMBER\t"<<" NO_OF_CALLS MADE\n\n";
    for(int i=1;i<=num;i++)
    {
        call_count = 0;
        cout<<endl<<i<<"th number\t   "<<fibo(i)<<"\t\t"<<call_count<<" calls\n";
    }
    cout<<endl<<"\n the total number of recursive calls made were "    <<call_count<<endl<<endl;
    system("pause");
    return 0;
}
