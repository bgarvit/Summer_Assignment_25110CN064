#include <iostream>
using namespace std;
int main() {
    int a[100]={},n;
    cout<<"Define the elements of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin>>a[i];}
    cout<<"The reversed array is:";
    int l=0,p=n-1;
    while(l<p){
        int temp=a[l];
        a[l]=a[p];
        a[p]=temp;
        
        l++;
        p--;
    }
    for(int i=0;i<n;i++){
        cout<<endl<<a[i];
    }
    return 0;
}