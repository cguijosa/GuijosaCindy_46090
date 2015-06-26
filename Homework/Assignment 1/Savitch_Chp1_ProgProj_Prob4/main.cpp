/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework, Free Fall
 * Created on June 23, 2015, 12:05 PM
 */

//System Libraries
#include <iostream> //I/O Library

using namespace std;

/*
 * 
 */
const float GRAVITY=32.2174; //Acceleration due to Gravity
int main(int argc, char** argv) {
    //Declare Variables
    //distnce= the distance dropped in (ft)
    // time= time in (secs)
    float distnce, time;
    //Prompt then Input the time
    cout<<"To calculate the distance dropped"<<endl;
    cout<<"Input the time in seconds"<<endl;
    cout<<"Time Should be in floating point format\n";
    cin>>time;
    //Calculate the free fall distance
    distnce=GRAVITY*time*time/2;
    //Output results
    cout<<"The distance traveled = ";
    cout<<distnce<<"(ft)"<<endl;
    return 0;
}

