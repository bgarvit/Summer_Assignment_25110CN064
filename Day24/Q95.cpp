#include<iostream>
using namespace std;
int main(){
    char ch[1000]={};
    cout <<"Enter the string to find longest word: ";
    cin.getline(ch, 1000);
    
    int i=0,l=1,k=0,m=1;
    while(ch[i]!='\0'){
        if(ch[i]!=32){
        k++;
        }
        else{
             if(k>l){
            l=k;
            m=i-k;
            }
        k=0;}
        i++;
    }
    
    if(k>l){
        l=k;
        m=i-k;}
    cout <<"The longest word is ";
    for(int p=0; p<l ;p++) {
    cout <<ch[m + p];
}
return 0;    
}