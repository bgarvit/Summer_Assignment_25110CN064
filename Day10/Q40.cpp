#include <iostream>
using namespace std;
int main() {
    for(int i=65;i<=69;i++){
        for(int j=65;j<=134-i;j++){
            cout <<" ";}
        for(char k=65;k<=i;k++){
            cout <<k;}
        for(char l=i-1;l>=65;l--){
            cout <<l;}    
        cout<<endl;}
    return 0;
}