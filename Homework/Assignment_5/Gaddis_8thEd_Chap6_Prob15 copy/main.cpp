/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 11, 2015, 4:46 PM
 * Purpose: Homework
 */

//System Libraries
#include <iostream>
using namespace std; //std namespace --> iostream

//User Libraries

//Global constants

//Function Prototypes
void person(unsigned short,float,float,float,float);
void person(float,float,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    char           patient;  //User inputs if they are an in-patient or an out
    unsigned short numDays;  //Number of days spent in Hospital
    float          dayRate;  //Daily rate of staying in the Hospital
    float          medChrg;  //Medication Charges
    float          hospSer;  //Charges for Hospital Services
    float          totChrg;  //Total charges
    
    //Prompt user for what type of patient they are
    cout<<"Are you an in-patient or an out-patient?"<<endl;
    cout<<"Enter (I) for in-patient or (O) for out-patient"<<endl;
    cin>>patient;
    switch(patient){
        case 'I':
        case 'i':{
            cout<<"Please enter the number of days spent in the Hospital."<<endl;
            cin>>numDays;
            cout<<"What is the daily rate?\n$";
            cin>>dayRate;
            cout<<"What is the charge for the Hospitals Medication?\n$";
            cin>>medChrg;
            cout<<"Lastly what are the charges for the Hospital services?\n$";
            cin>>hospSer;
            person(numDays,dayRate,medChrg,hospSer,totChrg);
            break;
        }
        case 'O':
        case 'o':{
            cout<<"What are the charges for the Hospital services?\n$";
            cin>>hospSer;
            cout<<"Also what is the charge for the Hospitals Medication\n$";
            cin>>medChrg;
            person(hospSer,medChrg,totChrg);
        }
    }
    
    //Exit Stage Right
    return 0;
}

void person(unsigned short numDays,float dayRate,float medChrg,
             float hospSer,float totChrg){
    //Output Total cost for an In-Patient
    totChrg=(numDays*dayRate)+medChrg+hospSer;
    cout<<"Your total cost of staying at "
          "the Hospital is\n= $"<<totChrg<<endl;
}

void person(float hospSer,float medChrg,float totChrg){
    totChrg=medChrg+hospSer;
    cout<<"Your total cost for todays visit is\n= $"<<totChrg<<endl;
}

