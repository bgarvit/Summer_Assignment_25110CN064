#include <iostream>
using namespace std;
long long factorial(int n){
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
return fact;
}
int main() {
    int n;
    cout << "Enter a number to find its factorial: ";
    cin >>n;
    cout << "the factorial of the number is:"<<factorial(n);
    return 0;
}