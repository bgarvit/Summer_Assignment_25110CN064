#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n,sum,nb=0,h,a[1000]={};
    unordered_map<int, int>b;
    cout << "Define the elements of the array:"<<endl;
    cin >> n;
    cout << "Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin >> a[i];}
    cout << "Enter the sum to find the given pair:";
    cin >> sum;
    cout << "The pairs with the given sum are:"<<endl;
    
    for(int i=0;i<n;i++){
        nb=sum-a[i];
    if(b[nb]==1)
    cout<<"("<<nb<<","<<a[i]<<")"<<endl;
    else
    b[a[i]]=1;}
    
return 0;
}