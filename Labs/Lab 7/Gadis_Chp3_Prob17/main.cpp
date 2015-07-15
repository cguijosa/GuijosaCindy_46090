/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Calculate interest rate
 * Created on July 1, 2015, 11:03 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    unsigned char nMonths=36;//Num of months to payoff loan
    unsigned short loan=10000;//Loan amount is $'s
    float intRate=0.01f;//Interest rate per month
    float temp=1.0f;//intermediate value found in monthly payment equation
    float monPay;//Monthly payment in $'s
    float cstLoan;//Cost of the loans in $'s
    float totCost;//Total paid back to lender
    
   //Calculations
    float onePlsi=(1+intRate);
    for(int months=1; months<=nMonths; months++){
        temp*=onePlsi;
    }
    
    //Calculate monthly payment
    monPay=intRate*temp*loan/(temp-1);
    int imnthPay=monPay*100;//Exact amount in pennies
    monPay=imnthPay/100.0f;
    totCost=nMonths*monPay;
    cstLoan=totCost-loan;
   
   //Output
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout<<"Loan Amount:       $"<<setw(8)<<loan*1.0f<<endl;
   cout<<"Monthly Interest Rate:"<<setw(6)<<intRate*100<<"%"<<endl;
   cout<<"Number of Payments: "<<setw(8)<<static_cast<int>(nMonths)<<endl;
   cout<<"Monthly Payment:    "<<setw(8)<<monPay<<endl;
   cout<<"Amount Paid Back   $"<<setw(8)<<totCost<<endl;
   cout<<"Interest Paid:     $"<<setw(8)<<cstLoan<<endl;

    return 0;
}

