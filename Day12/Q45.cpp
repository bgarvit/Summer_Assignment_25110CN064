#include <iostream>
using namespace std;
int palindrome(int n){
    int rem=0,on,pel=0;
    on=n;
    while(on!=0){
    rem=on%10;
    on/=10;
    pel=pel*10+rem;}
    if(pel==n){
    return 1;}
    return 0;
}
int main() {
    int n;
    cout << "Enter a number to find if its palindrome: ";
    cin >>n;
    if(palindrome(n)==1)
    cout << "The number is palindrome number";
    else 
    cout << "The number is not palindrome number";
    return 0;
}