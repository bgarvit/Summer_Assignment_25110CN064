#include <iostream>
using namespace std;
int main(){
    char ch1[1000]={},ch2[1000]={};
    int db[256]={};
    cout <<"Enter the string: ";
    cin >> ch1;
    //if the character is not present in the string then add it to the new string
    int i=0,j=0;
    while(ch1[i]!=0){
        if(db[ch1[i]]==0){
            db[ch1[i]]=1;
            ch2[j]=ch1[i];
             j++;
        }
        i++;
    }
    cout << "The desired string is: "<<ch2;
return 0;
}