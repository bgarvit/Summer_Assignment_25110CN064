#include <iostream>
using namespace std;
int main(){
    char ch[100];
    cout << "Enter the string:";
    cin.getline(ch, 100);
    //counting letters in sentence but with condition to only count first letter.
    //if first letter is space then no count.
    //if first letter is not space then count and if space is there then check if next character is letter then count.
    int i=0,s=0;
    while(ch[i]!='\0'){
    if((i==0||ch[i-1]==32)&&ch[i]!=32){
        s++;
    }
    i++;
    }
    cout << "The total number of words in the sentence is:"<<s;
        
return 0;
}