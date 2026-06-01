#include<iostream> 
using namespace std;
int main()
{
    int n,stg,rem,sum=0;
    cout << "Enter the number to check if the number is strong number: ";
    cin >> n;
    
    stg=n;
    while(stg!=0){
        rem= stg%10;
        stg/=10;
        int fact =1;                //fact is initialized here as every time the loop runs the value changes.//
        for(int i=1;i<=rem;i++)
        fact = fact*i;
        sum = sum + fact;
        }
        if(sum==n)
        cout << "The number is a strong number.";
        else 
        cout << "The number is not a strong number.";
return 0;   
}