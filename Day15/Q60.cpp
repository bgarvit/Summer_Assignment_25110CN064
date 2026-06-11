#include <iostream>
using namespace std;
int main() {
    int a[100]={},n;
    cout<<"Define the elements of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin>>a[i];}
    cout<<"The array is:";
    int r=0;
    for(int i=0;i<n;i++){ //shifting all the non-zero elements to the left .
        if(a[i]!=0){
        a[r]=a[i];
        r++;}
    }
    for(int i=r;i<n;i++){ //putting all the term after the last non-zero element to zero.
        a[i]=0;
    }

    for(int i=0;i<n;i++){
        cout<<endl<<a[i];
    }
    return 0;
}