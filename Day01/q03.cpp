#include<iostream>
using namespace std;
int main()
{
    int n,i;
    long long fac = 1;
    cout << "Enter the number to find its factorial :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fac *= i;
    }
    cout << "The factorial of " << n << " is: " << fac;
    return 0;
}