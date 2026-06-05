#include<iostream>
using namespace std;
long long factorial(int n)
{
if(n==1 || n==0)
return 1;
return n * factorial(n-1);
}
int main()
{
    int n;
    cout << "Enter the number to find its factorial: ";
    cin >> n;
    cout <<"The factorial of "<<n<<" is: " <<factorial(n);
return 0;    
}