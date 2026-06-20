#include<iostream>
using namespace std;
int main(){
    char ch[1000]={},cho[1000]={};
    cout <<"Enter the string to be compressed: ";
    cin>> ch;
    //if current and next character are same then increasing the flag variable.
    int j=0,count=1,i=0;
    while(ch[j]!=0){
        if(ch[j]==ch[j+1]){
            count++;
            j++;
        }
        //if current and next character are not same then storing the character and its count in another array.
        else{
        cho[i]=ch[j];
        i++;
        cho[i]=count+'0';
        i++;
        count=1;
        j++;}
    }
    cout <<"The compressed string is: "<<cho;
return 0;    
}