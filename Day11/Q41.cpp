#include <iostream>
using namespace std;
int sum(int b,int a[10000]={})
{
    int s=0;
    for(int i=0;i<b;i++){
    s=s+a[i];}
    return s;
}
int main() {
    int c,d,n,a[10000]={};
    cout << "Enter the number of values to add: ";
    cin >> n;
    cout << "Enter the number to add: ";
    for(int i=0;i<n;i++){
    cin >> a[i];}
    cout << "The sum of the numbers is: "<<sum(n,a);
    return 0;
}