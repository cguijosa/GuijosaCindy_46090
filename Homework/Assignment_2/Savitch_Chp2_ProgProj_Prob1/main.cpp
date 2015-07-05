/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework; Calculate how many cans of soda a person can drink without dying
 * Created on July 5, 2015, 3:35 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    char ans;
    do
    {
        //Declare variables
        const float dieRat=0.001f; //Diet soda contains 1/10th of 1% artificial sweetener
        float mousWei=35.0f, mousLD=5.0f;//mouse weight is 35 grams, lethal dose is 5 grams
        unsigned short lbs;
        int perGram;
        float lethRat,lethDos, dieSG, canSoda;
        unsigned short soda=350;//One can of soda contains 350 grams

        //Calculations
        lethRat=mousLD/mousWei;//To calculate ratio of lethal dose in human
        dieSG=soda*dieRat;//To calculate how many grams of sugar diet soda contains 

        //Prompt and Input
        cout<<"What is the weight at which you will stop dieting?\n";
        cin>>lbs;

        //Calculations
        perGram=lbs*454;//To convert pounds to grams
        lethDos=perGram*lethRat;//To calculate the lethal dose 
        static_cast<float>(lethDos);
        canSoda=lethDos/dieSG;//How many cans of soda they can drink

        //Output
        cout<<setprecision(2)<<fixed;
        cout<<"The amount you can drink are "<<canSoda<<" cans of soda.\n";
        cout<<"Would you like to try again?\n";
        cout<<"Press y for yes and n for no.\n";
        cin>>ans;
    }while(ans=='Y'||ans=='y');     

    return 0;
}

