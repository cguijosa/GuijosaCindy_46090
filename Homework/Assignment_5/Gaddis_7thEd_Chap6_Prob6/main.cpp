/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 12, 2015, 9:51 AM
 * Purpose: Homework
 */


//System Libraries 
#include <iostream>
#include <cmath>
using namespace std;
//User libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables 
    unsigned int mass,     //Variable associated with and objects mass
                 vecty;    //Variable associated with and objects velocity
    float        Ke;       //The kinetic energy of the object
    char         again;    //The character choice to re-do the program 
    
    //Initialize Variable 
   
    
    //Prompt User for mass and speed of an object 
    do {
    cout<<"Please enter the mass of the object in Kg"<<endl;
    cin>>mass;
    cout<<"Please enter the velocity of the object in Meter/second."<<endl;
    cin>>vecty;
    Ke=(0.5f)*(mass*(vecty*vecty));
    cout<<"The kinetic energy of the object is ="<<" "<<Ke<<"Jouls"<<endl;
    
    //Dose the user want to calculate another objects Kinetic Energy?
    cout<<"Would you like to find the KInetic energy of another object (Y/N)?"<<endl;
    cin>>again;
    
    }while (again=='Y' || again=='y');
        
        
    

    return 0;
}

