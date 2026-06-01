#include<iostream>
using namespace std;
int main()
{
    int n,lp=0;
    cout << "Enter the number to find its largest prime factor: ";
    cin >> n;
    for(int i=1;i<=n;i++){
    int p=0;
    for(int j=1;j<=i;j++){
    if(i%j==0)
    p++;}
    if(p==2 && n%i==0)   // prime factors have only 2 factors so p will only increase by 2//
    lp=i;}              //storing i in another variable helps to get the largest prime factor//
    cout<<lp;
return 0;
}