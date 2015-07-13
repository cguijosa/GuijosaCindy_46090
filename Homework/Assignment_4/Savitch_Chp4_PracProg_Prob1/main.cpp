/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 12, 2015, 5:31 PM
 * Purpose: Homework
 */
 
//System Libraries
#include <iostream> 
#include <iomanip>
 
using namespace std;
 
//User Libraries
 
//Global Constants
 
//Function Prototypes
void conv(float &, float &, float &, float &);
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    float l, gal, mi, mpg;// l is liters, gal is gallons, mi is miles
    char ans;
 
    do{
 
    cout<<"Enter the amount of gasoline used in liters: "<<endl;
    cin>>l;
    cout<<"Enter the miles traveled: "<<endl;
    cin>>mi;
 
    conv(gal, l, mi, mpg);
 
    cout<<"Your car used "<<fixed<<showpoint<<setprecision(1)<<mpg<<" miles per gallon."<<endl;
 
    cout<<"Would you like to enter new values? y/n"<<endl;
    cin>>ans;
    }while(ans=='y'||ans=='Y');
 
    //Exit Stage Right!
 
    return 0;
}
 
/**********************************************************************************
 ************************************CONV***************************************
 **********************************************************************************
 * Purpose: to calculate miles per gallon
 * Input: liter, mile
 * Output: mpg
 */
 
void conv(float &gal, float &l, float &mi, float &mpg){
    gal=l*0.264179;
    mpg=mi/gal;
}
