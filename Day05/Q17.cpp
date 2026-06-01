#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the number to be checked as perfect number: ";
    cin >> n;
    for(int i=1;i<=n/2;i++){    // the loop is taken to n/2 as factors of a number cannot be greater than itself.//
    if(n%i==0){
    sum = sum + i;}}
    if(sum==n)
    cout << "The number is a perfect number";
    else
    cout << "The number is not a perfect number";
return 0;
}