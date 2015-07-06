/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework; calculate amount paid
 * Created on July 5, 2015, 8:52 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    float payRate=16.78f;//Hourly wage for first 40 hours 
    float socSec, fedInc, staInc;//Taxes
    unsigned short unDues=10;//union fees
    unsigned short hours, overTim, depndts;
    float grosInc, netInc, totNInc;
    
    //Prompt and Input
    cout<<"How many hours did you work in the week?\n";
    cin>>hours;
    cout<<"How many dependents do you have?\n";
    cin>>depndts;
    
        if(hours<=40){
            //Calculations
            grosInc=payRate*hours;//Calculate gross income
        }else{
            overTim=hours-40;
            grosInc=(payRate*1.5f)*overTim+payRate*40;
        }
    socSec=grosInc*0.06f;//social security tax
    fedInc=grosInc*0.14f;//federal income tax
    staInc=grosInc*0.05f;//state income tax
    netInc=grosInc-socSec-fedInc-staInc-unDues;//net income 

        if(depndts>=3){    
            totNInc=netInc-35;//with the $35 with hold for 3 or more dependents
            cout<<"The employee dependent fees are:      35\n";
        }else{
            totNInc=netInc;
            cout<<"The employee dependent fees are:       0\n"; 
        }
    //Output
    cout<<setprecision(2)<<fixed;
    cout<<"The social security tax is:     "<<setw(8)<<socSec<<endl;
    cout<<"The federal income tax is:      "<<setw(8)<<fedInc<<endl;
    cout<<"The state income tax is:        "<<setw(8)<<staInc<<endl;
    cout<<"The union dues are:             "<<setw(8)<<unDues<<endl;
    cout<<"Your gross pay is:              "<<setw(8)<<grosInc<<endl;
    cout<<"Your net income is:             "<<setw(8)<<netInc<<endl;       
    return 0;
}

