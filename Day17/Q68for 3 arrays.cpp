#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
        int a[100]={},b[100]={},c[100]={},n1,n2,n3;
        unordered_map<int, int>d;
    cout << "Define the elements of the first array:"<<endl;
    cin >> n1;
    cout << "Define the elements of the second array:"<<endl;
    cin >> n2;
    cout << "Define the elements of the third array:"<<endl;
    cin >> n3;
    cout << "Enter the elements of first array:"<<endl;
    for(int i=0;i<n1;i++){
        cin >>a[i];
    }
    cout << "Enter the element of second array:"<<endl;
    for(int i=0;i<n2;i++){
        cin >>b[i];
    }
    cout << "Enter the element of third array:"<<endl;
    for(int i=0;i<n3;i++){
        cin >>c[i];
    }
    // noting the elements of first array in the map.
    for(int i=0;i<n1;i++){
        if(d[a[i]]==0)
            d[a[i]]=1;
        }
    // checking elements of second array in the map and if present then marking it as 2 in the map.    
    for(int i=0;i<n2;i++){
        if(d[b[i]]==1)
           d[b[i]]=2;
        }
    // checking elements of third array in the map and if present then adding it to first array.   
    int k=0;    
    for(int i=0;i<n3;i++){
        if(d[c[i]]==2){
        a[k]=c[i];
        k++;
        d[c[i]]=0;    
        }
        }
    // Displaying the common elements of the three arrays.
    if(k>0){
    cout << "The common elements of array are:"<<endl;
    for(int i=0;i<k;i++){
        cout <<" "<<a[i];
    }}
    else
    cout << "There is no common element";
    return 0;
}