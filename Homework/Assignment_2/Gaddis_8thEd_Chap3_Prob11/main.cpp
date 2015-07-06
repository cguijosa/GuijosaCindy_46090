/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on July 6, 2015, 7:00 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std; 


int main(int argc, char** argv) {
    
    //Declare variables
    float   dollar,     //The variable associated with US dollars 
            yen,        //The conversion from US currency to Japanese 
            euro;       //The conversion variable from US to European 
    
    //Initialize variables 
    yen=122.41;
    euro=.91;
    
    //Prompt and input
    cout<<setprecision(2)<<fixed;
    cout<<"Please enter the amount of U.S dollars You wish to convert \n";
    cin>>dollar;
    
    //Calculations
    yen=(122.41*dollar);
    euro=(.91*dollar);
    
    //Output
    cout<<"The conversion from U.S dollars to Japanese yen you entered is =\n";
        <<yen<<endl;
    cout<<"The conversion from U.S dollars to European euros you entered is =\n";
        <<euro<<endl;
             
    return 0;
}

