#include<iostream>
using namespace std;
int main(){
    char ch[1000];
    cout << "Enter the sentence: ";
    cin.getline(ch, 100);
    //copying characters except space from the original string to itself.
    int i=0,j=0;
    while(ch[i]!='\0'){
    if(ch[i]!=32){
        ch[j]=ch[i];
        j++;
    }
    i++;}
    //adding null character at the end of the new string.
    ch[j]='\0';
    //printing the new string without space.
    cout <<"The space removed string is: ";
    i=0;
    while(ch[i]!='\0'){
        cout<<ch[i];
        i++;
    }
return 0;
}