/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Calculate factorial
 * Created on July 2, 2015, 12:09 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float fact=1;
    unsigned char n=6;
    
    //Loop and find the n!
    for(int i=1; i<=n; i++){
        fact*=i;
      
    }
    //Output the results
    cout<<static_cast<int>(n)<<"!="<<fact<<endl;
    
    //Exit Stage right
    return 0;
}