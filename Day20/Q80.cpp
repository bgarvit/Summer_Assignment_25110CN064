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
    cout << "The column sum is:";
    //sum of the columns of the matrix
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            b[j]+=a[i][j];}
            cout<< b[j];
        cout <<endl;}
    return 0;
}