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
    // noting the elements of first array in the map.
    for(int i=0;i<n1;i++){
        if(c[a[i]]==0){
        c[a[i]]=1;}
    }
    // checking elements of second array in the map and if present then adding it to first array.
    // marking the checked elements as 0 in the map to avoid duplicates.
    int k=0;
    for(int i=0;i<n2;i++){
        if(c[b[i]]==1){
        a[k]=b[i];
        k++;
        c[b[i]]=0;
        }
    }
    // Displaying the intersection of the two arrays.
    cout << "The intersection array is:"<<endl;
    for(int i=0;i<k;i++){
        cout <<" "<<a[i];
    }
    return 0;
}