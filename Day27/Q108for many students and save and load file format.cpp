#include<iostream>
#include<string>
#include<fstream>
using namespace std;
    class marksheet{
        private:
            string fname;
            string lname;
            int marks[5];
            char grade;
            int total=0;
            double percentage;
            string sub[5]={"Maths", "Chemistry", "Physics", "Electronics", "Mechanical"};
        public:
void addstd(){
    cout <<"\n====Student Details====\n";
    cout <<"Enter First name: ";
    cin>>fname;
    cout <<"Enter Last name: ";
    cin>>lname;
    for(int i=0;i<5;i++){
    cout <<"Enter the marks of "<<sub[i]<<":";
    cin>>marks[i];
    total=total+marks[i];}
    percentage = (total / 500.0) * 100;
    if(percentage>90){grade = 'A';}
    else if(percentage>80){grade = 'B';}
    else if(percentage>70){grade = 'C';}
    else{grade = 'D';}
    }
void displaymarksheet(){
    cout <<"Subject  |  MaxMarks  |  ObtainedMarks  |  Grade\n";
    for(int i=0;i<5;i++){
    cout <<sub[i]<<"  |  "<<"  100      |     "<<marks[i]<<endl;}}
string getfname(){
    return fname;}
string getlname(){
    return lname;}
int getmarks(int i){
    return marks[i];}
char getgrade(){
    return grade;}
void setdetails(string tempfname,string templname,int m1,int m2,int m3,int m4,int m5) {
            fname = tempfname;
            lname = templname;
            marks[0]=m1;
            marks[1]=m2;
            marks[2]=m3;
            marks[3]=m4;
            marks[4]=m5;
            total=m1+m2+m3+m4+m5;
            percentage = (total / 500.0) * 100;
            if(percentage>90){grade = 'A';}
            else if(percentage>80){grade = 'B';}
            else if(percentage>70){grade = 'C';}
            else{grade = 'D';}}};
void savefile(marksheet mm[],int &totalstd){
    ofstream outfile("Marksheet.txt");
    for(int i=0;i<totalstd;i++){
        outfile<<mm[i].getfname()<<" "<<mm[i].getlname()<<" ";
        for(int j=0;j<5;j++){
            outfile<<mm[i].getmarks(j)<<" ";}
        outfile<<endl;}
    outfile.close();
    cout << "\n[System] All data permanently saved to Marksheet.txt!\n";}
void loadfile(marksheet mm[],int &totalstd){
    ifstream infile("Marksheet.txt");
    string tempfname,templname;
    int m1,m2,m3,m4,m5;
    if(!infile) { return; }
    while(infile>>tempfname>>templname>>m1>>m2>>m3>>m4>>m5){
        mm[totalstd].setdetails(tempfname, templname, m1, m2, m3, m4, m5);
        totalstd++;}
    infile.close();
    cout << "\n[System] Database Loaded Successfully! " << totalstd << " ";}
int main(){
    marksheet mm[100];
    int totalstd=0;
    int choice;
    char std;
    do {
        cout << "\n\t\t\tA B C College Of Engineering And Management\n";
        cout << "\n1. Add New Student Marks";
        cout << "\n2. View All Student Report Cards";
        cout << "\n3. Exit System";
        cout << "\n==> ";
        cin >> choice;
        if (choice == 1) {
            mm[totalstd].addstd(); 
            totalstd++;
            cout << "\n[System] Student marks saved successfully!\n";}
        else if (choice == 2) {
            if (totalstd == 0) {
                cout << "\n[System] No students in the database yet!\n";} 
            else {
                for (int i = 0; i < totalstd; i++) {
                    cout << "\n\t\t--------------------Marksheet--------------------\n";
                    mm[i].displaymarksheet();
                    cout << "This is to declare that the student " << mm[i].getfname() 
                         << " " << mm[i].getlname() << " has passed with grade " 
                         << mm[i].getgrade() << "\n";}}}
        else if (choice == 3) {
            cout << "\n====== SYSTEM SHUTDOWN ======\n";
            savefile(mm,totalstd);
            return 0;}
        else {cout << "\nInvalid choice! Try again.\n";}
    } while (choice != 3);
return 0;   
}