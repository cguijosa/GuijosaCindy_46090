/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on June 26, 2015, 4:49 PM
 */

//System Libraries
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare variables
    int numPods,peaPPod, totPeas;
    
    //Output and inputs
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    
    cin>>numPods;//The user inputs the number of pods
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peaPPod;//The user inputs the amount of peas per pod
    totPeas=numPods*peaPPod;//Total amount of peas
    cout<<"If you have ";
    cout<<numPods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peaPPod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<totPeas;
    cout<<" peas in all the pods.\n";
           
    return 0;
}

