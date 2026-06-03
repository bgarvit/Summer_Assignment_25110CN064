#include<iostream>
using namespace std;
int sum(int a)
{
    int rem=0;
    if(a==0)
    return 0;
    return sum(a/10)+a%10;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << sum(n);
return 0;    
}