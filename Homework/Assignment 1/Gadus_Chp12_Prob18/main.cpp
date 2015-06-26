/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on June 23, 2015, 12:43 PM
 */

//System Libraries
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare and Initialize variables
    float cSurv, pEDrnks, pCDrnks, nEDrnks, nCDrnks; //cSurv are the number of people who took the customer survey
    cSurv=12467.0f;
    pEDrnks=.14f;//pEDrnks is the percent of those who drink energy drinks
    pCDrnks=.64f;//pCDrnks is the percent of those who prefer citrus flavor
    
    //Calculate results
    nEDrnks=cSurv*pEDrnks;//nEDrnks is the number of people who drink energy drinks
    nCDrnks=nEDrnks*pCDrnks;//nCDrnks is the number of people who prefer citrus flavor
    
    //Output results
    cout<<"The number of people who drink Energy drinks are "<<nEDrnks<<endl;
    cout<<"The number of people who prefer citrus flavor are "<<nCDrnks<<endl;
    
    return 0;
}

