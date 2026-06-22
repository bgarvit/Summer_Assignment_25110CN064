#include<iostream>
using namespace std;
int main(){
    int pin=5678,upin,atmpt=0,choice,amt;
    double blnc=1000;
    cout <<"\t\t\t\t\t\t\t WELCOME"<<endl<<"\t\t\t\t\t\tABC BANK OF INDIA"<<endl<<endl;
    while(upin!=pin&&atmpt<3){
    cout<<"User enter your pin:" ;
    cin>>upin;
    atmpt++;
    }
    //if user fails to enter correct pin in 3 attempts the program will end with a message.
    if (atmpt == 4) {
    cout<<"All 3 Attempts used plz try later!!"; 
    return 0; }
    //if the pin is correct the user will be able to perform banking operations until they choose to exit.
    do{
    cout << "\n\t\t\t\t\t=== ABC BANK OF INDIA ===" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if(choice==1){
        cout << "Your current balance is: $" << blnc << endl;}
    else if(choice==2){
    cout << "Enter deposit amount: $";
        cin >> amt;
        if (amt > 0)
            blnc = blnc + amt;
        else 
            cout<<"Error: Invalid amount!";}
    else if(choice==3){
        cout << "Enter withdrawal amount: $";
        cin >> amt;
        if(amt>0&&amt<=blnc)
            blnc = blnc - amt;
        else if(amt > blnc)
            cout<<"Error: Insufficient funds!";
        else
            cout<<"Error: Invalid amount!";}
    else if(choice==4){
        cout << "Thank you!!";}
    else{
        cout << "Invalid choice! Try again.";}}
while(choice!=4);
return 0;
}