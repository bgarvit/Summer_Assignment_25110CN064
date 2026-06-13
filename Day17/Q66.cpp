#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
        int a[100]={},b[100]={},n1,n2;
        unordered_map<int, int>c;
    cout << "Define the elements of the first array:"<<endl;
    cin >> n1;
    cout << "Define the elements of the second array:"<<endl;
    cin >> n2;
    cout << "Enter the elements of first array:"<<endl;
    for(int i=0;i<n1;i++){
        cin >>a[i];
    }
    cout << "Enter the element of second array:"<<endl;
    for(int i=0;i<n2;i++){
        cin >>b[i];
    }
    // Merging the two arrays.
        int j=0;
    for(int i=n1;i<n1+n2;i++){
        a[i]=b[j];
        j++;
    }
    // Deleting the duplicate elements from the merged array.
    int k=0;
    for(int i=0;i<n1+n2;i++){
        if(c[a[i]]==0){
        b[k]=a[i];
        k++;
        c[a[i]]=1;}
    }
    // Displaying the union of the two arrays.
    cout << "The union array is:"<<endl;
    for(int i=0;i<k;i++){
        cout <<" "<<b[i];
    }
    return 0;
}