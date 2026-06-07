#include <iostream>
using namespace std;
int max(int a,int b[10000]={})
{
    int max1=b[0];
    for(int i=0;i<a;i++){
    if(max1<b[i])
    max1=b[i];}
    return max1;
}
int main() {
    int n,d[10000]={},i;
    cout << "Enter the amount of numbers to find the maximum number: ";
    cin >> n;
    cout << "Enter the numbers:";
    for(int i=0;i<n;i++){
    cin >> d[i];}
    cout << "The maximum number between the numbers is: "<<max(n,d);
    return 0;
}