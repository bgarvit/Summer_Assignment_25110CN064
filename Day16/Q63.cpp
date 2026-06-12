#include <iostream>
using namespace std;
int main() {
    int a[100]={},n,sum;
    cout << "Define the elements of the array:"<<endl;
    cin >> n;
    cout << "Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin >> a[i];}
    cout << "Enter the sum to find the given pair:";
    cin >> sum;
    cout << "The pairs with the given sum are:"<<endl;
    
    int l=0;
    for(int j=0;j<n;j++){
        l=a[j];
    for(int i=j+1;i<n;i++){
        if((a[j]+a[i])==sum)
        cout<<"("<<a[j]<<","<<a[i]<<")"<<endl;
    }}

return 0;
}