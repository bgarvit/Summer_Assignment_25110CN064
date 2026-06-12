#include <iostream>
using namespace std;
int main() {
    int a[100]={},n,sum=0,asum=0,nm;
    cout << "Define the elements of the array:"<<endl;
    cin >> n;
    cout << "Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin >> a[i];}
    
    int l=0,b,H=0,j,h;
    for(int j=0;j<n;j++){
        int b=0;
        l=a[j];
    for(int i=0;i<n;i++){
        if(a[i]==l)
    b++;}
    if(b>H){
    H=b;  
    h=j;}}
    cout<<"The maximum frequency element is:"<<a[h];
return 0;
}