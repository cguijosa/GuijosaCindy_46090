/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 24, 2015, 8:14 PM
 * Purpose: Homework
 */

#include <iostream>


using namespace std;
//User Libraries 

//Global Constants 

//Function Prototypes
int linsch (const int [], int, int);


//Execution begins Here!!

int main(int argc, char** argv) {
    int results;
    int num;
    const int SIZE = 18;
    int acc_num[SIZE] ={5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                           8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                           1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    
    //Prompt user for Account number 
    cout<<"Please enter the charge account number"<<endl;
    cin>>num;
    
    //Search Array for account number 
    results=linsch(acc_num,SIZE,num);
    
    //If search list returned -1, then the account number entered was not found
    if(results == -1)
        cout<<"The Account Number you entered is invalid"<<endl;
    else{
        //Otherwise the account number entered is in the Array
        cout<<"The number entered is Valid"<<endl;
        cout<<"Account #" <<(results + 1)<<endl;
        
        
    }

                    
    

    return 0;
}

int linsch (const int list[], int numelems, int value)
{
    int index = 0;        //Used a subscript to search the array from start
    int pos = -1;         //To record position of search value
    bool found=false;     //Flag to indicate if the value was found and exit.
    
    while (index < numelems && !found){
        
        if (list[index] == value){        //If the value is found
    
                found = true;            //setting the flag
                pos = index;             //Record the values subscript
        }
        index++;                         //Go to next element
    }
    return pos;                     //Return the position, or -1
}
