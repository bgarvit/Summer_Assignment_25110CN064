// Write a program to Sort array in descending order.
#include <iostream>
using namespace std;
int main() {
    int a[1000000]={},n;
    cout << "Determine the elements of the array:"<<endl;
    cin >> n;
    cout << "Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
        cin >> a[i];}
    //Bubble Sort but decending order
    for(int i=0;i<n;i++){
        int l=0;
        for(int j=0;j<n-1;j++){
            if(a[j]<a[j+1]){
            int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                l++;}
        }
        if(l==0)
        break;
    }
    cout << "sorted array in decending order is:";
    for(int i=0;i<n;i++){
        cout <<" "<< a[i];}
    return 0;