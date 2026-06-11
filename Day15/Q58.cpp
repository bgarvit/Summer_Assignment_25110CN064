#include <iostream>
using namespace std;
int main() {
    int a[100]={},n;
    cout<<"Define the elements of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin>>a[i];}
    cout<<"The left-rotated array is:";
    
    int l=0;
    int temp=a[0];//holding to the first element of the array by a temporary variable.
    while(l!=n-1){ //now shifting all the elements of the array to the left by one position.
        a[l]=a[l+1];
        l++;
    }
    a[n-1]=temp;//now putting the first element of the array to the Last position of the array.
    
    for(int i=0;i<n;i++){
        cout<<endl<<a[i];
    }
    return 0;
}