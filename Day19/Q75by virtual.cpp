#include <iostream>
using namespace std;
int main() {
    int a[100][100]={},r;
    cout << "Determine the order of the square matrix :"<<endl;
    cin >> r;
    cout << "Enter the elements of the matrix :"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cin >> a[i][j];}}
 
    cout << "The transposed matrix is:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cout <<" "<< a[j][i];}
        cout<<endl;
    }
    return 0;
}