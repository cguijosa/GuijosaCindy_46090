/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on July 24, 2015, 8:47 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //initialize array
    const int SIZE=12;
    float array[SIZE];
    
    //define variables
    float min,  //smallest value
          max,  //largest value
          sum=0,  //sum of all values
          avg;  //average of all values
    
    //user input of rainfall per month in inches
    cout<<"Enter the amount of rainfall in inches per month for "<<SIZE<<" months"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<"Month number "<<i+1<<endl;
        cin>>array[i];
    }
    
    //find the smallest and largest
    min=array[0];
    max=array[0];
    for(int j=0;j<SIZE;j++){
        if(array[j]<=min){
                min=array[j];
            }
        if(array[j]>=max){
                max=array[j];
            }
    }
    
    //find sum and average
    for(int k=0;k<SIZE;k++){
        sum+=array[k];
    }
    avg=sum/SIZE;
    
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Rainfall for the year is "<<sum<<" inches"<<endl;
    cout<<"Average rainfall for the year is "<<avg<<" inches"<<endl;
    cout<<"Max rainfall in any month is "<<max<<" inches"<<endl;
    cout<<"Min rainfall in any month is "<<min<<" inches"<<endl<<endl;
    return 0;
}

