/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on July 24, 2015, 8:55 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void ftion(int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //initialize array
    const int SIZE=10;
    int array[SIZE]{7,100,68,4,11,22,53,88,15,72};
    
    //declare variables
    int number;
    
    //user input
    cout<<"Enter a number between 1 and 100"<<endl;
    cin>>number;
    
    //call function
    ftion(array,SIZE,number);
    return 0;
}

void ftion(int a[],int s,int n){
    cout<<endl<<"numbers larger than the number you put in are:"<<endl;
    for(int i=0;i<s;i++){
        if(a[i]>n){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl<<endl;
}