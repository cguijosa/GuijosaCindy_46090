/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on June 26, 2015, 3:42 AM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    char a;
    
    //Output
    cout<<"What letter would you like to select?\n";
  
    //User input 
    cin>>a;
    
    //Output
    cout<<setw(6)<<a<<a<<a<<endl;
    cout<<setw(5)<<a<<setw(4)<<a<<endl;
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<a<<endl;
    cout<<setw(5)<<a<<setw(4)<<a<<endl;
    cout<<setw(6)<<a<<a<<a<<endl;
    return 0;
}

