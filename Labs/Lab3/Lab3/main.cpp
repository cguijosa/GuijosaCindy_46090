/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Lab
 * Created on June 24, 2015, 1:19 PM
 */

//System Libraries
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare Variables
    float ppgal;//ppgal is the price per gallon that the user inputs
    cout<<"What is the price per gallon?\n";
    cin>>ppgal;
    
    //Declare and Initialize Variables
    float fedTax, caExTax, caSaTax, tendPr, basePr, dBaTend, totTax, percTax;
    fedTax=.18;//fedTax is the federal tax per gallon
    caExTax=.38;//caExRax is the California Ex tax per gallon
    caSaTax=.08;//caSaTax is the California sales tax
    
    //Calculate Variables
    tendPr=ppgal-fedTax-caExTax;//tendPr is the Tender price 
    basePr=tendPr/(1.0f+caSaTax);//basePr is the base price
    dBaTend=tendPr-basePr;//dBaTend is the difference between the tender price and Base price
    totTax=dBaTend+fedTax+caExTax;//totTax is the total tax paid
    
    //Output Unknown
    cout<<"The total tax paid is "<<totTax<<endl;
    
    //Calculate 
    percTax=(totTax/ppgal)*100.0f;//percTax is the percentage of tax being paid
    
    //Output Unknown 
    cout<<"The total percentage in tax being paid is "<<percTax<<" %"<<endl;
    
    return 0;
}

