#include<iostream>
#include<vector>
#include<iomanip>
#include<ncurses.h>
#include<stdio.h>
using namespace std;
int x=0;
char value[]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
vector<int> usr;
vector<int> pc;
int check_win=0;
void Instruction()
{
    cout<<setw(7)<<"POS:1"<<setw(5)<<" | "<<setw(5)<<"POS:2"<<setw(5)<<" | "<<setw(5)<<"POSS:3"<<endl
        <<"------------------------------"<<endl
        <<setw(7)<<"POS:4"<<setw(5)<<" | "<<setw(5)<<"POS:5"<<setw(5)<<" | "<<setw(5)<<"POS:6"<<endl
        <<"------------------------------"<<endl
        <<setw(7)<<"POS:7"<<setw(5)<<" | "<<setw(5)<<"POS:8"<<setw(5)<<" | "<<setw(5)<<"POS:9"<<endl;
    cout<<endl<<endl;
    cout<<"HERE YOU HAVE TO GIVE THE POSITION VALUE IN CHOICE....."<<endl<<endl;
}
void board()
{
    system("clear");
    Instruction();
    cout<<setw(7)<<value[0]<<setw(5)<<" | "<<setw(5)<<value[1]<<setw(5)<<" | "<<setw(5)<<value[2]<<endl
        <<"------------------------------"<<endl
        <<setw(7)<<value[3]<<setw(5)<<" | "<<setw(5)<<value[4]<<setw(5)<<" | "<<setw(5)<<value[5]<<endl
        <<"------------------------------"<<endl
        <<setw(7)<<value[6]<<setw(5)<<" | "<<setw(5)<<value[7]<<setw(5)<<" | "<<setw(5)<<value[8]<<endl;
}
/*int chance_at1(){
    int val;
    if(value[0]=='x'&& value[1]==' '&&value[2]==' '&&value[3]==' '&&value[4]==' '&&value[5]==' '&&value[6]==' '&&value[7]==' '&&value[8]==' '){
        val=9;
        return val;
    }
    if(value[0]=='x'&& value[1]==' '&&value[2]==' '&&value[3]==' '&&value[4]==' '&&value[5]==' '&&value[6]==' '&&value[7]==' '&&value[8]=='O'){

    }
}*/
int chance_at1(){
    int x;
    if(usr[0]==1){
        x=9;                                        //For Index 1
    }
    /*------------------------------------------------------------------------------------------------*/
    if(usr[0]==1&&usr[1]==2){
        x=3;                                        //For Index 1 Then 2
    }
    if(usr[0]==1&&usr[1]==2&&usr[2]==4){
        x=6;                                        //For Index 1 Then 2 then 4 Then System Win
    }
    if(usr[0]==1&&usr[1]==2&&usr[2]==5){
        x=6;                                        //For Index 1 Then 2 Then 5 Then System Win
    }
    if(usr[0]==1&&usr[1]==2&&usr[2]==6){
        x=7;                                        //For Index 1 Then 2 Then 6
    }
    if(usr[0]==1&&usr[1]==2&&usr[2]==6&&usr[3]==4){
        x=5;                                        //For Index 1 Then 2 Then 6 Then System win
    }
    if(usr[0]==1&&usr[1]==2&&usr[2]==6&&usr[3]==5){
        x=8;                                        //For Index 1 Then 2 Then 6 Then System win
    }
    if(usr[0]==1&&usr[1]==2&&usr[2]==6&&usr[3]==8){
        x=5;                                        //For Index 1 Then 2 Then 6 Then System win
    }
    if(usr[0]==1&&usr[1]==2&&usr[2]==7){
        x=6;                                        //For Index 1 Then 2 Then 7 Then System Win
    }
    if(usr[0]==1&&usr[1]==2&&usr[2]==8){
        x=6;                                        //For Index 1 Then 2 Then 8 Then System Win
    }
    /*------------------------------------------------------------------------------------------------*/
    if(usr[0]==1&&usr[1]==3){
        x=2;                                        //For Index 1 Then 3
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==4){
        x=7;                                        //For Index 1 Then 3 Then 4
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==4&&usr[3]==5){
        x=8;                                        //For Index 1 Then 3 Then 4 Then 5 Then System Win
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==4&&usr[3]==6){
        x=8;                                        //For Index 1 Then 3 Then 4 Then 6 Then System Win
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==4&&usr[3]==8){
        x=6;                                        //For Index 1 Then 3 Then 4 Then 8 Then Tie
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==5){
        x=7;                                        //For Index 1 Then 3 Then 5
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==5&&usr[3]==4){
        x=8;                                        //For Index 1 Then 3 Then 5 Then 4 Then System Win
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==5&&usr[3]==6){
        x=8;                                        //For Index 1 Then 3 Then 5 Then 6 Then System Win
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==5&&usr[3]==8){
        x=4;                                        //For Index 1 Then 3 Then 5 Then 8 Then Match Tie
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==6){
        x=5;                                        //For Index 1 Then 3 Then 6
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==6&&usr[3]==4){
        x=8;                                        //For Index 1 Then 3 Then 6 Then 4 Then System Win
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==6&&usr[3]==7){
        x=8;                                        //For Index 1 Then 3 Then 6 Then 7 Then System Win
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==6&&usr[3]==8){
        x=7;                                        //For Index 1 Then 3 Then 6 Then 8 Then Tie
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==7){
        x=4;                                        //For Index 1 Then 3 Then 7
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==7&&usr[3]==5){
        x=6;                                        //For Index 1 Then 3 Then 7 Then 5 Then User Win
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==7&&usr[3]==6){
        x=5;                                        //For Index 1 Then 3 Then 7 Then 6 Then Tie
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==7&&usr[3]==8){
        x=5;                                        //For Index 1 Then 3 Then 7 Then 8 Then Tie
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==8){
        x=5;                                        //For Index 1 Then 3 Then 8
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==8&&usr[3]==4){
        x=7;                                        //For Index 1 Then 3 Then 8 Then 4 Then Tie
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==8&&usr[3]==6){
        x=7;                                        //For Index 1 Then 3 Then 8 Then 6 Then Tie
    }
    if(usr[0]==1&&usr[1]==3&&usr[2]==8&&usr[3]==7){
        x=4;                                        //For Index 1 Then 3 Then 8 Then 7 Then Tie
    }
    /*------------------------------------------------------------------------------------------------*/
    if(usr[0]==1&&usr[1]==4){
        x=7;                                        //For Index 1 Then 4
    }
    if(usr[0]==1&&usr[1]==4&&usr[2]==2){
        x=8;                                        //For Index 1 Then 4 Then 2 Then System Win
    }
    if(usr[0]==1&&usr[1]==4&&usr[2]==3){
        x=8;                                        //For Index 1 Then 4 Then 3 Then System Win
    }
    if(usr[0]==1&&usr[1]==4&&usr[2]==5){
        x=8;                                        //For Index 1 Then 4 Then 5 Then System Win
    }
    if(usr[0]==1&&usr[1]==4&&usr[2]==6){
        x=8;                                        //For Index 1 Then 4 Then 6 Then System Win
    }
    if(usr[0]==1&&usr[1]==4&&usr[2]==8){
        x=3;                                        //For Index 1 Then 4 Then 8 Then One More
    }
    if(usr[0]==1&&usr[1]==4&&usr[2]==8&&usr[3]==2){
        x=5;                                        //For Index 1 Then 4 Then 8 Then 2 Then System Win
    }
    if(usr[0]==1&&usr[1]==4&&usr[2]==8&&usr[3]==5){
        x=6;                                        //For Index 1 Then 4 Then 8 Then 5 Then System Win
    }
    if(usr[0]==1&&usr[1]==4&&usr[2]==8&&usr[3]==6){
        x=5;                                        //For Index 1 Then 4 Then 8 Then 6 Then System Win
    }
    /*------------------------------------------------------------------------------------------------*/
    if(usr[0]==1&&usr[1]==5){
        x=3;                                        //For Index 1 Then 5
    }
    if(usr[0]==1&&usr[1]==5&&usr[2]==2){
        x=6;                                        //For Index 1 Then 5 Then 2 Then System Win
    }
    if(usr[0]==1&&usr[1]==5&&usr[2]==4){
        x=6;                                        //For Index 1 Then 5 Then 4 Then System Win
    }
    if(usr[0]==1&&usr[1]==5&&usr[2]==7){
        x=6;                                        //For Index 1 Then 5 Then 7 Then System Win
    }
    if(usr[0]==1&&usr[1]==5&&usr[2]==8){
        x=6;                                        //For Index 1 Then 5 Then 8 Then System Win
    }
    if(usr[0]==1&&usr[1]==5&&usr[2]==6){
        x=4;                                        //For Index 1 Then 5 Then 6 Then More---
    }
    if(usr[0]==1&&usr[1]==5&&usr[2]==6&&usr[3]==2){
        x=8;                                        //For Index 1 Then 5 Then 6 Then 2 Then Tie
    }
    if(usr[0]==1&&usr[1]==5&&usr[2]==6&&usr[3]==7){
        x=2;                                        //For Index 1 Then 5 Then 6 Then 7 Then Tie
    }
    if(usr[0]==1&&usr[1]==5&&usr[2]==6&&usr[3]==8){
        x=2;                                        //For Index 1 Then 5 Then 6 Then 8 Then Tie
    }
    /*------------------------------------------------------------------------------------------------*/
    if(usr[0]==1&&usr[1]==6){
        x=7;                                        //For Index 1 Then 6
    }
    if(usr[0]==1&&usr[1]==6&&usr[2]==2){
        x=8;                                        //For Index 1 Then 6 Then 2 Then System Win
    }
    if(usr[0]==1&&usr[1]==6&&usr[2]==3){
        x=8;                                        //For Index 1 Then 6 Then 3 Then System Win
    }
    if(usr[0]==1&&usr[1]==6&&usr[2]==4){
        x=8;                                        //For Index 1 Then 6 Then 4 Then System Win
    }
    if(usr[0]==1&&usr[1]==6&&usr[2]==5){
        x=8;                                        //For Index 1 Then 6 Then 5 Then System Win
    }
    if(usr[0]==1&&usr[1]==6&&usr[2]==8){
        x=3;                                        //For Index 1 Then 6 Then 8 Then More------
    }
    if(usr[0]==1&&usr[1]==6&&usr[2]==8&&usr[3]==1){
        x=5;                                        //For Index 1 Then 6 Then 8 Then 1 Then System Win
    }
    if(usr[0]==1&&usr[1]==6&&usr[2]==8&&usr[3]==4){
        x=5;                                        //For Index 1 Then 6 Then 8 Then 4 Then System Win
    }
    if(usr[0]==1&&usr[1]==6&&usr[2]==8&&usr[3]==5){
        x=4;                                        //For Index 1 Then 6 Then 8 Then 5 Then User Win
    }
    /*------------------------------------------------------------------------------------------------*/
    if(usr[0]==1&&usr[1]==7){
        x=4;                                        //For Index 1 Then 7
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==2){
        x=3;                                        //For Index 1 Then 7 Then 2 Then more--
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==2&&usr[3]==5){
        x=6;                                        //For Index 1 Then 7 Then 2 Then 5 Then System Win
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==2&&usr[3]==6){
        x=5;                                        //For Index 1 Then 7 Then 2 Then 6 Then Match Tie
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==2&&usr[3]==8){
        x=6;                                        //For Index 1 Then 7 Then 2 Then 8 Then System Win
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==3){
        x=5;                                        //For Index 1 Then 7 Then 3 Then More--
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==3&&usr[3]==2){
        x=8;                                        //For Index 1 Then 7 Then 3 Then 2 Then User Win
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==3&&usr[3]==6){
        x=2;                                        //For Index 1 Then 7 Then 3 Then 6 Then Match Tie
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==3&&usr[3]==8){
        x=6;                                        //For Index 1 Then 7 Then 3 Then 8 Then System Win
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==5){
        x=3;                                        //For Index 1 Then 7 Then 5 Then More--
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==5&&usr[3]==2){
        x=6;                                        //For Index 1 Then 7 Then 5 Then 2 Then System Win
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==5&&usr[3]==6){
        x=8;                                        //For Index 1 Then 7 Then 5 Then 6 Then Match Tie
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==5&&usr[3]==8){
        x=6;                                        //For Index 1 Then 7 Then 5 Then 8 Then System WIn
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==6){
        x=2;                                        //For Index 1 Then 7 Then 6 Then More--
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==6&&usr[3]==3){
        x=5;                                        //For Index 1 Then 7 Then 6 Then 3 Then Match Tie
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==6&&usr[3]==5){
        x=3;                                        //For Index 1 Then 7 Then 6 Then 5 Then Match Tie
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==6&&usr[3]==8){
        x=5;                                        //For Index 1 Then 7 Then 6 Then 8 Then Match Tie
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==8){
        x=6;                                        //For Index 1 Then 7 Then 8 Then More--
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==8&&usr[3]==2){
        x=6;                                        //For Index 1 Then 7 Then 6 Then 2 Then System Win
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==8&&usr[3]==5){
        x=6;                                        //For Index 1 Then 7 Then 6 Then 5 Then System Win
    }
    if(usr[0]==1&&usr[1]==7&&usr[2]==8&&usr[3]==6){
        x=2;                                        //For Index 1 Then 7 Then 6 Then 6 Then Match Tie
    }
    /*------------------------------------------------------------------------------------------------*/
    if(usr[0]==1&&usr[1]==8){
        x=3;                                        //For Index 1 Then 8
    }
    if(usr[0]==1&&usr[1]==8&&usr[2]==2){
        x=6;                                        //For Index 1 Then 8 Then 2 Then system Win
    }
    if(usr[0]==1&&usr[1]==8&&usr[2]==4){
        x=6;                                        //For Index 1 Then 8 Then 4 Then System Win
    }
    if(usr[0]==1&&usr[1]==8&&usr[2]==5){
        x=6;                                        //For Index 1 Then 8 Then 5 Then System Win
    }
    if(usr[0]==1&&usr[1]==8&&usr[2]==7){
        x=6;                                        //For Index 1 Then 8 Then 7 Then System Win
    }
    if(usr[0]==1&&usr[1]==8&&usr[2]==6){
        x=7;                                        //For Index 1 Then 8 Then 6 Then More--
    }
    if(usr[0]==1&&usr[1]==8&&usr[2]==6&&usr[3]==2){
        x=5;                                        //For Index 1 Then 8 Then 6 Then 2 Then System Win
    }
    if(usr[0]==1&&usr[1]==8&&usr[2]==6&&usr[3]==4){
        x=5;                                        //For Index 1 Then 8 Then 6 Then 4 Then System Win
    }
    if(usr[0]==1&&usr[1]==8&&usr[2]==6&&usr[3]==5){
        x=7;                                        //For Index 1 Then 8 Then 6 Then 5 Then User Win
    }
    /*------------------------------------------------------------------------------------------------*/
    return x;
}
int chance_at2(){
    int f;
    if(usr[0]==2){
        f=3;                                                                //Index 0 is started with position 2
    }
    /*-------------------------------------------------------------------------------------------------------------------------------*/
    if(usr[0]==2&&usr[1]==1){
        f=9;                                                                //Index 0 is started with position 2 Then 1
    }
    if(usr[0]==2&&usr[1]==1&&usr[2]==4){
        f=6;                                                                //Index 0 is started with position 2 Then 1 Then 4 Then System Win
    }
    if(usr[0]==2&&usr[1]==1&&usr[2]==5){
        f=6;                                                                //Index 0 is started with position 2 Then 1 Then 5 Then System Win
    }
    if(usr[0]==2&&usr[1]==1&&usr[2]==6){
        f=7;                                                                //Index 0 is started with position 2 Then 1 Then 6 Then More--
    }
    if(usr[0]==2&&usr[1]==1&&usr[2]==6&&usr[3]==4){
        f=5;                                                                //Index 0 is started with position 2 Then 1 Then 6 Then 4 Then System Win
    }
    if(usr[0]==2&&usr[1]==1&&usr[2]==6&&usr[3]==5){
        f=8;                                                                //Index 0 is started with position 2 Then 1 Then 6 Then 5 Then System Win
    }
    if(usr[0]==2&&usr[1]==1&&usr[2]==6&&usr[3]==8){
        f=5;                                                                //Index 0 is started with position 2 Then 1 Then 6 Then 8 Then System Win
    }
    if(usr[0]==2&&usr[1]==1&&usr[2]==7){
        f=6;                                                                //Index 0 is started with position 2 Then 1 Then 7 Then System Win
    }
    if(usr[0]==2&&usr[1]==1&&usr[2]==8){
        f=6;                                                                //Index 0 is started with position 2 Then 1 Then 8 Then System Win
    }
    /*-------------------------------------------------------------------------------------------------------------------------------*/
    if(usr[0]==2&&usr[1]==4){
        f=9;                                                                //Index 0 is started with position 2 Then 4
    }
    if(usr[0]==2&&usr[1]==4&&usr[2]==1){
        f=6;                                                                //Index 0 is started with position 2 Then 4 Then 1 Then System Win
    }
    if(usr[0]==2&&usr[1]==4&&usr[2]==5){
        f=6;                                                                //Index 0 is started with position 2 Then 4 Then 5 Then System Win
    }
    if(usr[0]==2&&usr[1]==4&&usr[2]==6){
        f=5;                                                                //Index 0 is started with position 2 Then 4 Then 6 Then More--
    }
    if(usr[0]==2&&usr[1]==4&&usr[2]==6&&usr[3]==1){
        f=7;                                                                //Index 0 is started with position 2 Then 4 Then 6 Then 1 Then System Win
    }
    if(usr[0]==2&&usr[1]==4&&usr[2]==6&&usr[3]==7){
        f=1;                                                                //Index 0 is started with position 2 Then 4 Then 6 Then 7 Then System Win
    }
    if(usr[0]==2&&usr[1]==4&&usr[2]==6&&usr[3]==8){
        f=1;                                                                //Index 0 is started with position 2 Then 4 Then 6 Then 8 Then System Win
    }
    if(usr[0]==2&&usr[1]==4&&usr[2]==7){
        f=6;                                                                //Index 0 is started with position 2 Then 4 Then 7 Then System Win
    }
    if(usr[0]==2&&usr[1]==4&&usr[2]==8){
        f=6;                                                                //Index 0 is started with position 2 Then 4 Then 8 Then System Win
    }
    /*-------------------------------------------------------------------------------------------------------------------------------*/
    if(usr[0]==2&&usr[1]==5){
        f=8;                                                                //Index 0 is started with position 2 Then 5
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==1){
        f=9;                                                                //Index 0 is started with position 2 Then 5 Then 1 Then More--
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==1&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 2 Then 5 Then 1 Then 4 Then System Win
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==1&&usr[3]==6){
        f=7;                                                                //Index 0 is started with position 2 Then 5 Then 1 Then 6 Then System Win
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==1&&usr[3]==7){
        f=6;                                                                //Index 0 is started with position 2 Then 5 Then 1 Then 7 Then System Win
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==4){
        f=9;                                                                //Index 0 is started with position 2 Then 5 Then 4 Then More--
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==4&&usr[3]==1){
        f=6;                                                                //Index 0 is started with position 2 Then 5 Then 4 Then 1 System Win
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==4&&usr[3]==6){
        f=7;                                                                //Index 0 is started with position 2 Then 5 Then 4 Then 6 User Win
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==4&&usr[3]==7){
        f=6;                                                                //Index 0 is started with position 2 Then 5 Then 4 Then 7 Then System Win
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==6){
        f=4;                                                                //Index 0 is started with position 2 Then 5 Then 6 Then More--
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==6&&usr[3]==1){
        f=9;                                                                //Index 0 is started with position 2 Then 5 Then 6 Then 1 Then Tie
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==6&&usr[3]==7){
        f=1;                                                                //Index 0 is started with position 2 Then 5 Then 6 Then 7 Then Tie
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==6&&usr[3]==9){
        f=1;                                                                //Index 0 is started with position 2 Then 5 Then 6 Then 9 Then Tie
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==7){
        f=9;                                                                //Index 0 is started with position 2 Then 5 Then 7 Then More--
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==7&&usr[3]==1){
        f=6;                                                                //Index 0 is started with position 2 Then 5 Then 7 Then 1 Then System Win
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==7&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 2 Then 5 Then 7 Then 4 Then System Win
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==7&&usr[3]==6){
        f=4;                                                                //Index 0 is started with position 2 Then 5 Then 7 Then 9 Then Tie
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==9){
        f=1;                                                                //Index 0 is started with position 2 Then 5 Then 9 Then More--
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==9&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 2 Then 5 Then 9 Then 4 Then Tie
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==9&&usr[3]==6){
        f=4;                                                                //Index 0 is started with position 2 Then 5 Then 9 Then 6 Then Tie
    }
    if(usr[0]==2&&usr[1]==5&&usr[2]==9&&usr[3]==7){
        f=4;                                                                //Index 0 is started with position 2 Then 5 Then 9 Then 7 Then Tie
    }
    /*-------------------------------------------------------------------------------------------------------------------------------*/
    if(usr[0]==2&&usr[1]==6){
        f=5;                                                                //Index 0 is started with position 2 Then 6 
    }
    if(usr[0]==2&&usr[1]==6&&usr[2]==1){
        f=7;                                                                //Index 0 is started with position 2 Then 6 Then 1 Then SYstem Win
    }
    if(usr[0]==2&&usr[1]==6&&usr[2]==4){
        f=7;                                                                //Index 0 is started with position 2 Then 6 Then 4 Then System Win
    }
    if(usr[0]==2&&usr[1]==6&&usr[2]==7){
        f=4;                                                                //Index 0 is started with position 2 Then 6 Then 7 Then More--
    }
    if(usr[0]==2&&usr[1]==6&&usr[2]==7&&usr[3]==1){
        f=9;                                                                //Index 0 is started with position 2 Then 6 Then 7 Then 1 Then Tie
    }
    if(usr[0]==2&&usr[1]==6&&usr[2]==7&&usr[3]==8){
        f=9;                                                                //Index 0 is started with position 2 Then 6 Then 7 Then 8 Then Tie
    }
    if(usr[0]==2&&usr[1]==6&&usr[2]==7&&usr[3]==9){
        f=8;                                                                //Index 0 is started with position 2 Then 6 Then 7 Then 9 Then Tie
    }
    if(usr[0]==2&&usr[1]==6&&usr[2]==8){
        f=7;                                                                //Index 0 is started with position 2 Then 6 Then 8 Then System Win
    }
    if(usr[0]==2&&usr[1]==6&&usr[2]==9){
        f=7;                                                                //Index 0 is started with position 2 Then 6 Then 9 Then System Win
    }
    /*-------------------------------------------------------------------------------------------------------------------------------*/
    if(usr[0]==2&&usr[1]==7){
        f=5;                                                                //Index 0 is started with position 2 Then 7
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==1){
        f=4;                                                                //Index 0 is started with position 2 Then 7 Then 1 Then More--
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==1&&usr[3]==6){
        f=9;                                                                //Index 0 is started with position 2 Then 7 Then 1 Then 6 Then Tie
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==1&&usr[3]==8){
        f=6;                                                                //Index 0 is started with position 2 Then 7 Then 1 Then 8 Then System Win
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==1&&usr[3]==9){
        f=6;                                                                //Index 0 is started with position 2 Then 7 Then 1 Then 9 Then System Win
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==4){
        f=1;                                                                //Index 0 is started with position 2 Then 7 Then 4 Then More--
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==4&&usr[3]==6){
        f=9;                                                                //Index 0 is started with position 2 Then 7 Then 4 Then 6 Then System Win
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==4&&usr[3]==8){
        f=9;                                                                //Index 0 is started with position 2 Then 7 Then 4 Then 8 Then System Win
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==4&&usr[3]==9){
        f=8;                                                                //Index 0 is started with position 2 Then 7 Then 4 Then 9 Then Tie
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==6){
        f=9;                                                                //Index 0 is started with position 2 Then 7 Then 6 Then More--
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==6&&usr[3]==1){
        f=4;                                                                //Index 0 is started with position 2 Then 7 Then 6 Then 1 Then Tie
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==6&&usr[3]==4){
        f=1;                                                                //Index 0 is started with position 2 Then 7 Then 6 Then 4 Then System Win.
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==6&&usr[3]==8){
        f=1;                                                                //Index 0 is started with position 2 Then 7 Then 6 Then 8 Then System Win.
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==8){
        f=9;                                                                //Index 0 is started with position 2 Then 7 Then 8 Then More--
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==8&&usr[3]==1){
        f=6;                                                                //Index 0 is started with position 2 Then 7 Then 8 Then 1 Then System Win.
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==8&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 2 Then 7 Then 8 Then 4 Then System Win.
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==8&&usr[3]==6){
        f=1;                                                                //Index 0 is started with position 2 Then 7 Then 8 Then 6 Then System Win.
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==9){
        f=4;                                                                //Index 0 is started with position 2 Then 7 Then 9 Then More--            
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==9&&usr[3]==1){
        f=4;                                                                //Index 0 is started with position 2 Then 7 Then 9 Then 1 Then Tie.
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==9&&usr[3]==4){
        f=1;                                                                //Index 0 is started with position 2 Then 7 Then 9 Then 4 Then Tie.
    }
    if(usr[0]==2&&usr[1]==7&&usr[2]==9&&usr[3]==6){
        f=1;                                                                //Index 0 is started with position 2 Then 7 Then 9 Then 6 Then Tie.
    }
    /*-------------------------------------------------------------------------------------------------------------------------------*/
    if(usr[0]==2&&usr[1]==8){
        f=5;                                                                //Index 0 is started with position 2 Then 8 
    }
    if(usr[0]==2&&usr[1]==8&&usr[2]==1){
        f=7;                                                                //Index 0 is started with position 2 Then 8 Then 1 Then System Win.
    }
    if(usr[0]==2&&usr[1]==8&&usr[2]==4){
        f=7;                                                                //Index 0 is started with position 2 Then 8 Then 4 Then System Win.
    }
    if(usr[0]==2&&usr[1]==8&&usr[2]==6){
        f=7;                                                                //Index 0 is started with position 2 Then 8 Then 6 Then System Win.
    }
    if(usr[0]==2&&usr[1]==8&&usr[2]==7){
        f=9;                                                                //Index 0 is started with position 2 Then 8 Then 7 Then More--
    }
    if(usr[0]==2&&usr[1]==8&&usr[2]==7&&usr[3]==1){
        f=6;                                                                //Index 0 is started with position 2 Then 8 Then 7 Then 1 Then System Win.
    }
    if(usr[0]==2&&usr[1]==8&&usr[2]==7&&usr[3]==4){
        f=1;                                                                //Index 0 is started with position 2 Then 8 Then 7 Then 4 Then System Wun.
    }
    if(usr[0]==2&&usr[1]==8&&usr[2]==7&&usr[3]==6){
        f=1;                                                                //Index 0 is started with position 2 Then 8 Then 7 Then 6 Then System Win.
    }
    if(usr[0]==2&&usr[1]==8&&usr[2]==9){
        f=7;                                                                //Index 0 is started with position 2 Then 8 Then 9 Then System Win.
    }
    /*-------------------------------------------------------------------------------------------------------------------------------*/
    if(usr[0]==2&&usr[1]==9){
        f=7;                                                                //Index 0 is started with position 2 Then 9
    }
    if(usr[0]==2&&usr[1]==9&&usr[2]==1){
        f=5;                                                                //Index 0 is started with position 2 Then 9 Then 1 And system Win
    }
    if(usr[0]==2&&usr[1]==9&&usr[2]==4){
        f=5;                                                                //Index 0 is started with position 2 Then 9 Then 4 And System Win
    }
    if(usr[0]==2&&usr[1]==9&&usr[2]==5){
        f=8;                                                                //Index 0 is started with position 2 Then 9 Then 5 And More
    }
    if(usr[0]==2&&usr[1]==9&&usr[2]==5&&usr[3]==1){
        f=6;                                                                //Index 0 is started with position 2 Then 9 Then 5 Then 1 And User Win.
    }
    if(usr[0]==2&&usr[1]==9&&usr[2]==5&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 2 Then 9 Then 5 Then 4 And User Win.
    }
    if(usr[0]==2&&usr[1]==9&&usr[2]==5&&usr[3]==6){
        f=4;                                                                //Index 0 is started with position 2 Then 9 Then 5 Then 6 And User Win.
    }
    if(usr[0]==2&&usr[1]==9&&usr[2]==6){
        f=5;                                                                //Index 0 is started with position 2 Then 9 Then 6 And System Win.
    }
    if(usr[0]==2&&usr[1]==9&&usr[2]==8){
        f=5;                                                                //Index 0 is started with position 2 Then 9 Then 8 And System Win.
    }
    /*-------------------------------------------------------------------------------------------------------------------------------*/
    return f;
}
int chance_at3(){
    int f;
    if(usr[0]==3){
        f=5;                                                                //Index 0 is started with position 3
    }
    if(usr[0]==3&&usr[1]==1){
        f=2;                                                                //Index 0 is started with position 3 Then 1 More--
    }
    if(usr[0]==3&&usr[1]==1&&usr[2]==4){
        f=8;                                                                //Index 0 is started with position 3 Then 1 Then 4 Then System Win.
    }
    if(usr[0]==3&&usr[1]==1&&usr[2]==6){
        f=8;                                                                //Index 0 is started with position 3 Then 1 Then 6 Then System Win.
    }
    if(usr[0]==3&&usr[1]==1&&usr[2]==7){
        f=8;                                                                //Index 0 is started with position 3 Then 1 Then 7 Then System Win.
    }
    if(usr[0]==3&&usr[1]==1&&usr[2]==8){
        f=6;                                                                //Index 0 is started with position 3 Then 1 Then 8 Then More--
    }
    if(usr[0]==3&&usr[1]==1&&usr[2]==8&&usr[3]==4){
        f=7;                                                                //Index 0 is started with position 3 Then 1 Then 8 Then 4 Then Tie
    }
    if(usr[0]==3&&usr[1]==1&&usr[2]==8&&usr[3]==7){
        f=4;                                                                //Index 0 is started with position 3 Then 1 Then 8 Then 7 Then System Win.
    }
    if(usr[0]==3&&usr[1]==1&&usr[2]==8&&usr[3]==9){
        f=4;                                                                //Index 0 is started with position 3 Then 1 Then 8 Then 9 Then System Win.
    }
    if(usr[0]==3&&usr[1]==1&&usr[2]==9){
        f=8;                                                                //Index 0 is started with position 3 Then 1 Then 9 Then System Win.
    }
    if(usr[0]==3&&usr[1]==2){
        f=1;                                                                //Index 0 is started with position 3 Then 2 Then More--
    }
    if(usr[0]==3&&usr[1]==2&&usr[2]==4){
        f=9;                                                                //Index 0 is started with position 3 Then 2 Then 4 Then System Win.
    }
    if(usr[0]==3&&usr[1]==2&&usr[2]==6){
        f=9;                                                                //Index 0 is started with position 3 Then 2 Then 6 Then System Win.
    }
    if(usr[0]==3&&usr[1]==2&&usr[2]==7){
        f=9;                                                                //Index 0 is started with position 3 Then 2 Then 7 Then System Win.
    }
    if(usr[0]==3&&usr[1]==2&&usr[2]==8){
        f=9;                                                                //Index 0 is started with position 3 Then 2 Then 8 Then System Win.
    }
    if(usr[0]==3&&usr[1]==2&&usr[2]==9){
        f=6;                                                                //Index 0 is started with position 3 Then 2 Then 9 Then More--
    }
    if(usr[0]==3&&usr[1]==2&&usr[2]==9&&usr[3]==4){
        f=8;                                                                //Index 0 is started with position 3 Then 2 Then 9 Then 4 And Tie.
    }
    if(usr[0]==3&&usr[1]==2&&usr[2]==9&&usr[3]==7){
        f=4;                                                                //Index 0 is started with position 3 Then 2 Then 9 Then 7 And SYstem WIn.
    }
    if(usr[0]==3&&usr[1]==2&&usr[2]==9&&usr[3]==8){
        f=4;                                                                //Index 0 is started with position 3 Then 2 Then 9 Then 8 And system Win.
    }
    if(usr[0]==3&&usr[1]==4){
        f=1;                                                                //Index 0 is started with position 3 Then 4 Then More--
    }
    if(usr[0]==3&&usr[1]==4&&usr[2]==2){
        f=9;                                                                //Index 0 is started with position 3 Then 4 Then 2 Then System Win.
    }
    if(usr[0]==3&&usr[1]==4&&usr[2]==6){
        f=9;                                                                //Index 0 is started with position 3 Then 4 Then 6 Then System Win.
    }
    if(usr[0]==3&&usr[1]==4&&usr[2]==7){
        f=9;                                                                //Index 0 is started with position 3 Then 4 Then 7 Then System Win.
    }
    if(usr[0]==3&&usr[1]==4&&usr[2]==8){
        f=9;                                                                //Index 0 is started with position 3 Then 4 Then 8 Then System win.
    }
    if(usr[0]==3&&usr[1]==4&&usr[2]==9){
        f=6;                                                                //Index 0 is started with position 3 Then 4 Then 9 Then More--
    }
    if(usr[0]==3&&usr[1]==4&&usr[2]==9&&usr[3]==2){
        f=8;                                                                //Index 0 is started with position 3 Then 4 Then 9 Then 2 Then Tie.
    }
    if(usr[0]==3&&usr[1]==4&&usr[2]==9&&usr[3]==7){
        f=8;                                                                //Index 0 is started with position 3 Then 4 Then 9 Then 7 Then Tie.
    }
    if(usr[0]==3&&usr[1]==4&&usr[2]==9&&usr[3]==8){
        f=7;                                                                //Index 0 is started with position 3 Then 4 Then 9 Then 8 Then Tie.
    }
    if(usr[0]==3&&usr[1]==6){
        f=9;                                                                //Index 0 is started with position 3 Then 6 Then More--
    }
    if(usr[0]==3&&usr[1]==6&&usr[2]==1){
        f=8;                                                                //Index 0 is started with position 3 Then 6 Then 1 Then More--
    }
    if(usr[0]==3&&usr[1]==6&&usr[2]==1&&usr[3]==2){
        f=7;                                                                //Index 0 is started with position 3 Then 6 Then 1 Then 2 Then User Win.
    }
    if(usr[0]==3&&usr[1]==6&&usr[2]==1&&usr[3]==4){
        f=7;                                                                //Index 0 is started with position 3 Then 6 Then 1 Then 4 Then System Win.
    }
    if(usr[0]==3&&usr[1]==6&&usr[2]==1&&usr[3]==7){
        f=2;                                                                //Index 0 is started with position 3 Then 6 Then 1 Then 7 Then System Win.
    }
    if(usr[0]==3&&usr[1]==6&&usr[2]==2){
        f=1;                                                                //Index 0 is started with position 3 Then 6 Then 2 Then System Win.
    }
    if(usr[0]==3&&usr[1]==6&&usr[2]==4){
        f=1;                                                                //Index 0 is started with position 3 Then 6 Then 4 Then System Win.
    }
    if(usr[0]==3&&usr[1]==6&&usr[2]==7){
        f=1;                                                                //Index 0 is started with position 3 Then 6 Then 7 Then System Win.
    }
    if(usr[0]==3&&usr[1]==6&&usr[2]==8){
        f=1;                                                                //Index 0 is started with position 3 Then 6 Then 8 Then System Win.
    }
    if(usr[0]==3&&usr[1]==7){
        f=2;                                                                //Index 0 is started with position 3 Then 7 Then More--
    }
    if(usr[0]==3&&usr[1]==7&&usr[2]==1){
        f=8;                                                                //Index 0 is started with position 3 Then 7 Then 1 Then System Win.
    }
    if(usr[0]==3&&usr[1]==7&&usr[2]==4){
        f=8;                                                                //Index 0 is started with position 3 Then 7 Then 4 Then System Win.
    }
    if(usr[0]==3&&usr[1]==7&&usr[2]==6){
        f=8;                                                                //Index 0 is started with position 3 Then 7 Then 6 Then System Win.
    }
    if(usr[0]==3&&usr[1]==7&&usr[2]==8){
        f=9;                                                                //Index 0 is started with position 3 Then 7 Then 8 Then More--
    }
    if(usr[0]==3&&usr[1]==7&&usr[2]==8&&usr[3]==1){
        f=4;                                                                //Index 0 is started with position 3 Then 7 Then 8 Then 1 Tie.
    }
    if(usr[0]==3&&usr[1]==7&&usr[2]==8&&usr[3]==4){
        f=1;                                                                //Index 0 is started with position 3 Then 7 Then 8 Then 4 Then System Win.
    }
    if(usr[0]==3&&usr[1]==7&&usr[2]==8&&usr[3]==6){
        f=1;                                                                //Index 0 is started with position 3 Then 7 Then 8 Then 6 Then System Win.
    }
    if(usr[0]==3&&usr[1]==7&&usr[2]==9){
        f=8;                                                                //Index 0 is started with position 3 Then 7 Then 9 Then System Win.
    }
    if(usr[0]==3&&usr[1]==8){
        f=9;                                                                //Index 0 is started with position 3 Then 8 Then More--
    }
    if(usr[0]==3&&usr[1]==8&&usr[2]==1){
        f=2;                                                                //Index 0 is started with position 3 Then 8 Then 1 Then More--
    }
    if(usr[0]==3&&usr[1]==8&&usr[2]==1&&usr[3]==4){
        f=7;                                                                //Index 0 is started with position 3 Then 8 Then 1 Then 4 Then Tie.
    }
    if(usr[0]==3&&usr[1]==8&&usr[2]==1&&usr[3]==6){
        f=4;                                                                //Index 0 is started with position 3 Then 8 Then 1 Then 6 Then Tie.
    }
    if(usr[0]==3&&usr[1]==8&&usr[2]==1&&usr[3]==7){
        f=4;                                                                //Index 0 is started with position 3 Then 8 Then 1 Then 7 Then Tie.
    }
    if(usr[0]==3&&usr[1]==8&&usr[2]==2){
        f=1;                                                                //Index 0 is started with position 3 Then 8 Then 2 Then System Win.
    }
    if(usr[0]==3&&usr[1]==8&&usr[2]==4){
        f=1;                                                                //Index 0 is started with position 3 Then 8 Then 4 Then System Win.
    }
    if(usr[0]==3&&usr[1]==8&&usr[2]==6){
        f=1;                                                                //Index 0 is started with position 3 Then 8 Then 6 Then System Win.
    }
    if(usr[0]==3&&usr[1]==8&&usr[2]==7){
        f=1;                                                                //Index 0 is started with position 3 Then 8 Then 7 Then System Win
    }
    if(usr[0]==3&&usr[1]==9){
        f=6;                                                                //Index 0 is started with position 3 Then 9 Then More--
    }
    if(usr[0]==3&&usr[1]==9&&usr[2]==1){
        f=4;                                                                //Index 0 is started with position 3 Then 9 Then 1 Then System Win.
    }
    if(usr[0]==3&&usr[1]==9&&usr[2]==2){
        f=4;                                                                //Index 0 is started with position 3 Then 9 Then 2 Then System Win.
    }
    if(usr[0]==3&&usr[1]==9&&usr[2]==4){
        f=2;                                                                //Index 0 is started with position 3 Then 9 Then 4 Then More--
    }
    if(usr[0]==3&&usr[1]==9&&usr[2]==4&&usr[3]==1){
        f=8;                                                                //Index 0 is started with position 3 Then 9 Then 4 Then 1 Then System Win.
    }
    if(usr[0]==3&&usr[1]==9&&usr[2]==4&&usr[3]==7){
        f=8;                                                                //Index 0 is started with position 3 Then 9 Then 4 Then 7 Then System Win.
    }
    if(usr[0]==3&&usr[1]==9&&usr[2]==4&&usr[3]==8){
        f=7;                                                                //Index 0 is started with position 3 Then 9 Then 4 Then 8 Then Tie.
    }
    if(usr[0]==3&&usr[1]==9&&usr[2]==7){
        f=4;                                                                //Index 0 is started with position 3 Then 9 Then 7 Then System Win.
    }
    if(usr[0]==3&&usr[1]==9&&usr[2]==8){
        f=4;                                                                //Index 0 is started with position 3 Then 9 Then 8 Then System Win.
    }
    return f;
}
int chance_at4(){
    int f;
    if(usr[0]==4){
        f=3;                                                                //Index 0 is started with position 4
    }
    if(usr[0]==4&&usr[1]==1){
        f=7;                                                                //Index 0 is started with position 4 Then 1 Then More--
    }
    if(usr[0]==4&&usr[1]==1&&usr[2]==2){
        f=5;                                                                //Index 0 is started with position 4 Then 1 Then 2 Then System Win.
    }
    if(usr[0]==4&&usr[1]==1&&usr[2]==5){
        f=9;                                                                //Index 0 is started with position 4 Then 1 Then 5 Then More--
    }
    if(usr[0]==4&&usr[1]==1&&usr[2]==5&&usr[3]==2){
        f=6;                                                                //Index 0 is started with position 4 Then 1 Then 5 Then 2 Then System Win.
    }
    if(usr[0]==4&&usr[1]==1&&usr[2]==5&&usr[3]==6){
        f=8;                                                                //Index 0 is started with position 4 Then 1 Then 5 Then 6 Then User Win.
    }
    if(usr[0]==4&&usr[1]==1&&usr[2]==5&&usr[3]==8){
        f=6;                                                                //Index 0 is started with position 4 Then 1 Then 5 Then 8 Then System Win.
    }
    if(usr[0]==4&&usr[1]==1&&usr[2]==6){
        f=5;                                                                //Index 0 is started with position 4 Then 1 Then 6 Then System Win.
    }
    if(usr[0]==4&&usr[1]==1&&usr[2]==8){
        f=5;                                                                //Index 0 is started with position 4 Then 1 Then 8 Then System Win.
    }
    if(usr[0]==4&&usr[1]==1&&usr[2]==9){
        f=5;                                                                //Index 0 is started with position 4 Then 1 Then 9 Then System Win.
    }
    if(usr[0]==4&&usr[1]==2){
        f=9;                                                                //Index 0 is started with position 4 Then 2 Then More--
    }
    if(usr[0]==4&&usr[1]==2&&usr[2]==1){
        f=6;                                                                //Index 0 is started with position 4 Then 2 Then 1 Then System Win.
    }
    if(usr[0]==4&&usr[1]==2&&usr[2]==5){
        f=6;                                                                //Index 0 is started with position 4 Then 2 Then 5 Then System Win.
    }
    if(usr[0]==4&&usr[1]==2&&usr[2]==6){
        f=5;                                                                //Index 0 is started with position 4 Then 2 Then 6 Then More--
    }
    if(usr[0]==4&&usr[1]==2&&usr[2]==6&&usr[3]==1){
        f=7;                                                                //Index 0 is started with position 4 Then 2 Then 6 Then 1 Then System Win.
    }
    if(usr[0]==4&&usr[1]==2&&usr[2]==6&&usr[3]==7){
        f=1;                                                                //Index 0 is started with position 4 Then 2 Then 6 Then 7 Then System Win.
    }
    if(usr[0]==4&&usr[1]==2&&usr[2]==6&&usr[3]==8){
        f=7;                                                                //Index 0 is started with position 4 Then 2 Then 6 Then 8 Then System Win.
    }
    if(usr[0]==4&&usr[1]==2&&usr[2]==7){
        f=6;                                                                //Index 0 is started with position 4 Then 2 Then 7 Then System Win.
    }
    if(usr[0]==4&&usr[1]==2&&usr[2]==8){
        f=6;                                                                //Index 0 is started with position 4 Then 2 Then 8 Then System Win.
    }
    if(usr[0]==4&&usr[1]==5){
        f=6;                                                                //Index 0 is started with position 4 Then 5 Then More--
    }
    if(usr[0]==4&&usr[1]==5&&usr[2]==1){
        f=9;                                                                //Index 0 is started with position 4 Then 5 Then 1 Then System Win.
    }
    if(usr[0]==4&&usr[1]==5&&usr[2]==2){
        f=9;                                                                //Index 0 is started with position 4 Then 5 Then 2 Then System Win.
    }
    if(usr[0]==4&&usr[1]==5&&usr[2]==7){
        f=9;                                                                //Index 0 is started with position 4 Then 5 Then 7 Then System Win.
    }
    if(usr[0]==4&&usr[1]==5&&usr[2]==8){
        f=9;                                                                //Index 0 is started with position 4 Then 5 Then 8 Then System Win.
    }
    if(usr[0]==4&&usr[1]==5&&usr[2]==9){
        f=1;                                                                //Index 0 is started with position 4 Then 5 Then 9 Then More--
    }
    if(usr[0]==4&&usr[1]==5&&usr[2]==9&&usr[3]==1){
        f=8;                                                                //Index 0 is started with position 4 Then 5 Then 9 Then 1 Then Tie.
    }
    if(usr[0]==4&&usr[1]==5&&usr[2]==9&&usr[3]==7){
        f=2;                                                                //Index 0 is started with position 4 Then 5 Then 9 Then 7 Then System Win.
    }
    if(usr[0]==4&&usr[1]==5&&usr[2]==9&&usr[3]==8){
        f=2;                                                                //Index 0 is started with position 4 Then 5 Then 9 Then 8 Then System Win.
    }
    if(usr[0]==4&&usr[1]==6){
        f=5;                                                                //Index 0 is started with position 4 Then 6 Then More--
    }
    if(usr[0]==4&&usr[1]==6&&usr[2]==1){
        f=7;                                                                //Index 0 is started with position 4 Then 6 Then 1 Then System Win.
    }
    if(usr[0]==4&&usr[1]==6&&usr[2]==2){
        f=7;                                                                //Index 0 is started with position 4 Then 6 Then 2 Then Sysem Win.
    }
    if(usr[0]==4&&usr[1]==6&&usr[2]==7){
        f=2;                                                                //Index 0 is started with position 4 Then 6 Then 7 Then More--
    }
    if(usr[0]==4&&usr[1]==6&&usr[2]==7&&usr[3]==1){
        f=8;                                                                //Index 0 is started with position 4 Then 6 Then 7 Then 1 Then User Win.
    }
    if(usr[0]==4&&usr[1]==6&&usr[2]==7&&usr[3]==8){
        f=1;                                                                //Index 0 is started with position 4 Then 6 Then 7 Then 8 Then System Win.
    }
    if(usr[0]==4&&usr[1]==6&&usr[2]==7&&usr[3]==9){
        f=8;                                                                //Index 0 is started with position 4 Then 6 Then 7 Then 9 Then System Win.
    }
    if(usr[0]==4&&usr[1]==6&&usr[2]==8){
        f=7;                                                                //Index 0 is started with position 4 Then 6 Then 8 Then System Win.
    }
    if(usr[0]==4&&usr[1]==6&&usr[2]==9){
        f=7;                                                                //Index 0 is started with position 4 Then 6 Then 9 Then System Win.
    }
    if(usr[0]==4&&usr[1]==7){
        f=1;                                                                //Index 0 is started with position 4 Then 7 Then More--
    }
    if(usr[0]==4&&usr[1]==7&&usr[2]==2){
        f=9;                                                                //Index 0 is started with position 4 Then 7 Then 2 Then More--
    }
    if(usr[0]==4&&usr[1]==7&&usr[2]==2&&usr[3]==5){
        f=6;                                                                //Index 0 is started with position 4 Then 7 Then 2 Then 5 Then System Win.
    }
    if(usr[0]==4&&usr[1]==7&&usr[2]==2&&usr[3]==6){
        f=5;                                                                //Index 0 is started with position 4 Then 7 Then 2 Then 6 Then System Win.
    }
    if(usr[0]==4&&usr[1]==7&&usr[2]==2&&usr[3]==8){
        f=6;                                                                //Index 0 is started with position 4 Then 7 Then 2 Then 8 Then System Win.
    }
    if(usr[0]==4&&usr[1]==7&&usr[2]==5){
        f=2;                                                                //Index 0 is started with position 4 Then 7 Then 5 Then System Win.
    }
    if(usr[0]==4&&usr[1]==7&&usr[2]==6){
        f=2;                                                                //Index 0 is started with position 4 Then 7 Then 6 Then System Win.
    }
    if(usr[0]==4&&usr[1]==7&&usr[2]==8){
        f=2;                                                                //Index 0 is started with position 4 Then 7 Then 8 Then System Win.
    }
    if(usr[0]==4&&usr[1]==7&&usr[2]==9){
        f=2;                                                                //Index 0 is started with position 4 Then 7 Then 9 Then System Win.
    }
    if(usr[0]==4&&usr[1]==8){
        f=9;                                                                //Index 0 is started with position 4 Then 8 Then More--
    }
    if(usr[0]==4&&usr[1]==8&&usr[2]==1){
        f=6;                                                                //Index 0 is started with position 4 Then 8 Then 1 Then System Win.
    }
    if(usr[0]==4&&usr[1]==8&&usr[2]==2){
        f=6;                                                                //Index 0 is started with position 4 Then 8 Then 2 Then System Win.
    }
    if(usr[0]==4&&usr[1]==8&&usr[2]==5){
        f=6;                                                                //Index 0 is started with position 4 Then 8 Then 5 Then System Win.
    }
    if(usr[0]==4&&usr[1]==8&&usr[2]==6){
        f=5;                                                                //Index 0 is started with position 4 Then 8 Then 6 Then More--
    }
    if(usr[0]==4&&usr[1]==8&&usr[2]==6&&usr[3]==1){
        f=7;                                                                //Index 0 is started with position 4 Then 8 Then 6 Then 1 Then System Win.
    }
    if(usr[0]==4&&usr[1]==8&&usr[2]==6&&usr[3]==2){
        f=1;                                                                //Index 0 is started with position 4 Then 8 Then 6 Then 2 Then System Win.
    }
    if(usr[0]==4&&usr[1]==8&&usr[2]==6&&usr[3]==7){
        f=1;                                                                //Index 0 is started with position 4 Then 8 Then 6 Then 7 Then System Win.
    }
    if(usr[0]==4&&usr[1]==8&&usr[2]==7){
        f=6;                                                                //Index 0 is started with position 4 Then 8 Then 7 Then System Win.
    }
    if(usr[0]==4&&usr[1]==9){
        f=5;                                                                //Index 0 is started with position 4 Then 9 Then More--
    }
    if(usr[0]==4&&usr[1]==9&&usr[2]==1){
        f=7;                                                                //Index 0 is started with position 4 Then 9 Then 1 Then System Win.
    }
    if(usr[0]==4&&usr[1]==9&&usr[2]==2){
        f=7;                                                                //Index 0 is started with position 4 Then 9 Then 2 Then System Win.
    }
    if(usr[0]==4&&usr[1]==9&&usr[2]==6){
        f=7;                                                                //Index 0 is started with position 4 Then 9 Then 6 Then System Win.
    }
    if(usr[0]==4&&usr[1]==9&&usr[2]==7){
        f=2;                                                                //Index 0 is started with position 4 Then 9 Then 7 Then More--
    }
    if(usr[0]==4&&usr[1]==9&&usr[2]==7&&usr[3]==1){
        f=8;                                                                //Index 0 is started with position 4 Then 9 Then 7 Then 1 Then User Win.
    }
    if(usr[0]==4&&usr[1]==9&&usr[2]==7&&usr[3]==6){
        f=1;                                                                //Index 0 is started with position 4 Then 9 Then 7 Then 6 Then System Win.
    }
    if(usr[0]==4&&usr[1]==9&&usr[2]==7&&usr[3]==8){
        f=1;                                                                //Index 0 is started with position 4 Then 9 Then 7 Then 8 Then User Win.
    }
    if(usr[0]==4&&usr[1]==9&&usr[2]==8){
        f=7;                                                                //Index 0 is started with position 4 Then 9 Then 8 Then System Win.
    }
    return f;
}
int chance_at5(){
    int f;
    if(usr[0]==5){
        f=9;                                                                //Index 0 is started with position 5
    }
    if(usr[0]==5&&usr[1]==1){
        f=3;                                                                //Index 0 is started with position 5 Then 1 Then More--
    }
    if(usr[0]==5&&usr[1]==1&&usr[2]==2){
        f=6;                                                                //Index 0 is started with position 5 Then 1 Then 2 Then System Win.
    }
    if(usr[0]==5&&usr[1]==1&&usr[2]==4){
        f=6;                                                                //Index 0 is started with position 5 Then 1 Then 4 Then System Win.
    }
    if(usr[0]==5&&usr[1]==1&&usr[2]==6){
        f=4;                                                                //Index 0 is started with position 5 Then 1 Then 6 Then More--
    }
    if(usr[0]==5&&usr[1]==1&&usr[2]==6&&usr[3]==2){
        f=8;                                                                //Index 0 is started with position 5 Then 1 Then 6 Then 2 Then Tie.
    }
    if(usr[0]==5&&usr[1]==1&&usr[2]==6&&usr[3]==7){
        f=8;                                                                //Index 0 is started with position 5 Then 1 Then 6 Then 7 THen Tie.
    }
    if(usr[0]==5&&usr[1]==1&&usr[2]==6&&usr[3]==8){
        f=2;                                                                //Index 0 is started with position 5 Then 1 Then 6 Then 8 Then Tie.
    }
    if(usr[0]==5&&usr[1]==1&&usr[2]==7){
        f=6;                                                                //Index 0 is started with position 5 Then 1 Then 7 Then System Win.
    }
    if(usr[0]==5&&usr[1]==1&&usr[2]==8){
        f=6;                                                                //Index 0 is started with position 5 Then 1 Then 8 Then System Win.
    }
    if(usr[0]==5&&usr[1]==2){
        f=8;                                                                //Index 0 is started with position 5 Then 2 Then More--
    }
    if(usr[0]==5&&usr[1]==2&&usr[2]==1){
        f=7;                                                                //Index 0 is started with position 5 Then 2 Then 1 THen System Win.
    }
    if(usr[0]==5&&usr[1]==2&&usr[2]==3){
        f=7;                                                                //Index 0 is started with position 5 Then 2 Then 3 Then System Win.
    }
    if(usr[0]==5&&usr[1]==2&&usr[2]==4){
        f=7;                                                                //Index 0 is started with position 5 Then 2 Then 4 Then System Win.
    }
    if(usr[0]==5&&usr[1]==2&&usr[2]==6){
        f=7;                                                                //Index 0 is started with position 5 Then 2 Then 6 Then System Win.
    }
    if(usr[0]==5&&usr[1]==2&&usr[2]==7){
        f=3;                                                                //Index 0 is started with position 5 Then 2 Then 7 Then More--
    }
    if(usr[0]==5&&usr[1]==2&&usr[2]==7&&usr[3]==1){
        f=6;                                                                //Index 0 is started with position 5 Then 2 Then 7 Then 1 Then System Win.
    }
    if(usr[0]==5&&usr[1]==2&&usr[2]==7&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 5 Then 2 Then 7 Then 4 Then System Win.
    }
    if(usr[0]==5&&usr[1]==2&&usr[2]==7&&usr[3]==6){
        f=4;                                                                //Index 0 is started with position 5 Then 2 Then 7 Then 6 Then Tie.
    }
    if(usr[0]==5&&usr[1]==3){
        f=7;                                                                //Index 0 is started with position 5 Then 3 Then More--
    }
    if(usr[0]==5&&usr[1]==3&&usr[2]==1){
        f=8;                                                                //Index 0 is started with position 5 Then 3 Then 1 Then System Win.
    }
    if(usr[0]==5&&usr[1]==3&&usr[2]==2){
        f=8;                                                                //Index 0 is started with position 5 Then 3 Then 2 THen System Win.
    }
    if(usr[0]==5&&usr[1]==3&&usr[2]==4){
        f=8;                                                                //Index 0 is started with position 5 Then 3 Then 4 Then System Win.
    }
    if(usr[0]==5&&usr[1]==3&&usr[2]==6){
        f=8;                                                                //Index 0 is started with position 5 Then 3 Then 6 Then System Win.
    }
    if(usr[0]==5&&usr[1]==3&&usr[2]==8){
        f=2;                                                                //Index 0 is started with position 5 Then 3 Then 8 Then More--
    }
    if(usr[0]==5&&usr[1]==3&&usr[2]==8&&usr[3]==1){
        f=6;                                                                //Index 0 is started with position 5 Then 3 Then 8 Then 1 Then Tie.
    }
    if(usr[0]==5&&usr[1]==3&&usr[2]==8&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 5 Then 3 Then 8 Then 4 Then Tie.
    }
    if(usr[0]==5&&usr[1]==3&&usr[2]==8&&usr[3]==6){
        f=4;                                                                //Index 0 is started with position 5 Then 3 Then 8 Then 6 Then Tie.
    }
    if(usr[0]==5&&usr[1]==4){
        f=6;                                                                //Index 0 is started with position 5 Then 4 Then More--
    }
    if(usr[0]==5&&usr[1]==4&&usr[2]==1){
        f=3;                                                                //Index 0 is started with position 5 Then 4 Then 1 Then System Win.
    }
    if(usr[0]==5&&usr[1]==4&&usr[2]==2){
        f=3;                                                                //Index 0 is started with position 5 Then 4 Then 2 Then System Win.
    }
    if(usr[0]==5&&usr[1]==4&&usr[2]==3){
        f=7;                                                                //Index 0 is started with position 5 Then 4 Then 3 Then More--
    }
    if(usr[0]==5&&usr[1]==4&&usr[2]==3&&usr[3]==1){
        f=8;                                                                //Index 0 is started with position 5 Then 4 Then 3 Then 1 Then System Win.
    }
    if(usr[0]==5&&usr[1]==4&&usr[2]==3&&usr[3]==2){
        f=8;                                                                //Index 0 is started with position 5 Then 4 Then 3 Then 2 Then System Win.
    }
    if(usr[0]==5&&usr[1]==4&&usr[2]==3&&usr[3]==8){
        f=2;                                                                //Index 0 is started with position 5 Then 4 Then 3 Then 8 THen Tie.
    }
    if(usr[0]==5&&usr[1]==4&&usr[2]==7){
        f=3;                                                                //Index 0 is started with position 5 Then 4 Then 7 Then System Win.
    }
    if(usr[0]==5&&usr[1]==4&&usr[2]==8){
        f=3;                                                                //Index 0 is started with position 5 Then 4 Then 8 Then System Win.
    }
    if(usr[0]==5&&usr[1]==6){
        f=4;                                                                //Index 0 is started with position 5 Then 6 Then More--
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==1){
        f=7;                                                                //Index 0 is started with position 5 Then 6 Then 1 Then More--
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==1&&usr[3]==2){
        f=8;                                                                //Index 0 is started with position 5 Then 6 Then 1 Then 2 Then System Win.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==1&&usr[3]==3){
        f=8;                                                                //Index 0 is started with position 5 Then 6 Then 1 Then 3 Then System Win.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==1&&usr[3]==8){
        f=2;                                                                //Index 0 is started with position 5 Then 6 Then 1 Then 8 THen Tie.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==2){
        f=8;                                                                //Index 0 is started with position 5 Then 6 Then 2 Then More--
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==2&&usr[3]==1){
        f=7;                                                                //Index 0 is started with position 5 Then 6 Then 2 Then 1 Then System Win.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==2&&usr[3]==3){
        f=7;                                                                //Index 0 is started with position 5 Then 6 Then 2 Then 3 Then System Win.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==2&&usr[3]==7){
        f=3;                                                                //Index 0 is started with position 5 Then 6 Then 2 Then 7 Then Tie.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==3){
        f=7;                                                                //Index 0 is started with position 5 Then 6 Then 3 Then More--
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==3&&usr[3]==1){
        f=8;                                                                //Index 0 is started with position 5 Then 6 Then 3 Then 1 Then System Win.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==3&&usr[3]==2){
        f=8;                                                                //Index 0 is started with position 5 Then 6 Then 3 Then 2 Then System Win.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==3&&usr[3]==8){
        f=1;                                                                //Index 0 is started with position 5 Then 6 Then 3 Then 8 Then System Win.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==7){
        f=3;                                                                //Index 0 is started with position 5 Then 6 Then 7 Then More--
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==7&&usr[3]==1){
        f=2;                                                                //Index 0 is started with position 5 Then 6 Then 7 Then 1 Then Tie.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==7&&usr[3]==2){
        f=8;                                                                //Index 0 is started with position 5 Then 6 Then 7 Then 2 Then Tie.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==7&&usr[3]==8){
        f=2;                                                                //Index 0 is started with position 5 Then 6 Then 7 Then 8 Then Tie.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==8){
        f=2;                                                                //Index 0 is started with position 5 Then 6 Then 8 Then More--
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==8&&usr[3]==1){
        f=7;                                                                //Index 0 is started with position 5 Then 6 Then 8 Then 1 Then Tie.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==8&&usr[3]==3){
        f=7;                                                                //Index 0 is started with position 5 Then 6 Then 8 Then 3 THen Tie.
    }
    if(usr[0]==5&&usr[1]==6&&usr[2]==8&&usr[3]==7){
        f=3;                                                                //Index 0 is started with position 5 Then 6 Then 8 Then 7 THen Tie.
    }
    if(usr[0]==5&&usr[1]==7){
        f=3;                                                                //Index 0 is started with position 5 Then 7 Then More--
    }
    if(usr[0]==5&&usr[1]==7&&usr[2]==1){
        f=6;                                                                //Index 0 is started with position 5 Then 7 Then 1 Then System Win.
    }
    if(usr[0]==5&&usr[1]==7&&usr[2]==2){
        f=6;                                                                //Index 0 is started with position 5 Then 7 Then 2 THen System Win.
    }
    if(usr[0]==5&&usr[1]==7&&usr[2]==4){
        f=6;                                                                //Index 0 is started with position 5 Then 7 Then 4 Then System Win.
    }
    if(usr[0]==5&&usr[1]==7&&usr[2]==6){
        f=4;                                                                //Index 0 is started with position 5 Then 7 Then 6 Then More--
    }
    if(usr[0]==5&&usr[1]==7&&usr[2]==6&&usr[3]==1){
        f=8;                                                                //Index 0 is started with position 5 Then 7 Then 6 Then 1 Then Tie.
    }
    if(usr[0]==5&&usr[1]==7&&usr[2]==6&&usr[3]==2){
        f=8;                                                                //Index 0 is started with position 5 Then 7 Then 6 Then 2 Then Tie.
    }
    if(usr[0]==5&&usr[1]==7&&usr[2]==6&&usr[3]==8){
        f=2;                                                                //Index 0 is started with position 5 Then 7 Then 6 Then 8 Then Tie.
    }
    if(usr[0]==5&&usr[1]==7&&usr[2]==8){
        f=6;                                                                //Index 0 is started with position 5 Then 7 Then 8 THen System Win.
    }
    if(usr[0]==5&&usr[1]==8){
        f=2;                                                                //Index 0 is started with position 5 Then 8 Then More--
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==1){
        f=3;                                                                //Index 0 is started with position 5 Then 8 Then 1 Then More--
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==1&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 5 Then 8 Then 1 Then 4 THen System Win.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==1&&usr[3]==6){
        f=4;                                                                //Index 0 is started with position 5 Then 8 Then 1 Then 6 Then Tie.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==1&&usr[3]==7){
        f=6;                                                                //Index 0 is started with position 5 Then 8 Then 1 Then 7 Then System Win.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==3){
        f=7;                                                                //Index 0 is started with position 5 Then 8 Then 3 Then More--
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==3&&usr[3]==1){
        f=4;                                                                //Index 0 is started with position 5 Then 8 Then 3 Then 1 THen Tie.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==3&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 5 Then 8 Then 3 Then 4 Then Tie.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==3&&usr[3]==6){
        f=4;                                                                //Index 0 is started with position 5 Then 8 Then 3 Then 6 Then Tie.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==4){
        f=6;                                                                //Index 0 is started with position 5 Then 8 Then 4 Then More--
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==4&&usr[3]==1){
        f=3;                                                                //Index 0 is started with position 5 Then 8 Then 4 Then 1 Then Sytem Win.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==4&&usr[3]==3){
        f=7;                                                                //Index 0 is started with position 5 Then 8 Then 4 Then 3 Then Tie.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==4&&usr[3]==7){
        f=3;                                                                //Index 0 is started with position 5 Then 8 Then 4 Then 7 Then Syemtem Win.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==6){
        f=4;                                                                //Index 0 is started with position 5 Then 8 Then 6 THen More--
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==6&&usr[3]==1){
        f=3;                                                                //Index 0 is started with position 5 Then 8 Then 6 Then 1 Then Tie.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==6&&usr[3]==3){
        f=7;                                                                //Index 0 is started with position 5 Then 8 Then 6 Then 3 Then Tie.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==6&&usr[3]==7){
        f=3;                                                                //Index 0 is started with position 5 Then 8 Then 6 Then 7 Then Tie.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==7){
        f=3;                                                                //Index 0 is started with position 5 Then 8 Then 7 Then More--
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==7&&usr[3]==1){
        f=6;                                                                //Index 0 is started with position 5 Then 8 Then 7 Then 1 THen System Win
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==7&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 5 Then 8 Then 7 Then 4 Then System Win.
    }
    if(usr[0]==5&&usr[1]==8&&usr[2]==7&&usr[3]==6){
        f=1;                                                                //Index 0 is started with position 5 Then 8 Then 7 Then 6 THen System Win.
    }
    return f;
}
int chance_at6(){
    int f;
    if(usr[0]==6){
        f=1;                                                                //Index 0 is started with position 6
    }
    if(usr[0]==6&&usr[1]==2){
        f=5;                                                                //Index 0 is started with position 6 Then 2 Then More--
    }
    if(usr[0]==6&&usr[1]==2&&usr[2]==3){
        f=9;                                                                //Index 0 is started with position 6 Then 2 Then 3 Then System Win.
    }
    if(usr[0]==6&&usr[1]==2&&usr[2]==4){
        f=9;                                                                //Index 0 is started with position 6 Then 2 Then 4 Then System Win.
    }
    if(usr[0]==6&&usr[1]==2&&usr[2]==7){
        f=9;                                                                //Index 0 is started with position 6 Then 2 Then 7 Then System Win.
    }
    if(usr[0]==6&&usr[1]==2&&usr[2]==8){
        f=9;                                                                //Index 0 is started with position 6 Then 2 Then 8 Then System Win.
    }
    if(usr[0]==6&&usr[1]==2&&usr[2]==9){
        f=3;                                                                //Index 0 is started with position 6 Then 2 Then 9 Then More--
    }
    if(usr[0]==6&&usr[1]==2&&usr[2]==9&&usr[3]==4){
        f=7;                                                                //Index 0 is started with position 6 Then 2 Then 9 Then 4 Then System Win.
    }
    if(usr[0]==6&&usr[1]==2&&usr[2]==9&&usr[3]==7){
        f=8;                                                                //Index 0 is started with position 6 Then 2 Then 9 Then 7 Then Tie.
    }
    if(usr[0]==6&&usr[1]==2&&usr[2]==9&&usr[3]==8){
        f=7;                                                                //Index 0 is started with position 6 Then 2 Then 9 Then 8 Then System Win.
    }
    if(usr[0]==6&&usr[1]==3){
        f=9;                                                                //Index 0 is started with position 6 Then 3 Then More--
    }
    if(usr[0]==6&&usr[1]==3&&usr[2]==2){
        f=5;                                                                //Index 0 is started with position 6 Then 3 Then 2 Then System Win.
    }
    if(usr[0]==6&&usr[1]==3&&usr[2]==4){
        f=5;                                                                //Index 0 is started with position 6 Then 3 Then 4 Then System Win.
    }
    if(usr[0]==6&&usr[1]==3&&usr[2]==5){
        f=4;                                                                //Index 0 is started with position 6 Then 3 Then 5 Then More--
    }
    if(usr[0]==6&&usr[1]==3&&usr[2]==5&&usr[3]==2){
        f=7;                                                                //Index 0 is started with position 6 Then 3 Then 5 Then 2 Then System Win.
    }
    if(usr[0]==6&&usr[1]==3&&usr[2]==5&&usr[3]==7){
        f=2;                                                                //Index 0 is started with position 6 Then 3 Then 5 Then 7 Then User Win.
    }
    if(usr[0]==6&&usr[1]==3&&usr[2]==5&&usr[3]==8){
        f=7;                                                                //Index 0 is started with position 6 Then 3 Then 5 Then 8 Then System Win.
    }
    if(usr[0]==6&&usr[1]==3&&usr[2]==7){
        f=5;                                                                //Index 0 is started with position 6 Then 3 Then 7 Then System Win.
    }
    if(usr[0]==6&&usr[1]==3&&usr[2]==8){
        f=5;                                                                //Index 0 is started with position 6 Then 3 Then 8 Then System Win.
    }
    if(usr[0]==6&&usr[1]==4){
        f=5;                                                                //Index 0 is started with position 6 Then 4 Then More--
    }
    if(usr[0]==6&&usr[1]==4&&usr[2]==2){
        f=9;                                                                //Index 0 is started with position 6 Then 4 Then 2 Then System Win.
    }
    if(usr[0]==6&&usr[1]==4&&usr[2]==3){
        f=9;                                                                //Index 0 is started with position 6 Then 4 Then 3 Then System Win.
    }
    if(usr[0]==6&&usr[1]==4&&usr[2]==7){
        f=9;                                                                //Index 0 is started with position 6 Then 4 Then 7 Then System Win.
    }
    if(usr[0]==6&&usr[1]==4&&usr[2]==8){
        f=9;                                                                //Index 0 is started with position 6 Then 4 Then 8 Then System Win.
    }
    if(usr[0]==6&&usr[1]==4&&usr[2]==9){
        f=2;                                                                //Index 0 is started with position 6 Then 4 Then 9 Then More--
    }
    if(usr[0]==6&&usr[1]==4&&usr[2]==9&&usr[3]==2){
        f=7;                                                                //Index 0 is started with position 6 Then 4 Then 9 Then 2 Then System Win.
    }
    if(usr[0]==6&&usr[1]==4&&usr[2]==9&&usr[3]==7){
        f=2;                                                                //Index 0 is started with position 6 Then 4 Then 9 Then 7 Then System Win.
    }
    if(usr[0]==6&&usr[1]==4&&usr[2]==9&&usr[3]==8){
        f=2;                                                                //Index 0 is started with position 6 Then 4 Then 9 Then 8 Then System Win.
    }
    if(usr[0]==6&&usr[1]==5){
        f=4;                                                                //Index 0 is started with position 6 Then 5 Then More--
    }
    if(usr[0]==6&&usr[1]==5&&usr[2]==2){
        f=7;                                                                //Index 0 is started with position 6 Then 5 Then 2 Then System Win.
    }
    if(usr[0]==6&&usr[1]==5&&usr[2]==3){
        f=7;                                                                //Index 0 is started with position 6 Then 5 Then 3 Then System Win.
    }
    if(usr[0]==6&&usr[1]==5&&usr[2]==7){
        f=3;                                                                //Index 0 is started with position 6 Then 5 Then 7 Then More--
    }
    if(usr[0]==6&&usr[1]==5&&usr[2]==7&&usr[3]==2){
        f=8;                                                                //Index 0 is started with position 6 Then 5 Then 7 Then 2 Then Tie.
    }
    if(usr[0]==6&&usr[1]==5&&usr[2]==7&&usr[3]==8){
        f=2;                                                                //Index 0 is started with position 6 Then 5 Then 7 Then 8 Then System Win.
    }
    if(usr[0]==6&&usr[1]==5&&usr[2]==7&&usr[3]==9){
        f=2;                                                                //Index 0 is started with position 6 Then 5 Then 7 Then 9 Then System Win.
    }
    if(usr[0]==6&&usr[1]==5&&usr[2]==8){
        f=7;                                                                //Index 0 is started with position 6 Then 5 Then 8 Then System Win.
    }
    if(usr[0]==6&&usr[1]==5&&usr[2]==9){
        f=7;                                                                //Index 0 is started with position 6 Then 5 Then 9 Then System Win.
    }
    if(usr[0]==6&&usr[1]==7){
        f=5;                                                                //Index 0 is started with position 6 Then 7 Then More--
    }
    if(usr[0]==6&&usr[1]==7&&usr[2]==2){
        f=9;                                                                //Index 0 is started with position 6 Then 7 Then 2 Then Sytem Win.
    }
    if(usr[0]==6&&usr[1]==7&&usr[2]==3){
        f=9;                                                                //Index 0 is started with position 6 Then 7 Then 3 Then System Win.
    }
    if(usr[0]==6&&usr[1]==7&&usr[2]==4){
        f=9;                                                                //Index 0 is started with position 6 Then 7 Then 4 Then System Win.
    }
    if(usr[0]==6&&usr[1]==7&&usr[2]==8){
        f=9;                                                                //Index 0 is started with position 6 Then 7 Then 8 Then System Win.
    }
    if(usr[0]==6&&usr[1]==7&&usr[2]==9){
        f=3;                                                                //Index 0 is started with position 6 Then 7 Then 9 Then More--
    }
    if(usr[0]==6&&usr[1]==7&&usr[2]==9&&usr[3]==2){
        f=8;                                                                //Index 0 is started with position 6 Then 7 Then 9 Then 2 Then Tie.
    }
    if(usr[0]==6&&usr[1]==7&&usr[2]==9&&usr[3]==4){
        f=2;                                                                //Index 0 is started with position 6 Then 7 Then 9 Then 4 Then System Win.
    }
    if(usr[0]==6&&usr[1]==7&&usr[2]==9&&usr[3]==8){
        f=2;                                                                //Index 0 is started with position 6 Then 7 Then 9 Then 8 Then Usr Win.
    }
    if(usr[0]==6&&usr[1]==8){
        f=5;                                                                //Index 0 is started with position 6 Then 8 Then More--
    }
    if(usr[0]==6&&usr[1]==8&&usr[2]==2){
        f=9;                                                                //Index 0 is started with position 6 Then 8 Then 2 Then System Win.
    }
    if(usr[0]==6&&usr[1]==8&&usr[2]==3){
        f=9;                                                                //Index 0 is started with position 6 Then 8 Then 3 Then System Win.
    }
    if(usr[0]==6&&usr[1]==8&&usr[2]==4){
        f=9;                                                                //Index 0 is started with position 6 Then 8 Then 4 Then System Win.
    }
    if(usr[0]==6&&usr[1]==8&&usr[2]==7){
        f=9;                                                                //Index 0 is started with position 6 Then 8 Then 7 Then System Win.
    }
    if(usr[0]==6&&usr[1]==8&&usr[2]==9){
        f=3;                                                                //Index 0 is started with position 6 Then 8 Then 9 Then More--
    }
    if(usr[0]==6&&usr[1]==8&&usr[2]==9&&usr[3]==2){
        f=7;                                                                //Index 0 is started with position 6 Then 8 Then 9 Then 2 Then System Win.
    }
    if(usr[0]==6&&usr[1]==8&&usr[2]==9&&usr[3]==4){
        f=7;                                                                //Index 0 is started with position 6 Then 8 Then 9 Then 4 Then System Win.
    }
    if(usr[0]==6&&usr[1]==8&&usr[2]==9&&usr[3]==7){
        f=2;                                                                //Index 0 is started with position 6 Then 8 Then 9 Then 7 Then User Win.
    }
    if(usr[0]==6&&usr[1]==9){
        f=3;                                                                //Index 0 is started with position 6 Then 9 Then More--
    }
    if(usr[0]==6&&usr[1]==9&&usr[2]==2){
        f=7;                                                                //Index 0 is started with position 6 Then 9 Then 2 Then More--
    }
    if(usr[0]==6&&usr[1]==9&&usr[2]==2&&usr[3]==4){
        f=5;                                                                //Index 0 is started with position 6 Then 9 Then 2 Then 4 Then System Win.
    }
    if(usr[0]==6&&usr[1]==9&&usr[2]==2&&usr[3]==5){
        f=4;                                                                //Index 0 is started with position 6 Then 9 Then 2 Then 5 Then System Win.
    }
    if(usr[0]==6&&usr[1]==9&&usr[2]==2&&usr[3]==8){
        f=5;                                                                //Index 0 is started with position 6 Then 9 Then 2 Then 8 Then System Win.
    }
    if(usr[0]==6&&usr[1]==9&&usr[2]==4){
        f=2;                                                                //Index 0 is started with position 6 Then 9 Then 4 Then System Win.
    }
    if(usr[0]==6&&usr[1]==9&&usr[2]==5){
        f=2;                                                                //Index 0 is started with position 6 Then 9 Then 5 Then System Win.
    }
    if(usr[0]==6&&usr[1]==9&&usr[2]==7){
        f=2;                                                                //Index 0 is started with position 6 Then 9 Then 7 Then System Win.
    }
    if(usr[0]==6&&usr[1]==9&&usr[2]==8){
        f=2;                                                                //Index 0 is started with position 6 Then 9 Then 8 Then System Win.
    }
    return f;
}
int chance_at7(){   
    int f;
    if(usr[0]==7){
        f=1;                                                                //Index 0 is started with position 7
    }
    if(usr[0]==7&&usr[1]==2){
        f=5;                                                                //Index 0 is started with position 7 Then 2 Then More--
    }
    if(usr[0]==7&&usr[1]==2&&usr[2]==3){
        f=9;                                                                //Index 0 is started with position 7 Then 2 Then 3 Then System Win.
    }
    if(usr[0]==7&&usr[1]==2&&usr[2]==4){
        f=9;                                                                //Index 0 is started with position 7 Then 2 Then 4 Then System Win.
    }
    if(usr[0]==7&&usr[1]==2&&usr[2]==6){
        f=9;                                                                //Index 0 is started with position 7 Then 2 Then 6 Then System Win.
    }
    if(usr[0]==7&&usr[1]==2&&usr[2]==8){
        f=9;                                                                //Index 0 is started with position 7 Then 2 Then 8 Then System Win.
    }
    if(usr[0]==7&&usr[1]==2&&usr[2]==9){
        f=8;                                                                //Index 0 is started with position 7 Then 2 Then 9 Then More--
    }
    if(usr[0]==7&&usr[1]==2&&usr[2]==9&&usr[3]==3){
        f=6;                                                                //Index 0 is started with position 7 Then 2 Then 9 Then 3 Then Tie.
    }
    if(usr[0]==7&&usr[1]==2&&usr[2]==9&&usr[3]==4){
        f=3;                                                                //Index 0 is started with position 7 Then 2 Then 9 Then 4 Then Tie.
    }
    if(usr[0]==7&&usr[1]==2&&usr[2]==9&&usr[3]==6){
        f=3;                                                                //Index 0 is started with position 7 Then 2 Then 9 Then 6 Then Tie.
    }
    if(usr[0]==7&&usr[1]==3){
        f=5;                                                                //Index 0 is started with position 7 Then 3 Then More--
    }
    if(usr[0]==7&&usr[1]==3&&usr[2]==2){
        f=9;                                                                //Index 0 is started with position 7 Then 3 Then 2 Then System Win.
    }
    if(usr[0]==7&&usr[1]==3&&usr[2]==4){
        f=9;                                                                //Index 0 is started with position 7 Then 3 Then 4 Then System Win.
    }
    if(usr[0]==7&&usr[1]==3&&usr[2]==6){
        f=9;                                                                //Index 0 is started with position 7 Then 3 Then 6 Then System Win.
    }
    if(usr[0]==7&&usr[1]==3&&usr[2]==8){
        f=9;                                                                //Index 0 is started with position 7 Then 3 Then 8 Then System Win.
    }
    if(usr[0]==7&&usr[1]==3&&usr[2]==9){
        f=6;                                                                //Index 0 is started with position 7 Then 3 Then 9 Then More--
    }
    if(usr[0]==7&&usr[1]==3&&usr[2]==9&&usr[3]==2){
        f=4;                                                                //Index 0 is started with position 7 Then 3 Then 9 Then 2 Then System Win.
    }
    if(usr[0]==7&&usr[1]==3&&usr[2]==9&&usr[3]==4){
        f=8;                                                                //Index 0 is started with position 7 Then 3 Then 9 Then 4 Then Tie.
    }
    if(usr[0]==7&&usr[1]==3&&usr[2]==9&&usr[3]==8){
        f=4;                                                                //Index 0 is started with position 7 Then 3 Then 9 Then 8 Then User Win.
    }
    if(usr[0]==7&&usr[1]==4){
        f=5;                                                                //Index 0 is started with position 7 Then 4 Then More--
    }
    if(usr[0]==7&&usr[1]==4&&usr[2]==2){
        f=9;                                                                //Index 0 is started with position 7 Then 4 Then 2 Then System Win.
    }
    if(usr[0]==7&&usr[1]==4&&usr[2]==3){
        f=9;                                                                //Index 0 is started with position 7 Then 4 Then 3 Then System Win.
    }
    if(usr[0]==7&&usr[1]==4&&usr[2]==6){
        f=9;                                                                //Index 0 is started with position 7 Then 4 Then 6 Then System Win.
    }
    if(usr[0]==7&&usr[1]==4&&usr[2]==8){
        f=9;                                                                //Index 0 is started with position 7 Then 4 Then 8 Then System Win.
    }
    if(usr[0]==7&&usr[1]==4&&usr[2]==9){
        f=8;                                                                //Index 0 is started with position 7 Then 4 Then 9 Then More--
    }
    if(usr[0]==7&&usr[1]==4&&usr[2]==9&&usr[3]==2){
        f=3;                                                                //Index 0 is started with position 7 Then 4 Then 9 Then 2 Then Tie.
    }
    if(usr[0]==7&&usr[1]==4&&usr[2]==9&&usr[3]==3){
        f=2;                                                                //Index 0 is started with position 7 Then 4 Then 9 Then 3 Then System Win.
    }
    if(usr[0]==7&&usr[1]==4&&usr[2]==9&&usr[3]==6){
        f=2;                                                                //Index 0 is started with position 7 Then 4 Then 9 Then 6 Then System Win.
    }
    if(usr[0]==7&&usr[1]==5){
        f=3;                                                                //Index 0 is started with position 7 Then 5 Then More--
    }
    if(usr[0]==7&&usr[1]==5&&usr[2]==2){
        f=8;                                                                //Index 0 is started with position 7 Then 5 Then 2 Then More--
    }
    if(usr[0]==7&&usr[1]==5&&usr[2]==2&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 7 Then 5 Then 2 Then 4 Then Tie.
    }
    if(usr[0]==7&&usr[1]==5&&usr[2]==2&&usr[3]==6){
        f=4;                                                                //Index 0 is started with position 7 Then 5 Then 2 Then 6 Then Tie.
    }
    if(usr[0]==7&&usr[1]==5&&usr[2]==2&&usr[3]==9){
        f=6;                                                                //Index 0 is started with position 7 Then 5 Then 2 Then 9 Then Tie.
    }
    if(usr[0]==7&&usr[1]==5&&usr[2]==4){
        f=2;                                                                //Index 0 is started with position 7 Then 5 Then 4 Then System Win.
    }
    if(usr[0]==7&&usr[1]==5&&usr[2]==6){
        f=2;                                                                //Index 0 is started with position 7 Then 5 Then 6 Then System Win.
    }
    if(usr[0]==7&&usr[1]==5&&usr[2]==8){
        f=2;                                                                //Index 0 is started with position 7 Then 5 Then 8 Then System Win.
    }
    if(usr[0]==7&&usr[1]==5&&usr[2]==9){
        f=2;                                                                //Index 0 is started with position 7 Then 5 Then 9 Then System Win.
    }
    if(usr[0]==7&&usr[1]==6){
        f=5;                                                                //Index 0 is started with position 7 Then 6 Then More--
    }
    if(usr[0]==7&&usr[1]==6&&usr[2]==2){
        f=9;                                                                //Index 0 is started with position 7 Then 6 Then 2 Then System Win.
    }
    if(usr[0]==7&&usr[1]==6&&usr[2]==3){
        f=9;                                                                //Index 0 is started with position 7 Then 6 Then 3 Then System Win.
    }
    if(usr[0]==7&&usr[1]==6&&usr[2]==4){
        f=9;                                                                //Index 0 is started with position 7 Then 6 Then 4 Then System Win.
    }
    if(usr[0]==7&&usr[1]==6&&usr[2]==8){
        f=9;                                                                //Index 0 is started with position 7 Then 6 Then 8 Then System Win.
    }
    if(usr[0]==7&&usr[1]==6&&usr[2]==9){
        f=2;                                                                //Index 0 is started with position 7 Then 6 Then 9 Then More--
    }
    if(usr[0]==7&&usr[1]==6&&usr[2]==9&&usr[3]==3){
        f=8;                                                                //Index 0 is started with position 7 Then 6 Then 9 Then 3 Then User Win.
    }
    if(usr[0]==7&&usr[1]==6&&usr[2]==9&&usr[3]==4){
        f=3;                                                                //Index 0 is started with position 7 Then 6 Then 9 Then 4 Then User Win.
    }
    if(usr[0]==7&&usr[1]==6&&usr[2]==9&&usr[3]==8){
        f=3;                                                                //Index 0 is started with position 7 Then 6 Then 9 Then 8 Then User Win.
    }
    if(usr[0]==7&&usr[1]==8){
        f=9;                                                                //Index 0 is started with position 7 Then 8 Then More--
    }
    if(usr[0]==7&&usr[1]==8&&usr[2]==2){
        f=5;                                                                //Index 0 is started with position 7 Then 8 Then 2 Then System Win.
    }
    if(usr[0]==7&&usr[1]==8&&usr[2]==3){
        f=5;                                                                //Index 0 is started with position 7 Then 8 Then 3 Then System Win.
    }
    if(usr[0]==7&&usr[1]==8&&usr[2]==4){
        f=5;                                                                //Index 0 is started with position 7 Then 8 Then 4 Then System Win.
    }
    if(usr[0]==7&&usr[1]==8&&usr[2]==5){
        f=2;                                                                //Index 0 is started with position 7 Then 8 Then 5 Then More--
    }
    if(usr[0]==7&&usr[1]==8&&usr[2]==5&&usr[3]==3){
        f=4;                                                                //Index 0 is started with position 7 Then 8 Then 6 Then 3 Then User Win.
    }
    if(usr[0]==7&&usr[1]==8&&usr[2]==5&&usr[3]==4){
        f=3;                                                                //Index 0 is started with position 7 Then 8 Then 5 Then 4 Then System Win.
    }
    if(usr[0]==7&&usr[1]==8&&usr[2]==5&&usr[3]==6){
        f=3;                                                                //Index 0 is started with position 7 Then 8 Then 5 Then 6 Then System Win.
    }
    if(usr[0]==7&&usr[1]==8&&usr[2]==6){
        f=5;                                                                //Index 0 is started with position 7 Then 8 Then 6 Then System Win.
    }
    if(usr[0]==7&&usr[1]==9){
        f=8;                                                                //Index 0 is started with position 7 Then 9 Then More--
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==2){
        f=5;                                                                //Index 0 is started with position 7 Then 9 Then 2 Then More--
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==2&&usr[3]==3){
        f=6;                                                                //Index 0 is started with position 7 Then 9 Then 2 Then 3 Then Tie.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==2&&usr[3]==4){
        f=3;                                                                //Index 0 is started with position 7 Then 9 Then 2 Then 4 Then Tie.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==2&&usr[3]==6){
        f=3;                                                                //Index 0 is started with position 7 Then 9 Then 2 Then 6 Then Tie.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==3){
        f=2;                                                                //Index 0 is started with position 7 Then 9 Then 3 Then More--
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==3&&usr[3]==4){
        f=5;                                                                //Index 0 is started with position 7 Then 9 Then 3 Then 4 Then System Win.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==3&&usr[3]==5){
        f=6;                                                                //Index 0 is started with position 7 Then 9 Then 3 Then 5 Then User Win.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==3&&usr[3]==6){
        f=5;                                                                //Index 0 is started with position 7 Then 9 Then 3 Then 6 Then System Win.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==4){
        f=2;                                                                //Index 0 is started with position 7 Then 9 Then 4 Then More--
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==4&&usr[3]==3){
        f=5;                                                                //Index 0 is started with position 7 Then 9 Then 4 Then 3 Then System Win.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==4&&usr[3]==5){
        f=6;                                                                //Index 0 is started with position 7 Then 9 Then 4 Then 5 Then User Win.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==4&&usr[3]==6){
        f=5;                                                                //Index 0 is started with position 7 Then 9 Then 4 Then 6 Then System Win.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==5){
        f=3;                                                                //Index 0 is started with position 7 Then 9 Then 5 Then More--
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==5&&usr[3]==2){
        f=4;                                                                //Index 0 is started with position 7 Then 9 Then 5 Then 2 Then Tie.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==5&&usr[3]==4){
        f=2;                                                                //Index 0 is started with position 7 Then 9 Then 5 Then 4 Then System Win.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==5&&usr[3]==6){
        f=2;                                                                //Index 0 is started with position 7 Then 9 Then 5 Then 6 Then System Win.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==6){
        f=3;                                                                //Index 0 is started with position 7 Then 9 Then 6 Then More--
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==6&&usr[3]==2){
        f=5;                                                                //Index 0 is started with position 7 Then 9 Then 6 Then 2 Then Tie.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==6&&usr[3]==4){
        f=2;                                                                //Index 0 is started with position 7 Then 9 Then 6 Then 4 Then System Win.
    }
    if(usr[0]==7&&usr[1]==9&&usr[2]==6&&usr[3]==5){
        f=2;                                                                //Index 0 is started with position 7 Then 9 Then 6 Then 5 Then System Win.
    }
    return f;
}
int chance_at8(){
    int f;
    if(usr[0]==8){
        f=5;                                                                //Index 0 is started with position 8 Then More--
    }
    if(usr[0]==8&&usr[1]==1){
        f=3;                                                                //Index 0 is started with position 8 Then 1 Then More--
    }
    if(usr[0]==8&&usr[1]==1&&usr[2]==2){
        f=7;                                                                //Index 0 is started with position 8 Then 1 Then 2 Then System Win.
    }
    if(usr[0]==8&&usr[1]==1&&usr[2]==4){
        f=7;                                                                //Index 0 is started with position 8 Then 1 Then 4 Then System Win.
    }
    if(usr[0]==8&&usr[1]==1&&usr[2]==6){
        f=7;                                                                //Index 0 is started with position 8 Then 1 Then 6 Then System Win.
    }
    if(usr[0]==8&&usr[1]==1&&usr[2]==7){
        f=9;                                                                //Index 0 is started with position 8 Then 1 Then 7 Then More--
    }
    if(usr[0]==8&&usr[1]==1&&usr[2]==7&&usr[3]==2){
        f=6;                                                                //Index 0 is started with position 8 Then 1 Then 7 Then 2 Then System Win.
    }
    if(usr[0]==8&&usr[1]==1&&usr[2]==7&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 8 Then 1 Then 7 Then 4 Then User Win.
    }
    if(usr[0]==8&&usr[1]==1&&usr[2]==7&&usr[3]==6){
        f=4;                                                                //Index 0 is started with position 8 Then 1 Then 7 Then 6 Then Tie.
    }
    if(usr[0]==8&&usr[1]==1&&usr[2]==9){
        f=7;                                                                //Index 0 is started with position 8 Then 1 Then 9 Then System Win.
    }
    if(usr[0]==8&&usr[1]==2){
        f=6;                                                                //Index 0 is started with position 8 Then 2 Then More--
    }
    if(usr[0]==8&&usr[1]==2&&usr[3]==1){
        f=4;                                                                //Index 0 is started with position 8 Then 2 Then 1 Then System Win.
    }
    if(usr[0]==8&&usr[1]==2&&usr[3]==3){
        f=4;                                                                //Index 0 is started with position 8 Then 2 Then 3 Then System Win.
    }
    if(usr[0]==8&&usr[1]==2&&usr[3]==4){
        f=3;                                                                //Index 0 is started with position 8 Then 2 Then 4 Then More--
    }
    if(usr[0]==8&&usr[1]==2&&usr[3]==4&&usr[3]==1){
        f=7;                                                                //Index 0 is started with position 8 Then 2 Then 4 Then 1 THen System WIn.
    }
    if(usr[0]==8&&usr[1]==2&&usr[3]==4&&usr[3]==7){
        f=7;                                                                //Index 0 is started with position 8 Then 2 Then 4 Then 7 Then SYstem Win.
    }
    if(usr[0]==8&&usr[1]==2&&usr[3]==4&&usr[3]==9){
        f=9;                                                                //Index 0 is started with position 8 Then 2 Then 4 Then 9 Then System Win.
    }
    if(usr[0]==8&&usr[1]==2&&usr[3]==7){
        f=4;                                                                //Index 0 is started with position 8 Then 2 Then 7 Then System Win.
    }
    if(usr[0]==8&&usr[1]==2&&usr[3]==9){
        f=4;                                                                //Index 0 is started with position 8 Then 2 Then 9 Then System Win.
    }
    if(usr[0]==8&&usr[1]==3){
        f=1;                                                                //Index 0 is started with position 8 Then 3 Then More--
    }
    if(usr[0]==8&&usr[1]==3&&usr[2]==2){
        f=9;                                                                //Index 0 is started with position 8 Then 3 Then 2 Then System Win.
    }
    if(usr[0]==8&&usr[1]==3&&usr[2]==4){
        f=9;                                                                //Index 0 is started with position 8 Then 3 Then 4 Then System Win.
    }
    if(usr[0]==8&&usr[1]==3&&usr[2]==6){
        f=9;                                                                //Index 0 is started with position 8 Then 3 Then 6 Then System Win.
    }
    if(usr[0]==8&&usr[1]==3&&usr[2]==7){
        f=9;                                                                //Index 0 is started with position 8 Then 3 Then 7 Then System Win.
    }
    if(usr[0]==8&&usr[1]==3&&usr[2]==9){
        f=6;                                                                //Index 0 is started with position 8 Then 3 Then 9 Then More--
    }
    if(usr[0]==8&&usr[1]==3&&usr[2]==9&&usr[3]==2){
        f=4;                                                                //Index 0 is started with position 8 Then 3 Then 9 Then 2 Then System WIn.
    }
    if(usr[0]==8&&usr[1]==3&&usr[2]==9&&usr[3]==4){
        f=7;                                                                //Index 0 is started with position 8 Then 3 Then 9 Then 4 Then Tie.
    }
    if(usr[0]==8&&usr[1]==3&&usr[2]==9&&usr[3]==7){
        f=4;                                                                //Index 0 is started with position 8 Then 3 Then 9 Then 7 Then System WIn.
    }
    if(usr[0]==8&&usr[1]==4){
        f=1;                                                                //Index 0 is started with position 8 Then 4 Then More--
    }
    if(usr[0]==8&&usr[1]==4&&usr[2]==2){
        f=7;                                                                //Index 0 is started with position 8 Then 4 Then 2 Then System Win.
    }
    if(usr[0]==8&&usr[1]==4&&usr[2]==4){
        f=7;                                                                //Index 0 is started with position 8 Then 4 Then 4 Then System WIn.
    }
    if(usr[0]==8&&usr[1]==4&&usr[2]==6){
        f=7;                                                                //Index 0 is started with position 8 Then 4 Then 6 Then System Win.
    }
    if(usr[0]==8&&usr[1]==4&&usr[2]==7){
        f=9;                                                                //Index 0 is started with position 8 Then 4 Then 7 Then More--
    }
    if(usr[0]==8&&usr[1]==4&&usr[2]==7&&usr[3]==2){
        f=6;                                                                //Index 0 is started with position 8 Then 4 Then 7 Then 2 THen System WIn.
    }
    if(usr[0]==8&&usr[1]==4&&usr[2]==7&&usr[3]==4){
        f=6;                                                                //Index 0 is started with position 8 Then 4 Then 7 Then 4 Then User Win.
    }
    if(usr[0]==8&&usr[1]==4&&usr[2]==7&&usr[3]==6){
        f=4;                                                                //Index 0 is started with position 8 Then 4 Then 7 Then 6 Then Tie.
    }
    if(usr[0]==8&&usr[1]==4&&usr[2]==9){
        f=7;                                                                //Index 0 is started with position 8 Then 4 Then 9 Then System Win.
    }
    if(usr[0]==8&&usr[1]==6){
        f=3;                                                                //Index 0 is started with position 8 Then 6 Then More--
    }
    if(usr[0]==8&&usr[1]==6&&usr[2]==1){
        f=7;                                                                //Index 0 is started with position 8 Then 6 Then 1 Then System Win.
    }
    if(usr[0]==8&&usr[1]==6&&usr[2]==2){
        f=7;                                                                //Index 0 is started with position 8 Then 6 Then 2 THen System Win.
    }
    if(usr[0]==8&&usr[1]==6&&usr[2]==4){
        f=7;                                                                //Index 0 is started with position 8 Then 6 Then 4 Then System WIn.
    }
    if(usr[0]==8&&usr[1]==6&&usr[2]==7){
        f=9;                                                                //Index 0 is started with position 8 Then 6 Then 7 Then More--
    }
    if(usr[0]==8&&usr[1]==6&&usr[2]==7&&usr[3]==1){
        f=4;                                                                //Index 0 is started with position 8 Then 6 Then 7 Then 1 Then Tie.
    }
    if(usr[0]==8&&usr[1]==6&&usr[2]==7&&usr[3]==2){
        f=1;                                                                //Index 0 is started with position 8 Then 6 Then 7 Then 2 Then System Win.
    }
    if(usr[0]==8&&usr[1]==6&&usr[2]==7&&usr[3]==4){
        f=1;                                                                //Index 0 is started with position 8 Then 6 Then 7 Then 4 Then System Win.
    }
    if(usr[0]==8&&usr[1]==6&&usr[2]==9){
        f=7;                                                                //Index 0 is started with position 8 Then 6 Then 9 Then System Win.
    }
    if(usr[0]==8&&usr[1]==7){
        f=9;                                                                //Index 0 is started with position 8 Then 7 Then More--
    }
    if(usr[0]==8&&usr[1]==7&&usr[2]==1){
        f=4;                                                                //Index 0 is started with position 8 Then 7 Then 1 Then More--
    }
    if(usr[0]==8&&usr[1]==7&&usr[2]==1&&usr[3]==2){
        f=6;                                                                //Index 0 is started with position 8 Then 7 Then 1 Then 2 Then System Win.
    }
    if(usr[0]==8&&usr[1]==7&&usr[2]==1&&usr[3]==3){
        f=6;                                                                //Index 0 is started with position 8 Then 7 Then 1 Then 3 Then System WIn.
    }
    if(usr[0]==8&&usr[1]==7&&usr[2]==1&&usr[3]==6){
        f=3;                                                                //Index 0 is started with position 8 Then 7 Then 1 Then 6 Then Tie.
    }
    if(usr[0]==8&&usr[1]==7&&usr[2]==2){
        f=1;                                                                //Index 0 is started with position 8 Then 7 Then 2 Then System Win.
    }
    if(usr[0]==8&&usr[1]==7&&usr[2]==3){
        f=1;                                                                //Index 0 is started with position 8 Then 7 Then 3 Then System Win.
    }
    if(usr[0]==8&&usr[1]==7&&usr[2]==4){
        f=1;                                                                //Index 0 is started with position 8 Then 7 Then 4 Then System WIn.
    }
    if(usr[0]==8&&usr[1]==7&&usr[2]==6){
        f=1;                                                                //Index 0 is started with position 8 Then 7 Then 6 Then System Win.
    }
    if(usr[0]==8&&usr[1]==9){
        f=7;                                                                //Index 0 is started with position 8 Then 9 Then More--
    }
    if(usr[0]==8&&usr[1]==9&&usr[2]==1){
        f=3;                                                                //Index 0 is started with position 8 Then 9 Then 1 Then System Win.
    }
    if(usr[0]==8&&usr[1]==9&&usr[2]==2){
        f=3;                                                                //Index 0 is started with position 8 Then 9 Then 2 Then System WIn.
    }
    if(usr[0]==8&&usr[1]==9&&usr[2]==3){
        f=6;                                                                //Index 0 is started with position 8 Then 9 Then 3 Then More--
    }
    if(usr[0]==8&&usr[1]==9&&usr[2]==3&&usr[3]==1){
        f=4;                                                                //Index 0 is started with position 8 Then 9 Then 3 Then 1 Then System Win.
    }
    if(usr[0]==8&&usr[1]==9&&usr[2]==3&&usr[3]==2){
        f=4;                                                                //Index 0 is started with position 8 Then 9 Then 3 Then 2 Then System Win.
    }
    if(usr[0]==8&&usr[1]==9&&usr[2]==3&&usr[3]==4){
        f=1;                                                                //Index 0 is started with position 8 Then 9 Then 3 Then 4 Then Tie.
    }
    if(usr[0]==8&&usr[1]==9&&usr[2]==4){
        f=3;                                                                //Index 0 is started with position 8 Then 9 Then 4 Then System Win.
    }
    if(usr[0]==8&&usr[1]==9&&usr[2]==6){
        f=3;                                                                //Index 0 is started with position 8 Then 9 Then 6 Then System Win.
    }
    return f;
}
int chance_at9(){
    int f;
    if(usr[0]==9){
        f=5;                                                                //Index 0 is started with position 9 Then more--
    }
    if(usr[0]==9&&usr[1]==1){
        f=2;                                                                //Index 0 is started with position 9 Then 1 Then More--
    }
    if(usr[0]==9&&usr[1]==1&&usr[2]==3){
        f=8;                                                                //Index 0 is started with position 9 Then 1 Then 3 Then System Win.
    }
    if(usr[0]==9&&usr[1]==1&&usr[2]==4){
        f=8;                                                                //Index 0 is started with position 9 Then 1 Then 4 Then SYstem WIn,
    }
    if(usr[0]==9&&usr[1]==1&&usr[2]==6){
        f=8;                                                                //Index 0 is started with position 9 Then 1 Then 6 THen System WIn.
    }
    if(usr[0]==9&&usr[1]==1&&usr[2]==7){
        f=8;                                                                //Index 0 is started with position 9 Then 1 Then 7 Then Sytem Win.
    }
    if(usr[0]==9&&usr[1]==1&&usr[2]==8){
        f=7;                                                                //Index 0 is started with position 9 Then 1 Then 8 Then more--
    }
    if(usr[0]==9&&usr[1]==1&&usr[2]==8&&usr[3]==3){
        f=6;                                                                //Index 0 is started with position 9 Then 1 Then 8 Then 3 Then Tie.
    }
    if(usr[0]==9&&usr[1]==1&&usr[2]==8&&usr[3]==4){
        f=3;                                                                //Index 0 is started with position 9 Then 1 Then 8 Then 4 Then System WIn.
    }
    if(usr[0]==9&&usr[1]==1&&usr[2]==8&&usr[3]==6){
        f=3;                                                                //Index 0 is started with position 9 Then 1 Then 8 Then 6 Then System Win.
    }
    if(usr[0]==9&&usr[1]==2){
        f=3;                                                                //Index 0 is started with position 9 Then 2 Then More--
    }
    if(usr[0]==9&&usr[1]==2&&usr[2]==1){
        f=7;                                                                //Index 0 is started with position 9 Then 2 Then 1 Then System Win.
    }
    if(usr[0]==9&&usr[1]==2&&usr[2]==4){
        f=7;                                                                //Index 0 is started with position 9 Then 2 Then 4 THen Systme WIn.
    }
    if(usr[0]==9&&usr[1]==2&&usr[2]==6){
        f=7;                                                                //Index 0 is started with position 9 Then 2 Then 6 Then System Win.
    }
    if(usr[0]==9&&usr[1]==2&&usr[2]==7){
        f=8;                                                                //Index 0 is started with position 9 Then 2 Then 7 Then More--
    }
    if(usr[0]==9&&usr[1]==2&&usr[2]==7&&usr[3]==1){
        f=4;                                                                //Index 0 is started with position 9 Then 2 Then 7 Then 1 Then Tie.
    }
    if(usr[0]==9&&usr[1]==2&&usr[2]==7&&usr[3]==4){
        f=1;                                                                //Index 0 is started with position 9 Then 2 Then 7 Then 4 Then Tie.
    }
    if(usr[0]==9&&usr[1]==2&&usr[2]==7&&usr[3]==6){
        f=1;                                                                //Index 0 is started with position 9 Then 2 Then 7 Then 6 Then Tie.
    }
    if(usr[0]==9&&usr[1]==2&&usr[2]==8){
        f=7;                                                                //Index 0 is started with position 9 Then 2 Then 8 Then SYstem Win.
    }
    if(usr[0]==9&&usr[1]==3){
        f=6;                                                                //Index 0 is started with position 9 Then 3 Then More--
    }
    if(usr[0]==9&&usr[1]==3&&usr[2]==1){
        f=4;                                                                //Index 0 is started with position 9 Then 3 Then 1 Then System WIn.
    }
    if(usr[0]==9&&usr[1]==3&&usr[2]==2){
        f=4;                                                                //Index 0 is started with position 9 Then 3 Then 2 Then System Win.
    }
    if(usr[0]==9&&usr[1]==3&&usr[2]==4){
        f=8;                                                                //Index 0 is started with position 9 Then 3 Then 4 Then More--
    }
    if(usr[0]==9&&usr[1]==3&&usr[2]==4&&usr[3]==1){
        f=2;                                                                //Index 0 is started with position 9 Then 3 Then 4 Then 1 THen System Win.
    }
    if(usr[0]==9&&usr[1]==3&&usr[2]==4&&usr[3]==2){
        f=1;                                                                //Index 0 is started with position 9 Then 3 Then 4 Then 2 Then Tie.
    }
    if(usr[0]==9&&usr[1]==3&&usr[2]==4&&usr[3]==7){
        f=2;                                                                //Index 0 is started with position 9 Then 3 Then 4 Then 7 THen System WIn.
    }
    if(usr[0]==9&&usr[1]==3&&usr[2]==7){
        f=4;                                                                //Index 0 is started with position 9 Then 3 Then 7 Then System Win.
    }
    if(usr[0]==9&&usr[1]==3&&usr[2]==8){
        f=4;                                                                //Index 0 is started with position 9 Then 3 Then 8 Then SYstem WIn.
    }
    if(usr[0]==9&&usr[1]==4){
        f=7;                                                                //Index 0 is started with position 9 Then 4 Then More--
    }
    if(usr[0]==9&&usr[1]==4&&usr[2]==1){
        f=3;                                                                //Index 0 is started with position 9 Then 4 Then 1 Then System Win.
    }
    if(usr[0]==9&&usr[1]==4&&usr[2]==2){
        f=3;                                                                //Index 0 is started with position 9 Then 4 Then 2 Then System Win.
    }
    if(usr[0]==9&&usr[1]==4&&usr[2]==3){
        f=6;                                                                //Index 0 is started with position 9 Then 4 Then 3 Then More--
    }
    if(usr[0]==9&&usr[1]==4&&usr[2]==3&&usr[3]==1){
        f=2;                                                                //Index 0 is started with position 9 Then 4 Then 3 Then 1 Then Tie,
    }
    if(usr[0]==9&&usr[1]==4&&usr[2]==3&&usr[3]==2){
        f=1;                                                                //Index 0 is started with position 9 Then 4 Then 3 Then 2 Then Tie.
    }
    if(usr[0]==9&&usr[1]==4&&usr[2]==3&&usr[3]==8){
        f=1;                                                                //Index 0 is started with position 9 Then 4 Then 3 Then 8 Then Tie.
    }
    if(usr[0]==9&&usr[1]==4&&usr[2]==6){
        f=3;                                                                //Index 0 is started with position 9 Then 4 Then 6 THen System WIn,
    }
    if(usr[0]==9&&usr[1]==4&&usr[2]==8){
        f=3;                                                                //Index 0 is started with position 9 Then 4 Then 8 Then System WIn.
    }
    if(usr[0]==9&&usr[1]==6){
        f=3;                                                                //Index 0 is started with position 9 Then 6 Then More--
    }
    if(usr[0]==9&&usr[1]==6&&usr[2]==1){
        f=7;                                                                //Index 0 is started with position 9 Then 6 Then 1 Then System Win.
    }
    if(usr[0]==9&&usr[1]==6&&usr[2]==2){
        f=7;                                                                //Index 0 is started with position 9 Then 6 Then 2 Then System WIn.
    }
    if(usr[0]==9&&usr[1]==6&&usr[2]==4){
        f=7;                                                                //Index 0 is started with position 9 Then 6 Then 4 Then System Win.
    }
    if(usr[0]==9&&usr[1]==6&&usr[2]==7){
        f=8;                                                                //Index 0 is started with position 9 Then 6 Then 7 Then More--
    }
    if(usr[0]==9&&usr[1]==6&&usr[2]==7&&usr[3]==1){
        f=2;                                                                //Index 0 is started with position 9 Then 6 Then 7 Then 1 System Win.
    }
    if(usr[0]==9&&usr[1]==6&&usr[2]==7&&usr[3]==2){
        f=4;                                                                //Index 0 is started with position 9 Then 6 Then 7 Then 2 Then Tie.
    }
    if(usr[0]==9&&usr[1]==6&&usr[2]==7&&usr[3]==4){
        f=2;                                                                //Index 0 is started with position 9 Then 6 Then 7 Then 4 System Win.
    }
    if(usr[0]==9&&usr[1]==6&&usr[2]==8){
        f=7;                                                                //Index 0 is started with position 9 Then 6 Then 8 Then System Win.
    }
    if(usr[0]==9&&usr[1]==7){
        f=8;                                                                //Index 0 is started with position 9 Then 7 Then More--
    }
    if(usr[0]==9&&usr[1]==7&&usr[2]==1){
        f=2;                                                                //Index 0 is started with position 9 Then 7 Then 1 Then System Win.
    }
    if(usr[0]==9&&usr[1]==7&&usr[2]==2){
        f=6;                                                                //Index 0 is started with position 9 Then 7 Then 2 Then More--
    }
    if(usr[0]==9&&usr[1]==7&&usr[2]==2&&usr[3]==1){
        f=4;                                                                //Index 0 is started with position 9 Then 7 Then 2 Then 1 System Win.
    }
    if(usr[0]==9&&usr[1]==7&&usr[2]==2&&usr[3]==3){
        f=4;                                                                //Index 0 is started with position 9 Then 7 Then 2 Then 3 System Win.
    }
    if(usr[0]==9&&usr[1]==7&&usr[2]==2&&usr[3]==4){
        f=1;                                                                //Index 0 is started with position 9 Then 7 Then 2 Then 4 Then Tie.
    }
    if(usr[0]==9&&usr[1]==7&&usr[2]==3){
        f=2;                                                                //Index 0 is started with position 9 Then 7 Then 3 Then System Win.
    }
    if(usr[0]==9&&usr[1]==7&&usr[2]==4){
        f=2;                                                                //Index 0 is started with position 9 Then 7 Then 4 Then System WIn.
    }
    if(usr[0]==9&&usr[1]==7&&usr[2]==6){
        f=2;                                                                //Index 0 is started with position 9 Then 7 Then 6 Then System WIn.
    }
    if(usr[0]==9&&usr[1]==8){
        f=7;                                                                //Index 0 is started with position 9 Then 8 Then More--
    }
    if(usr[0]==9&&usr[1]==8&&usr[2]==1){
        f=3;                                                                //Index 0 is started with position 9 Then 8 Then 1 Then System WIn.
    }
    if(usr[0]==9&&usr[1]==8&&usr[2]==2){
        f=3;                                                                //Index 0 is started with position 9 Then 8 Then 2 Then System Win.
    }
    if(usr[0]==9&&usr[1]==8&&usr[2]==3){
        f=6;                                                                //Index 0 is started with position 9 Then 8 Then 3 Then More--
    }
    if(usr[0]==9&&usr[1]==8&&usr[2]==3&&usr[3]==1){
        f=2;                                                                //Index 0 is started with position 9 Then 8 Then 3 Then 1 Then System WIn.
    }
    if(usr[0]==9&&usr[1]==8&&usr[2]==3&&usr[3]==2){
        f=2;                                                                //Index 0 is started with position 9 Then 8 Then 3 Then 2 Then System Win.
    }
    if(usr[0]==9&&usr[1]==8&&usr[2]==3&&usr[3]==4){
        f=1;                                                                //Index 0 is started with position 9 Then 8 Then 3 Then 4 Then Tie.
    }
    if(usr[0]==9&&usr[1]==8&&usr[2]==4){
        f=3;                                                                //Index 0 is started with position 9 Then 8 Then 4 Then System WIn.
    }
    if(usr[0]==9&&usr[1]==8&&usr[2]==6){
        f=3;                                                                //Index 0 is started with position 9 Then 8 Then 6 Then System WIn.
    }
    return f;
}
void result(int choosed)
{
    x+=1;
    if(choosed==1){
        if(value[0]=='X'&&value[1]=='X'&&value[2]=='X')
        {
            cout<<"User Win...."<<endl;
            check_win=1;
        }
        else if(value[3]=='X'&&value[4]=='X'&&value[5]=='X')
        {
            cout<<"User Win...."<<endl;
            check_win=1;
        }
        else if(value[6]=='X'&&value[7]=='X'&&value[8]=='X')
        {
            cout<<"User Win...."<<endl;
            check_win=1;
        }
        else if(value[0]=='O'&&value[1]=='O'&&value[2]=='O')
        {
            cout<<"Computer Win...."<<endl;
            check_win=1;
        }
        else if(value[3]=='O'&&value[4]=='O'&&value[5]=='O')
        {
            cout<<"Computer Win...."<<endl;
            check_win=1;
        }
        else if(value[6]=='O'&&value[7]=='O'&&value[8]=='O')
        {
            cout<<"Computer Win...."<<endl;
            check_win=1;
        }
        else if(value[0]=='X'&&value[3]=='X'&&value[6]=='X')
        {
            cout<<"User Win...."<<endl;
            check_win=1;
        }
        else if(value[1]=='X'&&value[4]=='X'&&value[7]=='X')
        {
            cout<<"User Win...."<<endl;
            check_win=1;
        }
        else if(value[2]=='X'&&value[5]=='X'&&value[8]=='X')
        {
            cout<<"User Win...."<<endl;
            check_win=1;
        }
        else if(value[0]=='O'&&value[3]=='O'&&value[6]=='O')
        {
            cout<<"Computer Win...."<<endl;
            check_win=1;
        }
        else if(value[1]=='O'&&value[4]=='O'&&value[7]=='O')
        {
            cout<<"Computer Win...."<<endl;
            check_win=1;
        }
        else if(value[2]=='O'&&value[5]=='O'&&value[8]=='O')
        {
            cout<<"Computer Win...."<<endl;
            check_win=1;
        }
        else if(value[0]=='X'&&value[4]=='X'&&value[8]=='X')
        {
            cout<<"User Win...."<<endl;
            check_win=1;
        }
        else if(value[0]=='O'&&value[4]=='O'&&value[8]=='O')
        {
            cout<<"Computer Win...."<<endl;
            check_win=1;
        }
        else if(value[2]=='X'&&value[4]=='X'&&value[6]=='X')
        {
            cout<<"User Win...."<<endl;
            check_win=1;
        }
        else if(value[2]=='O'&&value[4]=='O'&&value[6]=='O')
        {
            cout<<"Computer Win...."<<endl;
            check_win=1;
        }
        else if(x==9){
            cout<<endl<<"Match Tied Up. Nice Played."<<endl;
            check_win=1;
        }
    }
    else if(choosed==2){
        if(value[0]=='X'&&value[1]=='X'&&value[2]=='X')
        {
            cout<<"Player 1 Win...."<<endl;
            check_win=1;
        }
        else if(value[3]=='X'&&value[4]=='X'&&value[5]=='X')
        {
            cout<<"Player 1 Win...."<<endl;
            check_win=1;
        }
        else if(value[6]=='X'&&value[7]=='X'&&value[8]=='X')
        {
            cout<<"Player 1 Win...."<<endl;
            check_win=1;
        }
        else if(value[0]=='O'&&value[1]=='O'&&value[2]=='O')
        {
            cout<<"Player 2 Win...."<<endl;
            check_win=1;
        }
        else if(value[3]=='O'&&value[4]=='O'&&value[5]=='O')
        {
            cout<<"Player 2 Win...."<<endl;
            check_win=1;
        }
        else if(value[6]=='O'&&value[7]=='O'&&value[8]=='O')
        {
            cout<<"Player 2 Win...."<<endl;
            check_win=1;
        }
        else if(value[0]=='X'&&value[3]=='X'&&value[6]=='X')
        {
            cout<<"Player 1 Win...."<<endl;
            check_win=1;
        }
        else if(value[1]=='X'&&value[4]=='X'&&value[7]=='X')
        {
            cout<<"Player 1 Win...."<<endl;
            check_win=1;
        }
        else if(value[2]=='X'&&value[5]=='X'&&value[8]=='X')
        {
            cout<<"Player 1 Win...."<<endl;
            check_win=1;
        }
        else if(value[0]=='O'&&value[3]=='O'&&value[6]=='O')
        {
            cout<<"Player 2 Win...."<<endl;
            check_win=1;
        }
        else if(value[1]=='O'&&value[4]=='O'&&value[7]=='O')
        {
            cout<<"Player 2 Win...."<<endl;
            check_win=1;
        }
        else if(value[2]=='O'&&value[5]=='O'&&value[8]=='O')
        {
            cout<<"Player 2 Win...."<<endl;
            check_win=1;
        }
        else if(value[0]=='X'&&value[4]=='X'&&value[8]=='X')
        {
            cout<<"Player 1 Win...."<<endl;
            check_win=1;
        }
        else if(value[0]=='O'&&value[4]=='O'&&value[8]=='O')
        {
            cout<<"Player 2 Win...."<<endl;
            check_win=1;
        }
        else if(value[2]=='X'&&value[4]=='X'&&value[6]=='X')
        {
            cout<<"Player 1 Win...."<<endl;
            check_win=1;
        }
        else if(value[2]=='O'&&value[4]=='O'&&value[6]=='O')
        {
            cout<<"Player 2 Win...."<<endl;
            check_win=1;
        }
        else if(x==9){
            cout<<endl<<"Match Tied Up. Nice Played."<<endl;
            check_win=1;
        }
    }
}
void position(int x,int player)
{
    if(player==1 && x==1)
    {
        value[0]='X';
    }
    else if(player==2 && x==1)
    {
        value[0]='O';
    }
    else if(player==1 && x==2)
    {
        value[1]='X';
    }
    else if(player==2 && x==2)
    {
        value[1]='O';
    }
    else if(player==1 && x==3)
    {
        value[2]='X';
    }
    else if(player==2 && x==3)
    {
        value[2]='O';
    }
    else if(player==1 && x==4)
    {
        value[3]='X';
    }
    else if(player==2 && x==4)
    {
        value[3]='O';
    }
    else if(player==1 && x==5)
    {
        value[4]='X';
    }
    else if(player==2 && x==5)
    {
        value[4]='O';
    }else if(player==1 && x==6)
    {
        value[5]='X';
    }
    else if(player==2 && x==6)
    {
        value[5]='O';
    }
    else if(player==1 && x==7)
    {
        value[6]='X';
    }
    else if(player==2 && x==7)
    {
        value[6]='O';
    }
    else if(player==1 && x==8)
    {
        value[7]='X';
    }
    else if(player==2 && x==8)
    {
        value[7]='O';
    }
    else if(player==1 && x==9)
    {
        value[8]='X';
    }
    else if(player==2 && x==9)
    {
        value[8]='O';
    }
}
/*int cmp()                                 //Random number finding and setting
{
    int x;
    x=rand()%9+1;
    return x;
}*/
int choose(){
    cout<<"|------------------------------------------------------------|"<<endl
        <<"|            1-For Single Player( User VS System )           |"<<endl
        <<"|            2-For Multi  Player( User vs User   )           |"<<endl
        <<"|------------------------------------------------------------|"<<endl;
    int val;
    cout<<endl<<"Your Choice : ";
    cin>>val;
    return val;
}
void play_tic_tac_toe(int choosed){
    int p1,p2,player,flag;
    //srand(time(0));
    if(choosed==1){
        for(int i=1;i<=9;i++)
        {
            flag=i;
            if(flag%2!=0)
            {
                board();
                cout<<endl<<"Give a value : ";
                fflush(stdin);
                cin>>p1;
                usr.push_back(p1);
                player=1;
                position(p1,player);
                board();
                result(choosed);
                if(check_win==1)
                {
                    break;
                }
            }
            else
            {
                player=2;
                if(usr[0]==1){
                    p2=chance_at1();                        //If User Gives a Value at first as 1 and that would store at Index 1 so it's chances would be different
                }
                else if(usr[0]==2){
                    p2=chance_at2();
                }
                else if(usr[0]==3){
                    p2=chance_at3();
                }
                else if(usr[0]==4){
                    p2=chance_at4();
                }
                else if(usr[0]==5){
                    p2=chance_at5();
                }
                else if(usr[0]==6){
                    p2=chance_at6();
                }
                else if(usr[0]==7){
                    p2=chance_at7();
                }
                else if(usr[0]==8){
                    p2=chance_at8();
                }
                else if(usr[0]==9){
                    p2=chance_at9();
                }
                pc.push_back(p2);
                position(p2,player);
                board();
                result(choosed);
                if(check_win==1){
                    break;
                }
                /*while(!cin.fail())                        //Enable for Very easy Computer giving number.
                {
                    int flag_1=0;
                    p2=cmp();
                    for(int j=0;j<usr.size();j++)
                    {
                        if(p2==usr[j])
                        {
                            flag_1++;
                        }
                    }
                    if(flag_1==0)
                    {
                        break;
                    }
                }
                pc.push_back(p2);
                player=2;
                position(p2,player);
                board();
                result();
                if(check_win==1)
                {
                    break;
                }*/
            }
        }
    }
    else if(choosed==2){
        for(int i=1;i<=9;i++)
        {
            flag=i;
            if(flag%2!=0)
            {
                board();
                cout<<endl<<"Player "<<(flag%2)<<" Give a value : ";
                fflush(stdin);
                cin>>p1;
                usr.push_back(p1);
                player=1;
                position(p1,player);
                board();
                result(choosed);
                if(check_win==1)
                {
                    break;
                }
            }
            else{
                board();
                cout<<endl<<"Player "<<(flag%2)+2<<" Give a value : ";
                fflush(stdin);
                cin>>p2;
                usr.push_back(p2);
                player=2;
                position(p2,player);
                board();
                result(choosed);
                if(check_win==1)
                {
                    break;
                }
            }
        }
    }
}
int main()
{
    play_tic_tac_toe(choose());
    cin.get();
    return 0;
}
