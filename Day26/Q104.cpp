#include<iostream>
#include<string>
using namespace std;
int main(){
    string Question1[100]={"Q1", "Q2", "Q3", "Q4", "Q5", "Q6", "Q7", "Q8", "Q9", "Q10", "Q11", "Q12", "Q13",
         "Q14", "Q15", "Q16", "Q17", "Q18", "Q19", "Q20", "Q21", "Q22", "Q23", "Q24", "Q25", "Q26", "Q27",
          "Q28", "Q29", "Q30", "Q31", "Q32", "Q33", "Q34", "Q35", "Q36", "Q37", "Q38", "Q39", "Q40", "Q41",
           "Q42", "Q43", "Q44", "Q45", "Q46", "Q47", "Q48", "Q49", "Q50", "Q51", "Q52", "Q53", "Q54",
            "Q55", "Q56", "Q57", "Q58", "Q59", "Q60", "Q61", "Q62", "Q63", "Q64", "Q65", "Q66", "Q67",
             "Q68", "Q69", "Q70", "Q71", "Q72", "Q73", "Q74", "Q75", "Q76", "Q77", "Q78", "Q79", "Q80",
              "Q81", "Q82", "Q83", "Q84", "Q85", "Q86", "Q87", "Q88", "Q89", "Q90", "Q91", "Q92", "Q93",
               "Q94", "Q95", "Q96", "Q97", "Q98", "Q99", "Q100"
    };
    string Question2[100]={"Q1", "Q2", "Q3", "Q4", "Q5", "Q6", "Q7", "Q8", "Q9", "Q10", "Q11", "Q12",
         "Q13", "Q14", "Q15", "Q16", "Q17", "Q18", "Q19", "Q20", "Q21", "Q22", "Q23", "Q24", "Q25",
          "Q26", "Q27", "Q28", "Q29", "Q30", "Q31", "Q32", "Q33", "Q34", "Q35", "Q36", "Q37", "Q38",
           "Q39", "Q40", "Q41", "Q42", "Q43", "Q44", "Q45", "Q46", "Q47", "Q48", "Q49", "Q50", "Q51",
            "Q52", "Q53", "Q54", "Q55", "Q56", "Q57", "Q58", "Q59", "Q60", "Q61", "Q62", "Q63", "Q64",
             "Q65", "Q66", "Q67", "Q68", "Q69", "Q70", "Q71", "Q72", "Q73", "Q74", "Q75", "Q76", "Q77",
              "Q78", "Q79", "Q80", "Q81", "Q82", "Q83", "Q84", "Q85", "Q86", "Q87", "Q88", "Q89", "Q90",
               "Q91", "Q92", "Q93", "Q94", "Q95", "Q96", "Q97", "Q98", "Q99", "Q100"
    };
    string Question3[100]={"Q1", "Q2", "Q3", "Q4", "Q5", "Q6", "Q7", "Q8", "Q9", "Q10", "Q11", "Q12",
         "Q13", "Q14", "Q15", "Q16", "Q17", "Q18", "Q19", "Q20", "Q21", "Q22", "Q23", "Q24", "Q25",
          "Q26", "Q27", "Q28", "Q29", "Q30", "Q31", "Q32", "Q33", "Q34", "Q35", "Q36", "Q37", "Q38",
           "Q39", "Q40", "Q41", "Q42", "Q43", "Q44", "Q45", "Q46", "Q47", "Q48", "Q49", "Q50", "Q51",
            "Q52", "Q53", "Q54", "Q55", "Q56", "Q57", "Q58", "Q59", "Q60", "Q61", "Q62", "Q63", "Q64",
             "Q65", "Q66", "Q67", "Q68", "Q69", "Q70", "Q71", "Q72", "Q73", "Q74", "Q75", "Q76", "Q77",
              "Q78", "Q79", "Q80", "Q81", "Q82", "Q83", "Q84", "Q85", "Q86", "Q87", "Q88", "Q89", "Q90",
               "Q91", "Q92", "Q93", "Q94", "Q95", "Q96", "Q97", "Q98", "Q99", "Q100"
    };
    char ans1[100]={'b', 'd', 'c', 'b', 'b', 'd', 'a', 'd', 'b', 'd', 'b', 'a', 'd', 'd', 'a', 'c', 'c',
         'a', 'b', 'a', 'c', 'a', 'd', 'b', 'd', 'b', 'a', 'c', 'a', 'a', 'b', 'b', 'a', 'c', 'd', 'd',
          'c', 'd', 'b', 'a', 'c', 'b', 'd', 'd', 'c', 'd', 'd', 'a', 'b', 'a', 'b', 'a', 'c', 'c', 'a',
           'b', 'b', 'a', 'c', 'c', 'c', 'a', 'a', 'a', 'c', 'd', 'd', 'c', 'd', 'c', 'b', 'd', 'd', 'b',
            'a', 'a', 'c', 'd', 'c', 'a', 'a', 'c', 'b', 'c', 'd', 'c', 'a', 'c', 'a', 'c', 'b', 'd', 'b',
             'd', 'a', 'c', 'a', 'd', 'b', 'b'
    };
    char ans2[100]={'b', 'd', 'c', 'b', 'b', 'd', 'a', 'd', 'b', 'd', 'b', 'a', 'd', 'd', 'a', 'c', 'c',
         'a', 'b', 'a', 'c', 'a', 'd', 'b', 'd', 'b', 'a', 'c', 'a', 'a', 'b', 'a', 'c', 'd', 'c', 'a',
          'a', 'c', 'b', 'c', 'd', 'c', 'b', 'a', 'c', 'd', 'd', 'c', 'd', 'b', 'a', 'c', 'b', 'd', 'd',
           'c', 'd', 'd', 'a', 'b', 'a', 'b', 'a', 'c', 'c', 'a', 'b', 'b', 'a', 'c', 'c', 'c', 'a', 'a',
            'a', 'c', 'd', 'd', 'c', 'd', 'c', 'b', 'd', 'd', 'b', 'a', 'a', 'c', 'a', 'c', 'b', 'd', 'b',
             'd', 'a', 'c', 'a', 'd', 'b', 'b'
    };
    char ans3[100]={'b', 'd', 'c', 'b', 'b', 'd', 'a', 'd', 'b', 'd', 'b', 'a', 'd', 'd', 'a', 'c', 'c',
         'a', 'b', 'a', 'c', 'a', 'd', 'b', 'd', 'b', 'a', 'c', 'a', 'a', 'b', 'a', 'c', 'd', 'c', 'a',
          'a', 'c', 'b', 'c', 'd', 'c', 'b', 'a', 'c', 'd', 'd', 'c', 'd', 'b', 'a', 'c', 'b', 'd', 'd',
           'c', 'd', 'd', 'a', 'b', 'a', 'b', 'a', 'c', 'c', 'a', 'b', 'b', 'a', 'c', 'c', 'c', 'a', 'a',
            'a', 'c', 'd', 'd', 'c', 'd', 'c', 'b', 'd', 'd', 'b', 'a', 'a', 'c', 'a', 'c', 'b', 'd', 'b',
             'd', 'a', 'c', 'a', 'd', 'b', 'b'
    };
    int marks=0,n,sub;
    char ans[100];
    cout <<"\t\t\t\t\t\t\t\tWELCOME"<<"\n\t\t\t\t\t\t\t   QUIZ TIME";
    cout <<"\nTotal Question in the question bank: 100";
    cout <<"\nSpecify the number of question to attempt: ";
    cin>>n;
    cout <<"Select the subject: ";
    cout <<"\nMaths .......1";
    cout <<"\nPhysics......2";
    cout <<"\nChemistry....3";
    cout <<"\nplz conferm your selection: ";
    cin>>sub;
    if(sub==1){
        cout << "\n--- MATHS QUIZ ---\n";
        for(int i=0;i<n;i++){
            cout << "\n" << Question1[i] << "\n";
            cout << "Enter your answer: ";
            cin >> ans[i];
            if(ans[i] == ans1[i] || ans[i] == toupper(ans1[i])) {
                marks += 4;
                cout << "Correct!" << endl;}
            else {
                marks--;
                cout << "Wrong! Correct answer: " << ans1[i] << endl;}
        }
        cout << "\n==== FINAL REPORT CARD ====" << endl;
        cout << "Your Total Score: " << marks << " /"<<4*n << endl;
    }
    else if(sub==2){
         cout << "\n--- PHYSICS QUIZ ---\n";
        for(int i=0;i<n;i++){
            cout << "\n" << Question2[i] << "\n";
            cout << "Enter your answer: ";
            cin >> ans[i];
            if(ans[i] == ans2[i] || ans[i] == toupper(ans2[i])) {
                marks += 4;
                cout << "Correct!" << endl;}
            else {
                marks--;
                cout << "Wrong! Correct answer: " << ans2[i] << endl;}
        }
        cout << "\n==== FINAL REPORT CARD ====" << endl;
        cout << "Your Total Score: " << marks << " /"<<4*n << endl;
    }
    else if(sub==3){
         cout << "\n--- CHEMISTRY QUIZ ---\n";
        for(int i=0;i<n;i++){
            cout << "\n" << Question3[i] << "\n";
            cout << "Enter your answer: ";
            cin >> ans[i];
            if(ans[i] == ans3[i] || ans[i] == toupper(ans3[i])) {
                marks += 4;
                cout << "Correct!" << endl;}
            else {
                marks--;
                cout << "Wrong! Correct answer: " << ans3[i] << endl;}
        }
        cout << "\n==== FINAL REPORT CARD ====" << endl;
        cout << "Your Total Score: " << marks << " /"<<4*n << endl;
    }
    else
    cout<<"invalid selection";
return 0;
}