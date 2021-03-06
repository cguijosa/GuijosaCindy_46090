/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 15, 2015, 9:14 PM
 * Purpose:  Given date output the day of the week
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
bool isLpYr(unsigned short);
int  gtMnVal(string,unsigned short);
int  gtYrVal(unsigned short);
int  gtCntVl(unsigned short);
string dayOfWk(string,short,unsigned short);
int  atoiLk(char []);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short year;
    string month;
    const int SIZE=4;
    char rday[SIZE];
    short nDay;
    
    //Input the date
    cout<<"Input date form of July 4, 2008"<<endl;
    cin>>month;
    cin>>rday;
    cin>>year;
    
    //Your day corresponding to the date is
    cout<<"Day = "<<dayOfWk(month,atoiLk(rday),year)<<endl;
    
    //Exit stage right!
    return 0;
}

//Change from asci code
int  atoiLk(char n[]){
    //Declare variable
    int number=n[0]-48;
    for(int i=1;i<=strlen(n)-2;i++){
        number=number*10+n[i]-48;
    }
    return number;
}

/*****************************************************************
 * *************************dayOfWk********************************
 * ***************************************************************
 * Purpose: To output the day of the week
 * Input:   
 *         mn-> month
 *         day->day user input
 *         yr->year user input
 * Output:
 *         numDay->Day of the week
 * **************************************************************/
string dayOfWk(string mn,short day,
        unsigned short yr){
    //Declare Variable
    char numDay=(day+gtMnVal(mn,yr)+
                gtYrVal(yr)+gtCntVl(yr))%7;
    //Return the day of the week
    switch(numDay){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Saturday";
        default:{
            cout<<"Bad Day"<<endl;
            return "Sunday";
        }
    }
}

/*****************************************************************
 * *************************gtCntV1********************************
 * ***************************************************************
 * Purpose: To output the day of the week
 * Input:   
 *        year->The year that he user inputs
 * **************************************************************/

int  gtCntVl(unsigned short year){
    return 2*(3-year/100%4);
}

/*****************************************************************
 * *************************gtYrVal********************************
 * ***************************************************************
 * Purpose: To output the day of the week
 * Input:   
 *         year->The year the user input
 * **************************************************************/

int  gtYrVal(unsigned short year){
    //return the results
    return year%100+year%100/4;
}

/*****************************************************************
 * *************************gtMnVal********************************
 * ***************************************************************
 * Purpose: To check which months have a possibility of a leap year
 * Input:   
 *         mn-> month user inputs
 *         year->year user inputs
 * **************************************************************/

int  gtMnVal(string month,unsigned short year){
    if(month=="January"){
        if(isLpYr(year))return 6;
        return 0;
    }else if(month=="February"){
        if(isLpYr(year))return 2;
        return 3;
    }else if(month=="March"){
        return 3;
    }else if(month=="April"){
        return 6;
    }else if(month=="May"){
        return 1;
    }else if(month=="June"){
        return 4;
    }else if(month=="July"){
        return 6;
    }else if(month=="August"){
        return 2;
    }else if(month=="September"){
        return 5;
    }else if(month=="October"){
        return 0;
    }else if(month=="November"){
        return 3;
    }else if(month=="December"){
        return 5;
    }else{
        cout<<"This is not possible"<<endl;
        return -1;
    }
}

/******************************************************
 ***************** isLpYr *****************************
 ******************************************************
 * Purpose:  To determine if the year is a leap year
 * Input:
 *      year->Years associated with AD
 * Output:
 *      bool->True if leap year || False if not a leap year
 */
bool isLpYr(unsigned short year){
    return ((year%400==0)||((year%4==0)&&!(year%100==0)));
}

