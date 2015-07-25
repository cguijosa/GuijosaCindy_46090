/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 22, 2015, 12:15 PM
 * Purpose: Create a function to read array and output true if they start with two and false if they do not
 */

//System Libraries 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototype 
int countNum2(int a[],int SIZE);
//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables 
    int c[10]={2,3,4,5,6,7,8,9,1};
    int b[10]={1,2,4,8,0,7,4,7,2};
    int e[5]={2,3,4,5,2};
    int d[7]={7,6,5,6,7,8,9};
    
    //Output if the array is true or false
    cout<<countNum2(c,10)<<endl;
    cout<<countNum2(b,10)<<endl;
    cout<<countNum2(e,5)<<endl;
    cout<<countNum2(d,7)<<endl;
 
    //Exit Stage Right!
    return 0;
}

/*********************************************
 *****************firstlast2******************
 *********************************************
 * Purpose:Scan through a series of arrays 
 *         and output true if they start or 
 *         end with 2 and false if they dont.
 * 
 * Input:
 *      a[]= Array
 *      SIZE=Size of array
 * Output:
 *      twoTrue=Whether or not if the number
 *              starts or ends with two
 * *******************************************
 * *******************************************
 */

int countNum2(int a[],int SIZE)
{
    int sum=0;
    
    for(int i=0;i<=SIZE;i++){
        
        if(a[i]==2){
            sum++; 
            
        }
    }
    return sum;
}