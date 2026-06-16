#include <iostream>
using namespace std;
int main() {
    int a[100][100]={},r,c,add=0;
    cout << "Determine the order of the square matrix:"<<endl;
    cin >> r;
    cout << "Enter the elements of the matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cin >> a[i][j];}}
    //square matrix which is equal to its transpose.we check if a[i][j] equal to a[j][i].
    for(int i=0;i<r;i++){
        for(int j=i+1;j<r;j++){
        if(a[i][j]==a[j][i])
        add++;
    }}
    //if number of elements above the main diagonal are equal to elements below diagonal then matrix is symmetric.
    if(add==r*r)
    cout <<"The matrix is symmetric";
    else
    cout <<"The matrix is not symmetric";
    return 0;
}