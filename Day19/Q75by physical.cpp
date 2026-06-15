#include <iostream>
using namespace std;
int main() {
    int a[100][100]={},b[100][100]={},r;
    cout << "Determine the order of the square matrix :"<<endl;
    cin >> r;
    cout << "Enter the elements of the matrix :"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cin >> a[i][j];}}
   
     for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        b[j][i]= a[i][j];}}
        
    cout << "The transposed matrix is:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cout <<" "<< b[i][j];}
        cout<<endl;
    }
    return 0;
}