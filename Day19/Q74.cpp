#include <iostream>
using namespace std;
int main() {
    int a[100][100]={},b[100][100]={},r,c;
    cout << "Determine the order of the matrix :"<<endl;
    cin >> r;
    cin >> c;
    cout << "Enter the elements of the matrix 1:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cin >> a[i][j];}}
    cout << "Enter the elements of the matrix 2:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cin >> b[i][j];}}
    //subtraction of the two matrices    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        a[i][j]=a[i][j]-b[i][j];
        }}
    
    cout << "The subtracted matrix is:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cout <<" "<< a[i][j];}
        cout<<endl;
    }
    return 0;
}