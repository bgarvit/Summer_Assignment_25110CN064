#include <iostream>
using namespace std;
int main(){
    char ch[100],c[100];
    cout << "Enter the string:";
    cin >> ch;
    //Finding the length of the string
     int i=0;
    while(ch[i]!='\0'){
        i++;
    }
    //Reversing the string by using the length of the string
      int j=0;
    while(i!=0){
        c[j]=ch[i-1];
        i--;
        j++;
    }
    c[j]='\0';
    cout <<"The reverse string is:"<<c;
return 0;
}