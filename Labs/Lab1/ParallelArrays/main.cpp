/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Create Parallel arrays
 * Created on July 15, 2015, 12:14 PM
 */

//User Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int example(int,int &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short SIZE=11;
    unsigned short n[SIZE];
    unsigned short nsquar[SIZE];
    
    //Process the inputs
    cout<<"N  "<<setw(4)<<"N*N"<<endl;//Header
    cout<<"-----"<<setw(4)<<"-----"<<endl;
    for(int i=1;i<=SIZE-1;i++){
        n[SIZE]=i;
        nsquar[SIZE]=n[SIZE]*n[SIZE];
        cout<<n[SIZE]<<setw(5)<<nsquar[SIZE]<<endl;
    }

    return 0;
}


