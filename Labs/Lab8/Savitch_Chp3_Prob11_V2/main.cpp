/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Approximate e^x with an infinite sequence
 * Created on July 2, 2015, 12:20 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float x=2.0f;//the x in e^x
    float ex=1.0f;//First term value in the exponential sequence
    float delt=1.0f;//Incremental value of each term in the sequence
    float tol=1e-7;//Determine accuracy for the approximation
    
    //Utilize a for loop to calculate e^x
    for(int term=1; delt<-tol||delt>tol; delt*=x/term, ex+=delt, term++){}   
    
    //Output the results
    cout<<fixed<<showpoint<<setprecision(15)<<endl;
    cout<<"Exact e("<<x<<")="<<exp(x)<<endl;
    cout<<"Approx e("<<x<<")="<<ex<<endl;
            
    //Exit Stage right
    return 0;
}