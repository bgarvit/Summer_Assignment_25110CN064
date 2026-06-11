#include <iostream>
using namespace std;
int main() {
    int a[100]={},n;
    cout<<"Define the elements of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin>>a[i];}
    cout<<"The right-rotated array is:";
    
    int l=n-1;
    int temp=a[n-1];//holding to the last element of the array by a temporary variable.
    while(l!=0){ //now shifting all the elements of the array to the right by one position.
        a[l]=a[l-1];
        l--;
    }
    a[0]=temp;//now putting the last element of the array to the first position of the array.
    
    for(int i=0;i<n;i++){
        cout<<endl<<a[i];
    }
    return 0;
}