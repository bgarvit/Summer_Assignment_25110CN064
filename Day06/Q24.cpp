#include<iostream>
using namespace std;
int main()
{
    int x,n,ans=1;
    cout << "Enter the base number: ";
    cin >> x;
    cout << "Enter the exponent n: ";
    cin >> n;
    for(int i=0;i<n;i++){
    ans= ans*x;}
    cout << ans;
return 0;    
}