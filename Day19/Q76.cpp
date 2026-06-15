#include <iostream>
using namespace std;
int main() {
    int a[100][100]={},b[100][100]={},r;
    cout << "Determine the order of the square matrix :"<<endl;
    cin >> r;
    cout << "Enter the elements of the matrix 1:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cin >> a[i][j];}}
    cout << "Enter the elements of the matrix 2:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cin >> b[i][j];}}
        
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        if(i==j)
        a[i][j]=a[i][j]+b[i][j];
        }}
    
    cout << "The diagonal sum is:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        if(i==j)
        cout <<" "<< a[i][j];
        else 
        cout <<" $";
        }
        cout<<endl;
    }
    return 0;
}