#include<iostream>
using namespace std;
int main()
{
    int n, prd = 1;
    cout << "Enter the number of which product of digits is to be calculated: ";
    cin >> n;
    while (n != 0)
    {
        prd *= n % 10;
        n /= 10;
    }
    cout << "The product of digits of given number is : " << prd;
    return 0;
}