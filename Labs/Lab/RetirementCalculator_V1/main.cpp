/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Retirement Calculator
 * Created on July 8, 2015, 10:45 AM
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float salary=100000;//Average Salary in $1s
    float invRate=0.06f;//Investment rate -> see Calif Muni Bonds
    float savReq;      //Savings required at retirement
    float pDep=0.20f;   //Of your gross salary -> percentage deposited 
    float deposit;      //Yearly deposit in $'s
    float savings=0;     //Initial Savings at start of employment
    float year=0;        //Start at year 0
    
    //Calculate required savings
    savReq=salary/invRate;
    
    //Loop to calculate when retirement is possible
    do{
        deposit=pDep*salary;//Deposit based on salary
        savings*=(1+invRate);//Earning based upon investment rate
        savings+=deposit;//Add the deposit after earning interest 
        year++;
    }while(savings<savReq);//When we have enough to retire then exit loop
    
    //Display the result
    cout<<"I can retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl;
    //Exit stage right 
    return 0;
}

