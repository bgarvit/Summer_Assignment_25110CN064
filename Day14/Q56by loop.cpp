#include<iostream>
using namespace std;
int main(){
    int a[100]={},n,l=0;
    cout <<"Define elements in array:";
    cin >> n;
    cout<< "Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
    cin >>a[i];}
    cout<<"The duplicate elements are ";
    
    for(int j=0;j<n;j++){
    l=a[j];
    for(int i=j+1;i<n;i++){
    if(a[i]==l)
    cout<<l;
    }}
    
return 0;
}