#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char ch[100];
    cout << "Enter the string:";
    cin.getline(ch, 100);
    //converting the string to uppercase by using the ASCII values of the characters.
    int l=0;
    while(ch[l]!='\0'){
    if(ch[l]>='a'&&ch[l]<='z'){
    ch[l]-=32;}
    l++;
    }
    cout <<"The word in upperchase is :"<<ch;
return 0;
}