#include<iostream>
using namespace std;
int main()
{
    int n,r=0,j=1;
    cout << "Enter the decimal value input of base 10: ";
    cin >> n;
        while(n>0){
    r+=(n%2)*j;
    n=n/2;
    j*=10;}
    cout << "The binary value of base 2 is: "<<r;
return 0;    
}