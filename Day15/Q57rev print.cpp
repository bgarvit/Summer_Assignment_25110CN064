#include <iostream>
using namespace std;
int main() {
    int a[100]={},n;
    cout<<"Define the elements of the array:";
    cin>>n;
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
    cin>>a[i];}
    cout<<"The reversed array is:";
    
    for(int j=0;j<n;j++){
    cout<<a[n-1-j];}
    return 0;
}