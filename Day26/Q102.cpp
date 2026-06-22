#include<iostream>
using namespace std;
int main(){
    int age;
    cout <<"Enter your age:";
    //The program will keep asking for the age until a valid input is given.
    do{
    cin >> age;
    if(age<=0){
        cout<<"invalid input"<<endl;
        cout<<"Try again"<<endl<<"age: ";}
    else if(age<=17&&age>0){
        cout<<"You are not eligible for voting";}
    else if(age<=100&&age>=18){
        cout<<"You are eligible for voting";}
    else if(age>100){
        cout<<"invalid input"<<endl;
        cout<<"Try again:"<<endl<<"age: ";}}
    while(age>100||age<=0);
return 0;
}