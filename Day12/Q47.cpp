#include<iostream>
using namespace std;
void fibonacci(int a){
    long long F,f1=0,f2=1;
    cout << "The series is 0 1";
    for(int i=1;i<a-1;i++){
    F=f1+f2;
    f1=f2;
    f2=F;
    cout <<" "<<F;
   }
}

int main(){
    int n;
    cout <<"Enter the number of terms in the series:";
    cin >> n;
    if(n==1){
    cout << "The series is 0";}
    else
    fibonacci(n);
return 0;
} 