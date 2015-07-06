/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on July 5, 2015, 10:39 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    char day, Sa, Su;
    unsigned short min;
    float rate; //rate of call per minute
    float totPri, time;
    
    //Prompt and input
    cout<<"What time did the call start (24-hr notation)?\n";
    cout<<"How long was the call (in minutes)?\n";
    cout<<"What day of the week is the call made (Mo, Tu, We, etc)?\n";
    cin>>min;
    cin>>time;   
    cin>>day;
    
    if(day=='Sa' || day=='Su')
    {
        rate=0.15f;
        totPri=min*rate;
        cout<<"The cost of the call was "<<totPri<<endl;
    }
    else
    {
        if(time>8 && time<18)
        {
            
            rate=0.40f;
            totPri=min*rate;
            cout<<"The cost of the call was "<<totPri<<endl;
        }
        else
        {
            rate=0.25f;
            totPri=min*rate;
            cout<<"The cost of the call was "<<totPri<<endl;
        }
    }
    return 0;
}

