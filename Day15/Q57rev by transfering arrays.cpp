#include <iostream>
using namespace std;
int main() {
    int a[100]={},n,b[100]={};
    cout<<"Define the elements of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin>>a[i];}

    cout<<"The reversed array is:";
    for(int j=n-1;j>=0;j--){ //transfering the elements of the array to another array in rev order.
    b[j]=a[n-1-j];
    }

    for(int j=0;j<=n-1;j++){ //now printing the elements of the second array .
    cout<<endl<<b[j];}
    return 0;
}