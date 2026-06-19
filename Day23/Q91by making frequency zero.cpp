#include<iostream>
using namespace std;
int main(){
    char ch[1000],st[1000];
    int f1[256]={},l=0;
    cout << "Enter the first sentence: ";
    cin.getline(ch, 1000);
    cout << "Enter the second sentence: ";
    cin.getline(st, 1000);
    // Count the frequency of each character in the first string
    int i=0,j;
    while(ch[i]!='\0'){
        j=ch[i];
        f1[j]++;
    i++;}
    // Subtract the frequency of characters in the second string from the first string
    i=0;
    while(st[i]!='\0'){
        j=st[i];
        f1[j]--;
    i++;}
    // Check if all frequencies are zero
    for(int i=0;i<256;i++){
        if(f1[i]==0){
            l++;
        }
    }
    if(l==256)
    cout<<"The strings are anagram:"<<endl;
    else
    cout<<"The string is not anagram";
return 0;
}