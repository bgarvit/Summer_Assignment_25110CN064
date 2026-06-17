#include <iostream>
using namespace std;
int main(){
    char ch[100];
    cout << "Enter the string:";
    cin >> ch;
    
     int i=0;
    while(ch[i]!='\0'){
        i++;
    }
    int l=0;
    int v=0;
    int c=0;
    while(ch[l]!='\0'){
    if(ch[l]=='a'||ch[l]=='e'||ch[l]=='i'||ch[l]=='o'||ch[l]=='u'||ch[l]=='A'||ch[l]=='E'||ch[l]=='I'||ch[l]=='O'||ch[l]=='U'){
            v++;}
    else if((ch[l] >= 'a' && ch[l] <= 'z') || (ch[l] >= 'A' && ch[l] <= 'Z')) {
            c++;}
        l++;
        }
    cout <<"The vowels in the word :"<<v<<endl;
    cout <<"The consonants in the word are:"<<c;
return 0;
}