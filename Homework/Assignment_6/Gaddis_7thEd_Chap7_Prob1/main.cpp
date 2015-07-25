/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 22, 2015, 12:33 PM
 * Purpose: Homework
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries 

//Global Constants 

//Functions Prototypes 

//Executions begins here!!
int main(int argc, char** argv) {
    //Declare Variables 
    const int ROWS=3;
    const int COLS=7;
    int table[ROWS][COLS];
    int     food;
    
    //Prompt user for Data 
    cout<<"Please input the amount of food the Monkey's ate in pounds from"<<endl;
    cout<<"Monday-Sunday"<<endl;
    //cin>>food1,food2,food3,food4,food5,food6,food7;
    for (int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            cout<<"Insert amount of food in pounds for monkey"<<i+1<<" on day "<<j+1<<"\n";
            cin>>table[i][j];
            cout<<"\n";
        }
    }
    
     cout<<"           Mon    Tues   Wed    Thurs  Fri    Sat    Sun"<<endl;
    cout<<"          ------------------------------------------------"<<endl;
    
    for(int i=0;i<ROWS;i++){
       // cout<<table[i][0]<<endl;
        cout<<"Monkey "<<i+1<<"  |";
        for(int j=0;j<COLS;j++){
            cout<<left<<setw(5)<<table[i][j]<<"  ";
            
        }
        cout<<endl;
    }
    
    int high;
    high=table[0][0];
    for(int i = 0; i<ROWS;i++){
        for(int  j = 0; j<COLS;j++){
            if(table[i][j]>high)
                high=table[i][j];
        }
    }
    
        int low;
    low=table[0][0];
    for(int i = 0; i<ROWS;i++){
        for(int  j = 0; j<COLS;j++){
            if(table[i][j]<low)
                low=table[i][j];
        }
    }
    
    
    
    cout<<endl;
    cout<<"the maximum amount of food consumed by a monkey is "<<high<<"lb"<<endl;
    cout<<endl;
    cout<<"The minimum amount of food consumed by a monkey is "<<low<<"lb"<<endl;
    

    return 0;
}

        