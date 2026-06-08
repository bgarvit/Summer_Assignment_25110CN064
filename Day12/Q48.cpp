#include<iostream>
using namespace std;
void perfect(int a){
    int b=0;
    for(int i=1;i<=a/2;i++){
    if(a%i==0)
    b+=i;
    }
    if(a==b){
    cout<< "The number is a perfect number";}
    else
    cout<< "The number is not a perfect number";
}

int main(){
    int n;
    cout <<"Enter the number if its perfect:";
    cin >> n;
    perfect(n);
return 0;
}