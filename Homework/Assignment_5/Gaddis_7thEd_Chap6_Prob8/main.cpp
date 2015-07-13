/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 12, 2015, 10:40 AM
 * Purpose: Homework
 */

//Ststem Libraries
#include <iostream>  //Input/Output
#include <cstdlib>   //Random Number generator 
#include <ctime>     //For real random numers each time 

using namespace std;

//User Libraries
int cointoss (void)
{
    int randnum;
    randnum = 1 + rand()%2;
    return randnum;
}

//Global Constants

//Function Prototypes

//Executin Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables 
    int num1 = 0;
    int randnum = 0;
    string headtail = "";
 
    //Prompt user how many time should the coin be tossed
    cout<<"How many times would you like to toss the coin?"<<endl;
    cin>>num1;
    
    srand((time(0))); //Seeding the random number generator
    
    for(int i =1;i <=num1; i++) 
    {
        randnum = cointoss();
        if (randnum == 1)
            headtail = "Head";
        else
            headtail= "Tail";
        
        cout<<headtail<<endl;
    }              
      
    


    

    return 0;
}

