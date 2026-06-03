#include<iostream>
using namespace std;
int rev(int a,int r)
{
    if(a==0)
    return r;
    return rev(a/10,r*10+a%10);
}
int main()
{
    int n;
    cout << "Enter the numbers: ";
    cin >> n;
    cout << rev(n,0);
return 0;
}