/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: 
 * Created on July 14, 2015, 12:11 PM
 */

//User Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants


//Function Prototypes
int example(int,int &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=13;
    int table[SIZE][SIZE];
    
    int a,b;
    
    //Loop to build
    for(a=1;a<SIZE;a++){
        for(b=1;b<SIZE;b++){
            table[a][b]=a*b;
        }
    }
    
    //Loop to display
    for(a=1;a<SIZE;a++){
        for(b=1;b<SIZE;b++){
            cout<<table[a][b]<<" ";
        }
        cout<<endl;
    }
    
    
    //Exit Stage Right
    return 0;
}



