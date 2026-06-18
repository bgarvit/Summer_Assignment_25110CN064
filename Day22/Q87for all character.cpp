#include<iostream>
using namespace std;
int main(){
    char ch[100],f1;
    int f[256]={};
    cout << "Enter the sentence: ";
    cin.getline(ch, 100);
    //counting frequency of all characters in the sentence.
    int i=0;
    while(ch[i]!='\0'){
    f[ch[i]]++;
    i++;}
    //printing frequency of all characters in the sentence.
    cout <<"The frequency of the characters is: ";
    for(int i=0;i<256;i++){
        if(f[i]>0)
        cout<<(char)i<<":"<<f[i]<<" "<<endl;}

return 0;
}