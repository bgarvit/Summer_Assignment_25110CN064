#include <iostream>
using namespace std;
int main() {
        int a[100]={},n;
    cout << "Define the elements of the array:"<<endl;
    cin >> n;
    cout << "Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    //Bubble Sort
    for(int j=0;j<n;j++){
        int l=0;
    for(int i=0;i<n-1-j;i++){
        if(a[i]>a[i+1]){
            int temp = a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            l++;}}
        if(l==0)
        break;
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}