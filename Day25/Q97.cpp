#include <iostream>
using namespace std;
int main(){
    int arr[100]={},ara[100]={},ary[200]={},n1,n2;
    cout << "Define the sorted array1 elements: ";
    cin >>n1;
    cout << "Enter the elements of array 1: ";
    for(int i=0;i<n1;i++){
        cin>>arr[i];
    }
    cout << "Define the sorted array2 elements: ";
    cin >>n2;
    cout << "Enter the elements of array 2: ";
    for(int i=0;i<n2;i++){
        cin>>ara[i];
    }
    // first adding elements of both arrays into a single array up to when one of arrays is completely traversed.
    int i=0,j=0,k=0;
    while(i<n1&& j<n2){
            if(arr[i]>ara[j]){
                ary[k]=ara[j];
                k++;
                j++;
            }
            else{
            ary[k]=arr[i];
            k++;
            i++;
            }
    }
    // And then adding the remaining elements of the other array into the single array.
    while(i<n1){
        ary[k]=arr[i];
        i++;
        k++;
    }
    while(j<n2){
        ary[k]=ara[j];
        j++;
        k++;
    }
    // And then printing the single array which is the merged sorted array.
    cout << "The merged sorted array is: ";
    for(int i=0;i<n1+n2;i++){
        cout<<" "<<ary[i];
    }
return 0;
}