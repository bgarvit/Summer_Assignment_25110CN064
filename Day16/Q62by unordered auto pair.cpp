#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int a[100]={},n;
    unordered_map<int, int>f;
    cout << "Define the elements of the array:"<<endl;
    cin >> n;
    cout << "Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin >> a[i];}
    // Count the frequency of each element in the array
    int H=0,b=0,h;
    for(int i=0;i<n;i++){
    f[a[i]]++;
    b++;}
    // Find the maximum frequency and the corresponding element
    for(auto pair : f){
        int i= pair.first;
        int tc = pair.second;
       if(tc>H){
          H=tc;}}
    // Print the element(s) with the maximum frequency      
    if(H <= 1){
    cout << "No repeating case found!";}
    else {
    cout<<"The maximum frequency element is:";
    for(auto pair : f){
        int i=pair.first;
        int tc = pair.second;
        if(tc==H&&H>1)
        cout<<":"<<i<<endl;
    }}
return 0;
}