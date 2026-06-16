#include <iostream>
using namespace std;
int main() {
    int a[100][100]={},b[100]={},r,c;
    cout << "Determine the order of the matrix:"<<endl;
    cin >> r;
    cin >> c;
    cout << "Enter the elements of the matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cin >> a[i][j];}}
    cout << "The sum of the rows of the matrix is:"<<endl;
    //sum of the rows of the matrix
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            b[i]+=a[i][j];}
            cout<< b[i];
        cout <<endl;}
        
    return 0;
}