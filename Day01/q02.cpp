#include<iostream>
using namespace std;
int main()
{
    int n,i;
    for (;;) 
    {
    cout  << "Enter the number of which you want to print the multiplication table: ";
    cin >> n;
    cout << "Multiplication tabel of " << n << " is: "<< endl;
    for (i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    cout << "If you want to end the programm enter y if not then n: ";
    char ch;
        cin >> ch;
        if (ch == 'n')
        cout << "program closed.";
        break;
    }
    return 0;
}