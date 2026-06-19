#include<iostream>
using namespace std;
int main(){
    char ch[1000];
    int f[256]={};
    cout << "Enter the sentence: ";
    cin.getline(ch, 1000);
    // Count and save the frequency of each character
    int i=0,j;
    while(ch[i]!='\0'){
        j=ch[i];
        f[j]++;
    i++;}
    // Find the maximum occurring character and printing it.
    int l=f[0],k=0;
    for(int i=0;i<256;i++){
        if(f[i]>l){
            l=f[i];
            k=i;
        }
    }
    if(l>0)
    cout<<(char)k;
    else
    cout<<"The string does not have maximum occuring character.";
return 0;
}