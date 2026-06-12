#include <iostream>
using namespace std;
int main() {
    int a[100]={},n,sum=0,asum=0,nm;
    cout << "Define the elements of the array:"<<endl;
    cin >> n;
    cout << "Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin >> a[i];}
    
    sum= ((n+1)*(n+2))/2;  //formula to calculate the sum of first n natural numbers.
    
    for(int i=0;i<n;i++){  //loop to calculate the sum of the elements in the array.
        asum+=a[i];}
        
    if(sum==asum){  
    cout<< "There is no element missing in the array";}
    else{  //
    nm=sum-asum;
    cout << "The missing element is:"<<nm;}
return 0;
}