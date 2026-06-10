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
    //Selection Sort
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
    //Finding duplicates    
    cout<<"The duplicate element is:";
    int du=-1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]&&a[i]!=du){
        du=a[i];
        cout<<" "<<a[i];}
    }
    return 0;
}