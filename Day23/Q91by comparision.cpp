#include<iostream>
using namespace std;
int main(){
    char ch[1000],st[1000];
    int f1[256]={},f2[256]={},l=0;
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
    // Count the frequency of each character in the second string
    int k;
    i=0;
    while(st[i]!='\0'){
        k=st[i];
        f2[k]++;
    i++;}
// Compare the frequency of characters in both strings
    for(int i=0;i<256;i++){
        if(f1[i]==f2[i]){
            l++;
        }
    }
    if(l==256)// If the frequency of all characters is the same, then the strings are anagrams.
    cout<<"The strings are anagram:"<<endl;
    else
    cout<<"The string is not anagram";
return 0;
}