/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on June 26, 2015, 4:13 PM
 */

//System Libraries
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    int intOne, intTwo, numSum, numProd;
    
    //Outputs and inputs
    cout<<"What is the first integer you want to utilize?\n";
    cin>>intOne;
    cout<<"What is the second integer you want to utilize?\n";
    cin>>intTwo;
    
    //Calculations 
    numSum=intOne+intTwo;//The sum of the two integers chosen
    numProd=intOne*intTwo;//The product of the two integers chosen
    
    //Output
    cout<<"The sum is "<<numSum<<" and the product is "<<numProd<<endl;
    
    return 0;
}

