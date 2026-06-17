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
    cout <<"The length of the string is:"<<i;
return 0;
}