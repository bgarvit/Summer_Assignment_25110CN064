#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n;
    char wrd[100][100]={},temp[100]={};
    cout << "Define the number of words: "<<endl;
    cin >>n;
    cout << "Enter the words: "<<endl;
    for(int i=0;i<n;i++){
        cin>> wrd[i];
    }
    //sorting the words in increasing order of their length using bubble sort.
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(strlen(wrd[j])>strlen(wrd[j+1])){
                strcpy(temp, wrd[j]);
                strcpy(wrd[j], wrd[j+1]);
                strcpy(wrd[j+1], temp);
            }
        }
    }
    cout << "The sorted word by length are: "<<endl;
        for(int i=0;i<n;i++){
            cout <<wrd[i]<<endl;
        }
    return 0;
}