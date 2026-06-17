#include <iostream>
using namespace std;
int main(){
    char ch[100];
    cout << "Enter the string:";
    cin >> ch;
    //Finding the length of the string
     int i=0;
    while(ch[i]!='\0'){
        i++;
    }
    //Reversing the string by using the length of the string, two variable and swapping.
    int l=0;
    int r=i-1;
    while(l<r){
    char temp=ch[l];
        ch[l]=ch[r];
        ch[r]=temp;
        r--;
        l++;
        }
    cout <<"The reverse string is:"<<ch;
return 0;
}