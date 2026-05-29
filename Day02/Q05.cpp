#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the number of which sum of digits is needed: ";
    cin >> n;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "The sum of the digits of the number is : " << sum;
    return 0;
}