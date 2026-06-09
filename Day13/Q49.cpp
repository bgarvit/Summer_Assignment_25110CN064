#include<iostream>
using namespace std;
int main(){
    int a[100]={},n;
    cout << "Number of input in array:";
    cin >> n;
    cout << "Input Array A:";
    for(int i=0;i<n;i++){
    cin >>a[i];}
    cout <<endl<< "Output Array B:";
    for(int i=0;i<n;i++){
    cout<<" "<<a[i];}
return 0;
}