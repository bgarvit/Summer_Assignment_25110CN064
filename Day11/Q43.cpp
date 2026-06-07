#include <iostream>
using namespace std;
int prime(int n){
    if(n<=1){
    return 2;}
    else{
    for(int i=2;i<=n/2;i++){
    if(n%i==0)
    return 2;}}
    return 1;
}
int main() {
    int n;
    cout << "Enter the number to check prime: ";
    cin >>n;
    if(prime(n)==1)
    cout << "the number is prime";
    else 
    cout << "the number is not prime";
    return 0;
}