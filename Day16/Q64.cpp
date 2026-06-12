#include <iostream>
#include <unordered_map>  
using namespace std;
int main() {
    int n,a[1000]={};
    unordered_map<int, int>b;  //unordered map store any amount of data as it is a dynamic data structure.
    cout << "Define the elements of the array:"<<endl;
    cin >> n;
    cout << "Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin >> a[i];}
    
    int l=0;  
    for(int i=0;i<n;i++){  //loop checks and saves the non duplicate elements in same array.
        if(b[a[i]]==0){
        a[l]=a[i];
        l++;
        b[a[i]]=1;}}
    
    cout<<"The new array without duplicates are:"<<endl;
    for(int i=0;i<l;i++){
        cout<<a[i]<<endl;}
return 0;
}