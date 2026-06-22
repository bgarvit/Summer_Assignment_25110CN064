#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int rnum,gus,atm=0;
    char playagain;
    cout <<"                  WElCOOOOOOOOOOOOOOOOOOOOOOOOOOOME"<<endl;
    cout <<"                     To The Neverending Game"<<endl;
    do{
        rnum=rand()%50+1;
        cout <<"                              PLAYER"<<endl;
        cout <<"         It Will Only End When You Guess My Hidden Number..."<<endl;
    atm=0;
        do{
            cout <<endl<<"              .....What Do You Think My Number Is..... "<<endl;
            cout <<"                    .....Take A Guess ";
            cin>>gus;
             atm++;
            if (cin.fail()){
                cout <<"Don't You Know Difference Between Number And All Ohhhh hhoooo..."<<endl<<"Make The Input Again...";
                cin.clear();
                cin.ignore(1000, '\n');
                atm--;
                continue;
            }
        if(gus>rnum){
            cout <<endl<<"Do You Think I Would Choose Such A High Number....."<<endl<<"haaaha haaa haha TRY AGAIN lad....."<<endl;}
        else if(gus<rnum){
            cout <<endl<<"haaa haaaa You Think I Am Too Dumb To Pick Such A Small Number...."<<endl<<"hmmm hahahaaaha TRY AGAIN boyy..."<<endl;}
        else if(gus==rnum&&atm==1){
            cout <<endl<<"I Think You know Me Well Enough..."<<endl<<"Hope I Never Meet You Again...."<<endl<<"You Took "<<atm<<" Attempts"<<endl;}
        else if(gus==rnum&&atm<=3&&atm>1){
            cout <<endl<<"You Figured It Out Fast"<<endl<<"GET OUT Of HERE..."<<endl<<"you are no fun hmmmm"<<endl<<"You Took "<<atm<<" Attempts"<<endl;}
        else if(gus==rnum&&atm<=7){
            cout <<endl<<"Average Average I Like People Like You"<<endl<<"You Took "<<atm<<" Attempts"<<endl;}
        else if(gus==rnum){
            cout <<endl<<"AAAAAhhhh Just On Edge"<<endl<<"A Single Wrong Guess Could Have Trapped You Here"<<endl<<"I Will MEEEEEETT YOUUUU Agaaaain "<<endl<<"hahahahahhaaaaaaaahahahaaaaa ahahahahhaahahah hahahahahhahah hahahah "<<endl;}
    }
        while(gus!=rnum&&atm<8);
        if(gus!=rnum){
            cout <<endl<<"Oh hooooo You Have Used All Of Your Attempts..."<<endl;
            cout <<endl<<"haaa haa NOW YOU ARE TRAPPED HERE FOREVER... HAAHA HAHAA HAHAHAAAHA HAHAHAAAHA HAAHAAHAAAAAHAA"<<endl;}
            cout <<         "Would You Like To Play This Game Again? "<<endl<<"        (Y/N): ";
            cin >> playagain;}
    while (playagain == 'Y' || playagain == 'y');
return 0;
}