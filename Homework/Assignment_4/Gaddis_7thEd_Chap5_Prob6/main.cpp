/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 10, 2015, 10:21 AM
 * Purpose: Homework
 */



//System Libraries 
#include <iostream> //Input/Output
#include <iomanip>  //For setw and setprecision

using namespace std;

//User Libraries 

//Global Constants 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables 
    unsigned short speed,      //The speed the user will input
                   time,       //The time the user took driving
                   distance,   //The total distance driver drove 
                   Max_tim;    //The time the user inputs 
    
   
    //Prompt User for speed and time 
    cout<<"Please enter the speed of your vehicle in MPH"<<endl;
    cin>>speed;
    cout<<"Please enter the amount of hours you have traveled"<<endl;
    cin>>Max_tim;
    cout<<"Hours    Distance Traveled"<<endl;
    cout<<"-----------------------------------"<<endl;
    
    
    for (time=1; time<=Max_tim; time++){
        //Calculate the distance traveled 
        distance=speed*time;
       
        //Display the time and distance traveled
    cout<<time<<"hour"<<"              "<<distance<<"miles"<<endl;
    }            

    return 0;
}

