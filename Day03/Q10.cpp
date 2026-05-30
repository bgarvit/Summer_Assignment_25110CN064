#include<iostream> 
using namespace std;
int main()
{
    int n,i,j;
    cout << "Enter the number:";
    cin >> n;
    cout << "The prime numbers are:";
    if(n>=2){      //if condition used as no prime is less than 2//
    for(i=2;i<=n;i++){
    int p=0;        // p flag variable used to print only prime numbers//
    for(j=2;j<i;j++){
    if(i%j==0)
    {p=1;
    break;}        // break used to exit loop early to save time which is used in unnecessary iterations//
    }
    if(p!=1)
    cout<< i <<" ";
    }}
    else
    cout << "no prime number";
return 0;    
}