#include <iostream>
using namespace std;
int main() {
    int a[100][100]={},b[100][100]={},c[100][100]={},r1,c1,r2,c2,add=0;
    cout << "Determine the order of the matrix 1:"<<endl;
    cin >> r1;
    cin >> c1;
    cout << "Enter the elements of the matrix 1:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
        cin >> a[i][j];}}
    cout << "Determine the order of the matrix 2:"<<endl;
    cin >> r2;
    cin >> c2;
    cout << "Enter the elements of the matrix 2:"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
        cin >> b[i][j];}}
        //Multiplication of the two matrices
    if(c1==r2){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for(int k=0;k<c1;k++){
        c[i][j]+=(a[i][k])*(b[k][j]);}
        add++;
        }}}
    else 
    {cout << "Multiplication not possible:";}
    //Display the multiplied matrix
    if(add>0){
    cout << "The multiplied matrix is:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
        cout <<" "<< c[i][j];}
        cout<<endl;
    }}
    return 0;
}