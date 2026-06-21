#include <iostream>
using namespace std;
int main(){
    char chr[100]={},cha[100]={};
    int c1[256]={},c2[256]={};
    cout << "Enter the string 1: ";
    cin >>chr;
    cout << "Enter the string 2: ";
    cin >>cha;
    //counting the frequency of each character in both strings
    int i=0;
    while(chr[i]!='\0'){
        c1[chr[i]]=1;
        i++;
    }
    int j=0;
    while(cha[j]!='\0'){
        c2[cha[j]]=1;
        j++;
    }
    //printing the common characters
    for(int i=0;i<256;i++){
        if(c1[i]>=1&&c2[i]>=1){
            cout <<(char)i;
        }}
return 0;
}