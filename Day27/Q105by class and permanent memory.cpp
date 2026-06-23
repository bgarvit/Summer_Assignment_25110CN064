#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class record{// Class to represent a student record.
    private:
        int roll;
        string name;
    public:
void addStudent() {// Function to add a new student record.
    cout<<"\n======ADD STUDENTS======\n";
    cout<< "Enter Student Name: ";
    cin>>name;
    cout<< "Enter Roll Number: ";
    cin>>roll;}
    
void viewStudents() {// Function to view a student record.
    cout<<"\n======VIEW ALL STUDENTS======\n";
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "-----------------------" << endl;}
    
int getroll() {// flag to return roll number for searching.
return roll;}

string getname() {// flag to return name for saving to file.
return name;}

};

void displayMenu() { // Function to display the menu options.
    cout << "\nSelect the required \n";
    cout << "1. Add Student\n";
    cout << "2. View All Students\n";
    cout << "3. Search Student\n";
    cout << "4. Exit\n";
    cout << "==> ";}
    
void SearchStudent(record s1[], int ttlstd) { // Function to search for a student record by roll number.
     cout<<"\n======SEARCH STUDENTS======\n";
        int searchRoll;
            cout << "Enter Roll Number to search: ";
            cin >> searchRoll;
            int f=0;
            for(int i = 0; i < ttlstd; i++){
            if(s1[i].getroll() == searchRoll){ 
                cout << "\n--- Student Found ---" << endl;
                s1[i].viewStudents();
                f = 1;
                break;}}
            if(f == 0){
            cout<<"Error: Student with Roll Number "<<searchRoll<<" Not found!\n";}}

void savefile(record s1[], int ttlstd){  // Function to save all student records to a file before exiting.
    ofstream outfile("Student Record.txt");
    for(int i=0;i<ttlstd;i++){
        outfile<< s1[i].getname() << " " << s1[i].getroll() << endl;}
        outfile.close();
        cout << "\n[System] All data permanently saved to Student Record.txt!\n";}
            
int main(){
record s1[100];
int ttlstd=0,choice;
char y;
cout <<"\t\t\t\t\t\t\t\t-----WELCOME-----\n";
cout <<"\t\t\t\t Student Record Management System\n";
do{
    displayMenu();
    cin>>choice;
    if(choice==1){  // Add a new student record.
        s1[ttlstd].addStudent();
        ttlstd++;
        cout<< "\n------Student Added Successfully!------\n";
        cout<<"Press 'y' to Continue! and 'n' to Exit!\n";
        cin>>y;
        if(y=='n'||y=='N'){
            choice=4;}}
    else if(choice==2){  //  View all student records.
        cout<<"\n======VIEW ALL STUDENTS======\n";
        if (ttlstd == 0) {
            cout << "No students found!\n";}
        else {
            for(int i = 0; i < ttlstd; i++){
            s1[i].viewStudents();}}
        cout<<"Press 'y' to Continue! and 'n' to Exit!\n";
        cin >> y;
        if(y=='n'||y=='N'){
            choice=4;}}
    else if(choice==3){  // Search for a student record by roll number.
        SearchStudent(s1,ttlstd);
        cout<<"Press 'y' to Continue! and 'n' to Exit!\n";
        cin>>y;
        if(y=='n'||y=='N'){
            choice=4;}}
    else if(choice==4){  // Exit the program and save all records to file.
        savefile(s1, ttlstd);
        cout<<"\n======EXIT======\n";
        return 0;}
    else{
        cout<<"Invalid Selection Please Try Again";}}
    while(choice!=4);
return 0;
}