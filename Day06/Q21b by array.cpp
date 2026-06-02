#include<iostream>
using namespace std;
int main()
{
    int n,a[20]={},i=0;
    cout << "Enter the decimal value input of base 10: ";
    cin >> n;
    cout << "The binary value of base 2 is: ";
    while(n!=0){
    a[i]=n%2;
    n=n/2;
    if(n==0)
    break;
    i++;}
    for(int j=i;j>=0;j--){
    cout << a[j];}
return 0;    
}