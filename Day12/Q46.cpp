#include<iostream>
#include<cmath>
using namespace std;
int arm(int n){
    int rem=0,rem1=0,on=0,arm=0,d=0,n1=0;
    on=n;
    while(on!=0){
    rem=on%10;
    on/=10;
    d++;}
    n1=n;
    while(n1!=0){
        rem1=n1%10;
        n1/=10;
        arm+=round(pow(rem1,d));}
        if(arm==n){
        return 1;}
        return 2;
}
int main() {
    int n;
    cout << "Enter a number to find if its armtrong: ";
    cin >>n;
    if(arm(n)==1){
    cout << "The number is armstrong number";}
    else 
    cout << "The number is not armstrong number";
    return 0;
}