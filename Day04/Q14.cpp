#include<iostream>
using namespace std;
int main()
{
    int n,f1=0,f2=1,F;
    cout << "Enter the n to find the nth term in series:";
    cin >> n;
    for(int i=1;i<=n-2;i++){
    F=f1+f2;
    f1=f2;
    f2=F;
    }
        cout << "The nth term of the series is:"<< F;
    return 0;
}