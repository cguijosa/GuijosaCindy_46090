/* 
 * File:   main.cpp
 * Author: Cindy Guijosa 
 * Purpose: Homework 
 * Created on July 6, 2015, 8:08 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std; 


int main(int argc, char** argv) {
    
    //Declare variables
    unsigned short num1,       //The number of cookies ate 
                   stdcal=300;     //The standard 
    float          calorie;   //The calories consumed by person
    
    //Prompt and input
    cout<<"Please enter the number of cookies you consumed "<<endl;
    cin>>num1;
    
    //Calculations
    calorie=(stdcal*num1)3.0f;
    
    //Output
    cout<<"The number of calories you consumed is = "<<calories<<endl;
  
    return 0;
}

