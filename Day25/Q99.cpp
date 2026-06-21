#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n;
    char chr[100][100]={},temp[100]={};
    cout << "Define the total number if names: "<<endl;
    cin >>n;
    cout << "Enter the names: "<<endl;
    for(int i=0;i<n;i++){
        cin >>chr[i];
    }
    //sorting the names in alphabetical order using bubble sort.
    for(int j=0;j<n-1;j++){
    for(int i=0;i<n-j-1;i++){
        if(strcmp(chr[i], chr[i+1])>0){
        strcpy(temp, chr[i]);
        strcpy(chr[i], chr[i+1]);
        strcpy(chr[i+1], temp);}
    }
    }
    // printing the sorted names.
    cout <<"The sorted names are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<chr[i]<<endl;
    }

return 0;
}