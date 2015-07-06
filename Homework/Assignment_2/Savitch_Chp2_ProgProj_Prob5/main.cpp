/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework; room capacity 
 * Created on July 5, 2015, 7:41 PM
 */

//System Libraries 
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    char ans;
    
    //Loop
    do
    {    
        //Declare variables
        unsigned short roomCap, numPpl;

        //Prompt and input
        cout<<"What is the maximum room capacity?\n";
        cin>>roomCap;
        cout<<"What is the number of people attending the meeting?\n";
        cin>>numPpl;

        //If else statement
        if(roomCap>=numPpl)
        {    
            unsigned short morePpl;
            morePpl=roomCap-numPpl;//How many more people can attend
            cout<<"It is legal to hold the meeting.\n"
                <<morePpl<<" more people may legally attend.\n";
        }
        else if(roomCap<numPpl)
        {
            unsigned short tooMany;
            tooMany=numPpl-roomCap;//Tells how many people need to be excluded
            cout<<"The meeting cannot be held as planned due to fire regulations.\n"
                <<tooMany<<" people must be excluded to meet regulations.\n";         
        }
        cout<<"Would you like to try again? For yes press y for no press n.\n";
        cin>>ans;
    }
    while(ans=='y' || ans=='Y');    
    
    return 0;
}

