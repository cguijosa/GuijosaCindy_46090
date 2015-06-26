/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on June 26, 2015, 5:53 PM
 */

//System libraries
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    //Declare variables 
    short rectWid, rectHei, fenLeng;
    
    //Outputs and inputs
    cout<<"What is the rectangles width in feet?\n";
    cin>>rectWid;//The rectangle width that the user chooses
    cout<<"What is the rectangles height in feet?\n";
    cin>>rectHei;//The rectangles height that the user chooses
    
    //Calculations
    fenLeng=rectWid*2+rectHei*2;//To find the length that the fence should be
    
    //Output
    cout<<"The length of the fence needed is "<<fenLeng<<" ft"<<endl;
    
    return 0;
}

