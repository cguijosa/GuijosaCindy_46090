/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework; calculate new annual salary with pay increase 
 * Created on July 5, 2015, 5:34 PM
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
    char ans;
    
    do
    {
        //Declare variables
        const float payInc=0.076f;//To represent the pay increase of 7.6%
        float annuPay, newAPay;
        char months=6;//The duration of pay increase
        float monPay, incPerM, newMPay, newMTot, noPInc, retPay;

        //Prompt and Input
        cout<<"What was your previous annual salary?\n";
        cin>>annuPay;

        //Calculations
        monPay=annuPay/12.0f;//To calculate monthly pay before pay increase
        incPerM=monPay*payInc;//To calculate the amount increased per month
        newMPay=monPay+incPerM;//New monthly payment
        newMTot=newMPay*months;//New total for duration of pay increase
        noPInc=monPay*6.0f;//Total for duration pay increase isn't applied
        newAPay=newMTot+noPInc;//New annual pay
        retPay=newAPay-annuPay;//amount of retroactive pay due

        //Output
        cout<<setprecision(2)<<fixed;
        cout<<"Your new annual salary is: "<<setw(5)<<newAPay<<endl;
        cout<<"Your new monthly salary is: "<<setw(5)<<newMPay<<endl;
        cout<<"The amount of retroactive pay due is"<<setw(8)<<retPay<<endl;
        cout<<"Would you like to try again, ";
        cout<<"type y for yes and n for no.\n";
        cin>>ans;
                
    } while(ans=='y'|| ans=='Y');
    
    return 0;
}

