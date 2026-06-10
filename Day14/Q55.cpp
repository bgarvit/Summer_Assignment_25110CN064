#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[100]={},n,l=0,p=0;
    cout <<"Define elements in array:";
    cin >> n;
    cout<< "Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
    cin >>a[i];}
    
    l=INT_MIN;
    for(int i=0;i<n;i++){
    if(a[i]>l)
    l=a[i];}
    
    p=INT_MIN;
    for(int i=0;i<n;i++){
    if(a[i]>p&&a[i]!=l)
    p=a[i];}
    
    cout<<"The secound largest element is "<<p;
return 0;
}