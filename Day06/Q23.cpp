#include<iostream>
using namespace std;
int main()
{
    int n,d=0,rem=0;
    cout << "Enter the number: ";
    cin >> n;
    while(n!=0){
    rem=n%2;
    n=n/2;
    if(rem==1)
    d++;}
    cout <<d; 
return 0;    
}