#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Employee {
    private:
        int id;
        string name;
        double salary; // Added Corporate Data!   
    public:
        // Button to add data
        void addEmployee() {
            cout<<"\n======ADD EMPLOYEE======\n";
            cout<< "Enter Employee Name (One word): ";
            cin>>name;
            cout<< "Enter Employee ID: ";
            cin>>id;
            cout<< "Enter Employee Salary: ";
            cin>>salary;}
        // Button to print data
        void viewEmployee() {
            cout << "Name:   " << name << endl;
            cout << "ID:     " << id << endl;
            cout << "Salary: $" << salary << endl;
            cout << "--------------------------------------" << endl;}
        // Getters for the Save Engine
        int getId() { return id; }
        string getName() { return name; }
        double getSalary() { return salary; }
        // Setter for the Load Engine
        void setDetails(string tempName, int tempId, double tempSalary) {
            name = tempName;
            id = tempId;
            salary = tempSalary;}};
void displayMenu() {
    cout << "\nSelect the required operation:\n";
    cout << "1. Add Employee\n";
    cout << "2. View All Employees\n";
    cout << "3. Search Employee\n";
    cout << "4. Exit & Save\n";
    cout << "==> ";}
void searchEmployee(Employee emp[], int empCount) {
    cout<<"\n======SEARCH EMPLOYEE======\n";
    int searchId;
    cout << "Enter Employee ID to search: ";
    cin >> searchId;
    int f = 0;
    for(int i = 0; i < empCount; i++) {
        if(emp[i].getId() == searchId) { 
            cout << "\n--- Employee Found ---" << endl;
            emp[i].viewEmployee();
            f = 1;
            break;}}
    if(f == 0){
        cout<<"Error: Employee with ID "<<searchId<<" not found!\n";}}
// The Backup Generator
void saveFile(Employee emp[], int empCount) {
    ofstream outfile("Employee_Database.txt");
    for(int i = 0; i < empCount; i++) {
        outfile << emp[i].getName() << " " << emp[i].getId() << " " << emp[i].getSalary() << endl;}
    outfile.close();
    cout << "\n[System] All data permanently saved to Employee_Database.txt!\n";}
// The Auto-Load Engine
void loadFile(Employee emp[], int &empCount) {
    ifstream infile("Employee_Database.txt");
    // Check if file exists yet
    if(!infile) {
        cout << "[System] No previous database found. Starting fresh.\n";
        return;}
    string tempName;
    int tempId;
    double tempSalary;
    // Read data until the text file is empty
    while(infile >> tempName >> tempId >> tempSalary) {
        emp[empCount].setDetails(tempName, tempId, tempSalary);
        empCount++;}
    infile.close();
    cout << "[System] Database Loaded! " << empCount << " employees restored.\n";}    
int main() {
    Employee emp[100]; // Master Archive
    int empCount = 0;  // Counter
    int choice;
    char y;
    cout <<"\t\t\t\t\t\t\t\t-----WELCOME-----\n";
    cout <<"\t\t\t\t Corporate Employee Management System\n";
    // IGNITION: Load data immediately on startup!
    loadFile(emp, empCount);
    do {
        displayMenu();
        cin >> choice;
        if(choice == 1) {
            emp[empCount].addEmployee();
            empCount++;
            cout<< "\n------Employee Added Successfully!------\n";
            cout<<"Press 'y' to Continue or 'n' to Exit: ";
            cin>>y;
            if(y=='n'||y=='N'){ choice=4; }}
        else if(choice == 2) {
            cout<<"\n======VIEW ALL EMPLOYEES======\n";
            if (empCount == 0) {
                cout << "No employees found in the database!\n";}
            else {
                for(int i = 0; i < empCount; i++){
                    emp[i].viewEmployee();}}
            cout<<"Press 'y' to Continue or 'n' to Exit: ";
            cin >> y;
            if(y=='n'||y=='N'){ choice=4; }}
        else if(choice == 3) {
            searchEmployee(emp, empCount);
            cout<<"Press 'y' to Continue or 'n' to Exit: ";
            cin>>y;
            if(y=='n'||y=='N'){ choice=4; }}
        else if(choice == 4) {
            saveFile(emp, empCount);
            cout<<"\n======SYSTEM SHUTDOWN======\n";
            return 0;}
        else {
            cout<<"Invalid Selection! Please Try Again.\n";}
    } while(choice != 4)
    return 0;
}