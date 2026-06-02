#include<iostream>
using namespace std;
int main()
{
    int n,i=0,d=0,rem,sum=0,mul=1;
    cout << "Enter the binary value input of base 2: ";
    cin >> n;
    cout << "The decimal value of base 10 is: ";
    while(n!=0){
    rem=n%10;
    sum=sum+mul*rem;
    n=n/10;
        mul=mul*2;}
    cout<< sum;
return 0;    
}