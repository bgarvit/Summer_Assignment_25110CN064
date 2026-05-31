#include<iostream>
using namespace std;
int main()
{
    int n,f1=0,f2=1,F;
    cout << "Enter the number of terms to be entered:";
    cin >> n;
    cout << "The fabonacci series is 0 1";
    for(int i=1;i<=n-2;i++){
    F=f1+f2;
    f1=f2;
    f2=F;
    cout << " "<< F;
    }
    return 0;
}