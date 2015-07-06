/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on July 3, 2015, 10:22 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std; 


int main(int argc, char** argv) {
    
    //Declare Variables
    float exer,   //User enters how many exercises they have done
          sR,     //Score received on exercise
          pos,    //Total Points received on exercise
          scr,    //Score received on exercise added up
          totScr, //Percentage received on average of exercises 
          totPnt; //Total Points received on exercise added up
    
    //Ask for amount of exercises
    cout<<"How many exercises? ";
    cin>>exer;
    
    //Loop to find score for amount of exercises
    for(int i=0;i<exer;i++){
        //Process
        cout<<"Score received for exercise: ";
        cin>>sR;
        scr+=sR;
        cout<<"Total points possible for exercise: ";
        cin>>pos;
        totPnt+=pos;
        cout<<endl;
    }
    //Output results
    totScr=(scr/totPnt)*100;
    cout<<fixed<<setprecision(2);
    cout<<"Your total is "<<scr<<" out of "<<totPnt<<", or "<<totScr<<"%"<<endl;
    
    return 0;
}

