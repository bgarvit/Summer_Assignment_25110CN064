#include<iostream>
#include<string>
using namespace std;
struct record{
    int roll;
    string name;};
    // Function to display the menu options
void displayMenu() {
    cout << "\nSelect the required \n";
    cout << "1. Add Student\n";
    cout << "2. View All Students\n";
    cout << "3. Search Student\n";
    cout << "4. Exit\n";
    cout << "==> ";}
    // Function to add a new student record.
void addStudent(record s1[], int &ttlstd) {
    cout<<"\n======ADD STUDENTS======\n";
    cout<< "Enter Student Name: ";
    cin>> s1[ttlstd].name;
    cout<< "Enter Roll Number: ";
    cin>> s1[ttlstd].roll;
    ttlstd++;
    cout<< "\n------Student Added Successfully!------\n";}
    // Function to view all student records.
void viewStudents(record s1[], int ttlstd) {
    cout<<"\n======VIEW ALL STUDENTS======\n";
    if (ttlstd == 0) {
            cout << "No students found in the database!\n";}
        else {
            for(int i = 0; i < ttlstd; i++){
                cout << "Student " << (i + 1) << ":" << endl;
                cout << "Name: " << s1[i].name << endl;
                cout << "Roll: " << s1[i].roll << endl;
                cout << "-----------------------" << endl;}}}
    // Function to search for a student record by roll number.
void SearchStudent(record s1[], int ttlstd) {
     cout<<"\n======SEARCH STUDENTS======\n";
        int searchRoll;
            cout << "Enter Roll Number to search: ";
            cin >> searchRoll;
            int f=0;
            for(int i = 0; i < ttlstd; i++){
            if(s1[i].roll == searchRoll){ 
                cout << "\n--- Student Found ---" << endl;
                cout << "Name: " << s1[i].name << endl;
                cout << "Roll: " << s1[i].roll << endl;
                f = 1;
                break;}}
            if(f == 0){
            cout<<"Error: Student with Roll Number "<<searchRoll<<" Not found!\n";}}
    // Main function to run the student record management system.
int main(){
record s1[100];
int ttlstd=0,choice;
char y;
cout <<"\t\t\t\t\t\t\t\t-----WELCOME-----\n";
cout <<"\t\t\t\t Student Record Management System\n";
do{ // Display the menu and get user choice.
    displayMenu();
    cin>>choice;
    if(choice==1){ // Add a new student record.
        addStudent(s1,ttlstd);
        cout<<"Press 'y' to Continue! and 'n' to Exit!\n";
        cin>>y;
        if(y=='n'||y=='N'){
            choice=4;}}
    else if(choice==2){ //  View all student records.
        viewStudents(s1,ttlstd);
        cout<<"Press 'y' to Continue! and 'n' to Exit!\n";
        cin>>y;
       if(y=='n'||y=='N'){
            choice=4;}}
    else if(choice==3){ // Search for a student record by roll number.
        SearchStudent(s1,ttlstd);
        cout<<"Press 'y' to Continue! and 'n' to Exit!\n";
        cin>>y;
        if(y=='n'||y=='N'){
            choice=4;}}
    else if(choice==4){ // Exit the program.
        cout<<"\n======EXIT======\n";
        return 0;}
    else{
        cout<<"Invalid Selection Please Try Again";}}
    while(choice!=4);
return 0;
}