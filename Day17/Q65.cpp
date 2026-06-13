#include <iostream>
using namespace std;
int main() {
        int a[100]={},b[100]={},n1,n2;
    cout << "Define the elements of the first array:"<<endl;
    cin >> n1;
    cout << "Define the elements of the second array:"<<endl;
    cin >> n2;
    cout << "Enter the elements of first array:"<<endl;
    for(int i=0;i<n1;i++){
        cin >>a[i];
    }
    cout << "Enter the element of second array:"<<endl;
    for(int j=0;j<n2;j++){
        cin >>b[j];
    }
    // Merging the two arrays.
    int j=0;
    for(int i=n1;i<n1+n2;i++){
        a[i]=b[j];
        j++;
    }
    // Displaying the merged array.
    cout << "The merged array is:"<<endl;
    for(int i=0;i<n1+n2;i++){
        cout <<" "<<a[i];
    }
    return 0;
}