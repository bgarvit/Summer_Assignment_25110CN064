#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int on,a=0,n,rem,p=0;
    cout << "Enter the number:";
    cin >> on;
    
    n = on;     
    
    while(n!=0){
    n = n / 10;
    p++;}
    
    n = on;
      
    while(n!=0){
    rem = n % 10;
    n = n / 10;
    a=round(pow(rem,p))+a;}  // to remove the floating-point inaccuracy as computer //
    // do the calulation in binary an microscopic error can occur to prevent it round is used.//
    
    if(a==on)
    cout << "The given is an armstrong number";
    else 
    cout << "The given number is not an armstrong number";
    return 0;
}