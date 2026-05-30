#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i,l=0;
    cout << "Enter a number:";
    cin >> n1;
    cout << "Enter a number:";
    cin >> n2;
    for(i=1;i<=(n1*n2);i++){
    if(i % n1==0 && i % n2==0){
    l=i;
    break;}}
    cout <<"The LCM of the number is "<< l;
return 0;
}