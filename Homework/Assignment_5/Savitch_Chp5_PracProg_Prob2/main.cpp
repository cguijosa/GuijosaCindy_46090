/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on July 11, 2015, 10:08 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes
unsigned short prompt(unsigned short &, unsigned short &);
float calc(unsigned short &, unsigned short &, float &, float &, int &);
void output(int &, float &);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables 
    unsigned short feet,
                   in;
    float meters,
          cm;
    int metersB;
    
    prompt(feet, in);
    calc(feet, in, meters, cm, metersB);
    output(metersB, cm);
    
    return 0;
}

unsigned short prompt(unsigned short &feet, unsigned short &in){
    cout<<"Input number of feet and number of inches (separated by a space)\n";
    cin>>feet>>in;
    return(feet, in);
}

/*****************************************************************
 * *************************calc***********************************
 * ***************************************************************
 * Purpose: To convert feet and inches to meters and centimeters
 * Input:   
 *         in->to convert to feet
 *         feet->to convert to meters
 * Output:
 *         metersB->The whole number of meters
 *         cm->centimeters to output
 * **************************************************************/

float calc(unsigned short &feet, unsigned short &in, float &meters, 
    float &cm, int &metersB){
    float totfeet=feet+(in/12.0f);//converting everything to feet
    meters=totfeet*0.3048f;//converting feet to meters
    metersB=(int)meters;//Taking off decimals
    float totmet=totfeet*0.3048f;
    cm=(totmet-metersB)*100;//Taking decimals of meters and converting that to cm   
    return(metersB, cm);
}

/*****************************************************************
 * *************************output********************************
 * ***************************************************************
 * Purpose: To output results
 * Input:   
 *         meters->conversion to meters
 *         cm->conversion to cm
 * **************************************************************/

void output(int &metersB, float &cm){
    cout<<setprecision(2)<<fixed;
    cout<<"This is the equivalent to "<<metersB<<" meters and "
            <<cm<<" cm \n";
}