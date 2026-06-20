#include<iostream>
using namespace std;
int main(){
    char s1[1000],s2[1000],db[2000];
    int l=0;
    cout<<"Enter the string1:";
    cin>>s1;
    cout<<"Enter the string2:";
    cin>>s2;
    
    int l1=0;
    while(s1[l1]!='\0'){
        l1++;
    }
    int l2=0;
    while(s2[l2]!='\0'){
        l2++;
    }
    
    if(l1!=l2){
        cout << "there is no rotation";
        return 0;
    }
    
    for(int i=0; i<l1; i++){
        db[i] = s1[i];}
    for(int i=0; i<l1; i++){
        db[l1+i] = s1[i];}
    db[l1+l1]='\0';
        
    for(int i=0; i<l1; i++){
        int j;
        for(j=0; j<l2; j++){
            if(db[i+j]!=s2[j]){
                break;
            }
        }
        if(j==l2){
            l++;
            break;}
        }
    if(l>0)
    cout << "The string rotation is true";
    else
    cout << "There is no string rotation";
return 0;    
}