/* 
 * File:   main.cpp
 * Author: Cindy
 * Purpose: Guijosa
 * Created on June 24, 2015, 12:53 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>//To utilize setprecision to two decimal points
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare variables
    float quart, nquart; 
    float dimes, ndimes;
    float nickel, nnickel;
    float totval;
    
    //Initialize variables
    quart=.25f;//How much a single quarter is 
    dimes=.10f;//How much a single dime is worth
    nickel=.05f;//How much a single nickel is worth
    
    //Output and Input
    cout<<"How many quarters?\n";
    cin>>nquart;//nquart is the number of quarters user enters
    cout<<"How many dimes?\n";
    cin>>ndimes;//ndimes is the number of dimes the user enters
    cout<<"How many nickels?\n";
    cin>>nnickel;//nnickel is the number of nickels the user enters
     
    //Calculations
    totval=quart*nquart+dimes*ndimes+nickel*nnickel;//total value of cents
    
    //Output
    cout<<setprecision(2)<<fixed;
    cout<<"The total amount of money is $ "<<totval<<endl;
    
    return 0;
}

