/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: How many candy bars can I eat per day without gaining weight
 * Created on June 30, 2015, 12:18 PM
 */

//System Libraries
#include <fstream>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short wtLb, htInch, ageYrs, bmr;
    unsigned char nChcBar, calChoc=230;
    char sex;
    ifstream input;
    
    //Loop as long as we have data
    input.open("bmr.dat");
    //Exhuast the data in the file
    while( input>>sex>>wtLb>>htInch>>ageYrs){
        if(sex=='F'){
            bmr=655+4.3*wtLb+4.7*htInch-4.7*ageYrs;
            
        }else{
            bmr=66+6.3*wtLb+12.9*htInch-6.8*ageYrs;
        }
        //What is the equivalent number of chocolate bars
        nChcBar=bmr/calChoc;
        //Output the results
        cout<<"Sex = "<<sex<<endl;
        cout<<"Wt = "<<wtLb<<"(lbs)"<<endl;
        cout<<"Ht = "<<htInch<<"(inches)"<<endl;
        cout<<"Age = "<<ageYrs<<"(years)"<<endl;
        cout<<"Your BMR = "<<bmr<<"(cal)"<<endl;
        cout<<"The number of candy bars you may consume = "<<nChcBar<<endl
                <<static_cast<int>(nChcBar)<<endl;
        cout<<endl<<endl;   
    }     
    return 0;
}

