#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i,g=0,d=0;        //d and g are assigned 0 to avoid garbage value//
    cout<< "Enter the number:";
    cin>> n1;
    cout<< "Enter the number:";
    cin>> n2;
    if(n1>n2)
    {                  //here smaller number is taken in loop as GCD can not be greater than smaller number//
    for(i=1;i<=n2;i++){
        if(n1%i==0 && n2%i==0)
        g=i;
    }
    cout << "The GCD is "<< g;}
    else if(n2>=n1)
    {                   //here smaller number is taken in loop as GCD can not be greater than smaller number//         
    for(i=1;i<=n1;i++){
        if(n1%i==0 && n2%i==0)
        d=i;
    }
    cout << "The GCD is "<< d;}
return 0;   
}