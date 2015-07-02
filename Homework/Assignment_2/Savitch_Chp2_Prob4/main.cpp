/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework Chp 2 Programming Project
 * Created on July 1, 2015, 1:09 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    char ans;
    do
    {    
        //Declare Variables
        unsigned int monCons, percInt;
        float intRate, faceVal, years, monPay;

        //Prompt and Input
        cout<<"How much money do you need to recieve?\n"; 
        cin>>monCons;
        cout<<"What is the interest rate?\n";
        cin>>percInt;
        cout<<"What is the duration of the loan in years?\n";
        cin>>years;

        //Calculations
        intRate=percInt/100.0f;
        faceVal=monCons/(1.0f-intRate*years);
        monPay=faceVal/(years*12.0f);
        //Output
        cout<<setprecision(2)<<fixed;
        cout<<"The face value required is:  $"<<setw(5)<<faceVal<<endl;
        cout<<"Your monthly payment is:     $"<<setw(5)<<monPay<<endl;
        cout<<"Would you like to try again? Type Y for yes or N for no.\n";
        cin>>ans; 
    }while(ans=='Y' || ans=='y');
      
    return 0;
}

