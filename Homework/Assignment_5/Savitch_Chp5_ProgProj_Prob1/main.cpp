/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on July 11, 2015, 11:49 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes 
void input(unsigned short &, unsigned short &);
void conv(unsigned short &, unsigned short &, unsigned short &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char ans;
    //Loop to repeat
    do{
    //Declare variables 
    unsigned short twHour;
    unsigned short hh,mm;
    input(hh,mm);
    conv(hh, mm, twHour);
    cout<<"Would you like to repeat? (y/n)\n";
    cin>>ans;
    }while(ans=='Y' || ans=='y');
    return 0;
}

void input(unsigned short &hh,unsigned short &mm){
    cout<<"What is the time in 24 hour notation? (ex: 14:20)\n";
    cin>>hh;
    cin.ignore();
    cin>>mm;
}
    

void conv(unsigned short &hh, unsigned short &mm, unsigned short &twHour){
    if(hh<12){
        twHour=hh;
        if(mm<10){
            cout<<"In 12 hour notation it is "<<twHour<<":0"<<mm<<" AM "<<endl;
        }else{
        cout<<"In 12 hour notation it is "<<twHour<<":"<<mm<<" AM "<<endl;
        }
    }else{
        twHour=hh-12;
        if(mm<10){
            cout<<"In 12 hour notation it is "<<twHour<<":0"<<mm<<" PM "<<endl;
        }else{
        cout<<"In 12 hour notation it is "<<twHour<<":"<<mm<<" PM "<<endl; 
        }
    }
}

