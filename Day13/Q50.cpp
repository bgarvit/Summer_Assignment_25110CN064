#include<iostream>
using namespace std;
int main(){
    int a[100]={},n,sum=0;
    cout << "Number of input in array:";
    cin >> n;
    cout << "Input Array A:";
    for(int i=0;i<n;i++){
    cin >>a[i];}
    cout <<endl;
    for(int i=0;i<n;i++){
    sum+=a[i];}
    cout<<"The sum of the element in the array is:"<<sum<<endl;
    cout<<"The average of elements in the array is:"<<(double)sum/n; 
return 0;
}