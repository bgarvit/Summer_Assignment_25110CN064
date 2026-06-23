#include<iostream>
#include<string>
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
void displaymarks(){
    cout <<"Subject  |  MaxMarks  |  ObtainedMarks  |  Grade\n";
    for(int i=0;i<5;i++){
    cout <<sub[i]<<"  |  "<<"  100      |     "<<marks[i]<<endl;}}
string getfname(){
    return fname;}
string getlname(){
    return lname;}
char getgrade(){
    return grade;}
void setdetails(string tempfname,string templname) {
            fname = tempfname;
            lname = templname;}};
int main(){
    marksheet mm;
    char std;
    mm.addstd();
    cout<<"Enter 'y' or 'Y' to print marksheet and close system and 'n' and 'N' to just close system\n"<<"==>";
    cin>>std;
    if(std=='y'||std=='Y'){
    cout<<"\t\t\t\tA B C College Of Engineering And Management\n";
    cout<<"\t\t--------------------Marksheet--------------------\n";
    mm.displaymarks();
    cout<<"This is to diclare that the student"<<mm.getfname()<<" "<<mm.getlname()<<" has passed with grade "<<mm.getgrade();}
    else{
        return 0;}
return 0;   
}