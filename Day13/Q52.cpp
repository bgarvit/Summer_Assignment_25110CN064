#include<iostream>
using namespace std;
int main(){
    int a[100]={},n;
    cout << "Number of input in array:";
    cin >> n;
    cout << "Input Array A:";
    for(int i=0;i<n;i++){
    cin >>a[i];}
    cout <<endl;

    cout<<"The even numbers are:";
    for(int i=0;i<n;i++){
    if(a[i]%2==0){
        cout<<" "<<a[i];}}
    cout<<endl;
    
    cout<<"The odd numbers are:";
    for(int i=0;i<n;i++){
    if(a[i]%2!=0){
        cout<<" "<<a[i];}}
return 0;
}