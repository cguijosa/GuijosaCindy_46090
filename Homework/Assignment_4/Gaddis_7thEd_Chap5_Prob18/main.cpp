/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 10, 2015, 11:30 AM
 * Purpose: Homework 
 */

//System Libraries 
#include <iostream> //Input/Output
#include <cstdlib>  //For Random Numbers 
#include <ctime>    //For real Rand number 

using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here!!
int main(int argc, char** argv) {
    
    //Declare Variables 
    unsigned short num,
                   y =0;
    srand(unsigned (time(0)));
    y= (rand()%19)+1;
 
            
            
    
    //Prompt user instruction
    cout<<"This program Generates a random number."<<endl;
    cout<<"You must guess what that number is."<<endl;
    cout<<"What is your guess between 1 and 20"<<endl;
    
    
    do{
        cin>>num;
        if (num>y)
            cout<<"Sorry that number is to high try again"<<endl;
        else if (num<y)
            cout<<"Sorry that number to small try again."<<endl;
        else if (num==y)
            cout<<"Congrats Your Guess was correct"<<endl;
    }while (num!=y);
    
    

    return 0;
}

