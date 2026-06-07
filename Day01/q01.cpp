#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "To calculate the sum of first N natural numbers, enter N: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of first N natural numbers is: " << sum;
    return 0;
}