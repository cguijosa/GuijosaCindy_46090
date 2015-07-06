/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on July 4, 2015, 3:23 PM
 */

//System Libraries
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    
    //Declare variables
    int num1,num2;         
    
    //Prompt and input
    cout<<"Enter the 1st number"<<endl;
    cin>>num1;
    cout<<"Enter the 2nd number"<<endl;
    cin>>num2;
    
    //To output the maximum value
    if(num1>num2)
        cout<<num1<<" is the larger number between the two numbers"<<endl;
    else
        cout<<num2<<" is the larger number between the two numbers"<<endl;
    
    //To output the minimum value
    if(num1<num2)
        cout<<num1<<" is the smaller number between the two numbers"<<endl;
    else
        cout<<num2<<" is the smaller number between the two numbers"<<endl;
    
    //Exit Stage Right!
    return 0;
}

