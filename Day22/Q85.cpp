#include <iostream>
using namespace std;
int main(){
    char ch[100];
    cout << "Enter the string:";
    cin>> ch;
    //Finding the length of the string
    int i=0;
    while(ch[i]!='\0'){
    i++;}
    //by Two pointer approach checking first and last character and if same then moving pointer towards middle.
    //If all the characters are same then incrementing flag m.  
    int l=0;
    int r=i-1;
    int m=0;
    while(l<r){
    if(ch[l]==ch[r]){
    l++;
    m++;
    r--;}
    else
    break;
    }
    //If m is equal to half of the length of the string then the string is a palindrome.
    if(m==i/2)
    cout <<"The word is a palindrome";
    else
    cout<<"The word is not a palindrome";
return 0;
}