/* 
 * File:   main.cpp
 * Author: Cindy
 * Purpose: Guijosa
 * Created on June 24, 2015, 12:53 AM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float quart, nquart, vquart; 
    quart=.25f;//How much a single quarter is worth
    cout<<"How many quarters?\n";
    cin>>nquart;//nquart is the number of quarters user enters
    vquart=quart*nquart;//vquart is the total value of the quarters
    float dimes, ndimes, vdimes;
    dimes=.10f;//How much a single dime is worth
    cout<<"How many dimes?";
    cin>>ndimes;//ndimes is the number of dimes the user enters
    vdimes=dimes*ndimes;//vdimes is the total value of dimes
    float nickel, nnickel, vnickel;
    nickel=.05f;//How much a single nickel is worth
    cout<<"How many nickels?";
    cin>>nnickel;//nnickel is the number of nickels the user enters
    vnickel=nickel*nnickel;//vnickel is the total value of nickels
    float totval;//total value of cents
    totval=vquart+vdimes+vnickel;
    cout<<"The total amount of money is $ "<<totval<<endl;
    //Output Value
    return 0;
}

