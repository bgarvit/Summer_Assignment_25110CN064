#include<iostream>
using namespace std;
int main(){
    int a[100]={},b,n,l=0;
    cout <<"define the elements in array:";
    cin >> n;
    cout<< "Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
    cin >>a[i];
    }
    cout << "Enter the element to be searched:";
    cin >>b;
    for(int i=0;i<n;i++){
    if(a[i]==b)
    l++;}
    if(l>0)
    cout<<"the element is present";
    else
    cout<< "the element is not present";
return 0;
}