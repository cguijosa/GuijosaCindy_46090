/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Lab 4
 * Created on June 25, 2015, 12:22 PM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    //Declare and Initialize variables 
    float usCrime, ukCrime, usPop, ukPop, usPerc, ukPerc;
    usCrime=11.88e6;//US number of violent crimes  
    ukCrime=6.52e6;//UK number of violent crimes
    usPop=318e6;//UK population
    ukPop=64.1e6;//UK population
    
    //Calculations
    usPerc=(usCrime/usPop)*100.0f;//US percentage of violence
    ukPerc=(ukCrime/ukPop)*100.0f;//UK percentage of violence
    
    //Output
    cout<<setprecision(2)<<fixed;
    cout<<setw(6)<<"The percentage of violence in the US is "<<usPerc<<endl;
    cout<<setw(6)<<"The percentage of violence in the UK is "<<ukPerc<<endl;
    
    return 0;
}

