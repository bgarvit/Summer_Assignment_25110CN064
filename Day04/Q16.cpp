#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, on, rem;
    cout << "Enter the range from 1 to n to check the armstrong number: ";
    cin >> on;
    cout << "The armstrong numbers are: ";
    for(int i=1;i<=on;i++){
    n=i;int a=0,p=0;
    while(n!=0){
    n/=10;
    p++;}
    n=i;
    while(n!=0){
        rem=n%10;
        n/=10;
        a=round(pow(rem,p)+a); //round is used to remove floating-point inaccuracy.//
    }
    if(i==a)
    cout <<" " <<i;
    }
return 0;   
}