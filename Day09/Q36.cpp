#include <iostream>
using namespace std;
int main() {
    for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
    if(i>=2&&i<=4){      //here i printed blank spaces for 2,3,4 rows and columns and printed * for  
    if(j>=2&&j<=4)       //the remaining rows and columns to get the pattern.// 
    cout<<" ";
    else
    cout <<"*";}
    else
    cout <<"*";}
    cout <<endl;}
    return 0;
}