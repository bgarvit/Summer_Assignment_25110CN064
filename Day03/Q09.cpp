#include<iostream>
using namespace std;
int main()
{
    int n,i,p=0; //p is used as flag variable//
    cout << "Enter the number:";
    cin >> n;
    
    if( n <= 1 ){
    cout << "the number is not prime" ;
    return 0;} //return 0 help the program to exit early if it meets the if condition//
    
    for(i=2;i<n;i++)
    {
    if(n % i ==0)
    p=1;
    break;  //break helped to exit loop early if the if condition is fulfilled early//
    }
    
    if(p==1)
    cout << "The number is not prime";
    else 
    cout << "The number is prime";
    
    return 0;
}