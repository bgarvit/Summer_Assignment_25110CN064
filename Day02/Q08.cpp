#include<iostream>
using namespace std;
int main()
{
    int n, pal = 0, temp;
    cout << "Enter the number to be checked for palindrome: ";
    cin >> n;
    temp = n;
    while (temp != 0)
    {
        pal = pal * 10 + temp % 10;
        temp = temp / 10;
    }
    if (pal == n)
    {
        cout << "The number is a palindrome.";
    }
    else
    cout << "The number is not a palindrome.";
return 0;
}