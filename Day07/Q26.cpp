#include<iostream>
using namespace std;
int fibonacci(int a)
{
   if(a==0)
   return 0;
   if(a==1)
   return 1;
   return fibonacci(a-1) + fibonacci(a-2);
}
int main()
{
    int n;
    cout <<"Enter the number of terms which is to be printed: ";
    cin >> n;
    cout <<"The fibonacci series is: ";
    for(int i=0;i<=n-1;i++){
        cout <<" "<< fibonacci(i);
    }
return 0;    
}