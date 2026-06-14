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
    int l=0,m=0;
    for(int j=0;j<n;j++){
        l=j;
    for(int i=l;i<n;i++){
        if(a[l]>a[i]){
        l=i;}}
        int temp = a[l];
        a[l] = a[0+m];
        a[0+m] = temp;
        m++;
        }
    
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}