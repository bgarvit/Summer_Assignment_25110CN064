#include<iostream>
using namespace std;
int main(){
    int a[100]={},n,sum=0,l=0;
    cout << "Number of input in array:";
    cin >> n;
    cout << "Input Array A:";
    for(int i=0;i<n;i++){
    cin >>a[i];}
    cout <<endl;

//finding largest number 
    l=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>l)
        l=a[i];}
    cout<< "The largest number is:"<<l;  
    cout <<endl;

//finding smallest element by reassigning l to a[0];
    l=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<l)
        l=a[i];}
    cout<< "The smallest number is:"<<l;
return 0;
}