/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Retirement Calculator
 * Created on July 8, 2015, 10:45 AM
 */

//System Libraries 
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void table(float, float);
void header(float, float, float);

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float salary=100000;//Average Salary in $1s
    float invRate=0.05f;//Investment rate -> see Calif Muni Bonds
    float savReq;      //Savings required at retirement
    float pDep=0.10f;   //Of your gross salary -> percentage deposited 
    float deposit=20000;      //Yearly deposit in $'s
    float savings=0;     //Initial Savings at start of employment
    float year=1;        //Start at year 0
    float date=17;
    //Calculate required savings
    savReq=salary/invRate;
    
    //Loop to calculate when retirement is possible
    do{
        deposit=pDep*salary;//Deposit based on salary
        savings*=(1+invRate);//Earning based upon investment rate
        savings+=deposit;//Add the deposit after earning interest 
        year++;
    }while(savings<savReq);//When we have enough to retire then exit loop
    
    //Display the result;
    cout<<"I can retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl;
    cout<<table<<endl;
    header(invRate, salary, deposit);
    table(year, date);
    //Exit stage right 
    return 0;
}

void table(float year, float date){
    do{
        year++;
        cout<<"    "<<year<<endl;
    }while(year<=49);
    
    do{
        date++;
        cout<<"       06/01/"<<date<<endl;
      }while(date<=57);
         
}
       


void header(float invRate,float salary, float deposit){
    cout<<"Your investment rate is $"<<setw(5)<<invRate<<endl;
    cout<<"Your salary is          $"<<setw(5)<<salary<<endl;
    cout<<"Your deposit is         $"<<setw(5)<<deposit<<endl;
    cout<<"Year      Date     Savings    Interest    Deposit";
    
}