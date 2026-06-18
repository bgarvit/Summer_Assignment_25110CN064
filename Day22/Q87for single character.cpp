#include<iostream>
using namespace std;
int main(){
    char ch[100],f;
    cout << "Enter the sentence: ";
    cin.getline(ch, 100);
    cout << "Enter the character to find its frequency: ";
    cin >>f;
    //counting frequency of specified character in the sentence.
    int i=0,j=0;
    while(ch[i]!='\0'){
        if(ch[i]==f){
        j++;}
    i++;}
    if(j>0)
    cout <<"The frequency of the character is: "<<j;
    else
    cout <<"The character is not present in the sentence.";
return 0;
}