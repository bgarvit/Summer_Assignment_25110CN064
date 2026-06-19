#include<iostream>
using namespace std;
int main(){
    char ch[1000];
    int f[256]={};
    cout << "Enter the sentence: ";
    cin.getline(ch, 1000);
    // Count the frequency of each character
    int i=0,j;
    while(ch[i]!='\0'){
        j=ch[i];
        f[j]++;
    i++;}
    // Find the first repeating character and printing it.
    cout<<"The first repeating character is:"<<endl;
    i=0;
    while(ch[i]!='\0'){
        if(f[ch[i]]>1){ 
    cout<<":"<<ch[i]<<endl;
    break;}
    i++;}
return 0;
}