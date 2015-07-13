/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on July 11, 2015, 11:49 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes 
void input(unsigned short &, unsigned short &);
void conv(unsigned short &, unsigned short &, unsigned short &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char ans;
    //Loop to repeat
    do{
    //Declare variables 
    unsigned short twHour;
    unsigned short hh,mm;
    input(hh,mm);
    conv(hh, mm, twHour);
    cout<<"Would you like to repeat? (y/n)\n";
    cin>>ans;
    }while(ans=='Y' || ans=='y');
    return 0;
}

/*****************************************************************
 * ************************input**********************************
 * ***************************************************************
 * Purpose: To prompt for input
 * Input:   
 *         hh->hours user inputs
 *         mm->minutes user inputs
 * **************************************************************/

void input(unsigned short &hh,unsigned short &mm){
    cout<<"What is the time in 24 hour notation? (ex: 14:20)\n";
    cin>>hh;
    cin.ignore();//To ignore the colons in time the user inputs
}
    
/*****************************************************************
 * *************************conv**********************************
 * ***************************************************************
 * Purpose: To convert 24 hour notation to 12 hour notation
 * Input:   
 *         hh->to convert to 12 hr
 *         mm->use same number of mins
 * Output:
 *         twHour->Twelve hour notation
 *         mm->output of minutes
 * **************************************************************/

void conv(unsigned short &hh, unsigned short &mm, unsigned short &twHour){
    if(hh<12){
        twHour=hh;
        if(mm<10){
            cout<<"In 12 hour notation it is "<<twHour<<":0"<<mm<<" AM "<<endl;//Zero doesn't show up otherwise
        }else{
        cout<<"In 12 hour notation it is "<<twHour<<":"<<mm<<" AM "<<endl;
        }
    }else{
        twHour=hh-12;//anything over 12 subtracts 12 for 12-hour notation
        if(mm<10){
            cout<<"In 12 hour notation it is "<<twHour<<":0"<<mm<<" PM "<<endl;//Zero doesn't show up otherwise
        }else{
        cout<<"In 12 hour notation it is "<<twHour<<":"<<mm<<" PM "<<endl; 
        }
    }
}

