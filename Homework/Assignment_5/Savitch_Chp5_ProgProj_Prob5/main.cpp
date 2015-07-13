/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 11, 2015, 7:45 PM
 * Purpose: Homework
 */
 
//System Libraries
#include <iostream> 
#include <cmath>
 
using namespace std;
 
//User Libraries
 
//Global Constants
 
//Function Prototypes
void winchil(float, float, float);
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    float w, v, t;//w is windchill factor, v is velocity of the wind, t is temperature
 
    //input
    cout<<"This program will calculate windchill with respect to wind speed and temperature."<<endl;
    cout<<"Enter the wind speed 'v' in meters per second: "<<endl;
    cin>>v;
    cout<<"Enter the temperature in celcius: "<<endl;
    cin>>t;
 
    winchil(w, v, t);
 
    //Exit Stage Right!
 
    return 0;
}
 
/**********************************************************************************
 ************************************WINCHIL***************************************
 **********************************************************************************
 * Purpose: To calculate the wind chill factor
 * Input: velocity, temperature
 * Output: wind chill factor
 */
 
void winchil(float w, float v, float t){
    t<=10;
    w=13.12+0.6215*t-11.37*pow(v,0.16)+0.3965*t*pow(v,0.016);
    cout<<"The wind chill is: "<<w<<" degrees celsius."<<endl;
 
}
