/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Convert Seconds
 * Created on July 2, 2015, 1:25 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int nSecs;
    int yrs, mnths, weeks, days, hrs, min, secs;
    
    //Prompt for number of seconds
    cout<<"How many seconds to convert?\n";
    cin>>nSecs;
    
    //Calculations
    secs=nSecs%60;
    nSecs/=60;
    min=nSecs%60;
    nSecs/=60;
    hrs=nSecs%24;
    nSecs/=24;
    days=nSecs%7;
    nSecs/=7;
    weeks=nSecs%4;
    nSecs/=4;
    mnths=nSecs%12;
    yrs=mnths/12;
    
    //Output
    cout<<"The conversion is "<<yrs<<" Yrs, "<<mnths<<" Months, "<<weeks<<
            " weeks, "<<days<<"days, "<<hrs<<"hrs, "<<min<<"mins, "<<secs<<
            "secs.\n";
            
            
    return 0;
}

