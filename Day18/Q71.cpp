#include <iostream>
using namespace std;
int main() {
    int a[1000000]={},n,e;
    cout << "Determine the elements of the array:"<<endl;
    cin >> n;
    cout << "Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
        cin >> a[i];}
    //Bubble Sort
    for(int i=0;i<n;i++){
        int l=0;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
            int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                l++;}
        }
        if(l==0)
        break;
    }
    //Binary Search
    cout << "Enter the element to be found:";
    cin >> e;
    int lo=0,hi=n-1,no=0;
    while(lo<=hi){
    int mid=(lo+hi)/2;
    if(e<a[mid]){
        hi=(mid)-1;
    }
    else if(e>a[mid]){
        lo=1+mid;
    }
    else{
    no++;
    break;}
    }
    if(no>0){
    cout << "The element is present in the array";}
    else
    cout << "The element is not present in the array";
    return 0;
}