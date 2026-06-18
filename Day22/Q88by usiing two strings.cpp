#include<iostream>
using namespace std;
int main(){
    char ch[1000],ch2[1000]={};
    cout << "Enter the sentence: ";
    cin.getline(ch, 100);
    //copying characters except space from the original string to new string.
    int i=0,j=0;
    while(ch[i]!='\0'){
    if(ch[i]!=32){
        ch2[j]=ch[i];
        j++;
    }
    i++;}
    //printing the new string without space.
    cout <<"The space removed string is: ";
    i=0;
    while(i!=j){
        cout<<ch2[i];
        i++;
    }
return 0;
}