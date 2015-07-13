/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on July 12, 2015, 3:30 PM
 */
 
//System Libraries
#include <iostream> 
#include <cstdlib>
#include <cmath>
 
using namespace std;
 
//User Libraries
 
//Global Constants
float const G=6.673e-8;//gravitational constant (cm^3/(g*s^2))
 
//Function Prototypes
void gravity(float &, float &, float &, float &);//double used for large masses and distances
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    float f, m1, m2, d;//f is the gravitational force, m1 & m2 are masses, d is distance between the 2 masses
    char ans;
    
    //Loop to repeat
    do{
 
    //input
    cout<<"This program will find the gravitational force for 2 masses.\n";
    cout<<"Enter the first mass in kilograms: \n";
    cin>>m1;
    cout<<"Enter the second mass in kilograms: \n";
    cin>>m2;
    cout<<"Enter the distance between the two masses in meters: \n";
    cin>>d;
 
    gravity(f, m1, m2, d);
 
    cout<<"Would you like to enter new values? y/n"<<endl;
    }while(ans=='y' || ans== 'Y');
 
 
 
 
    //Exit Stage Right!
 
    return 0;
}
 
/**********************************************************************************
 ************************************GRAVITY***************************************
 **********************************************************************************
 * Purpose: To calculate the gravitational force between 2 bodies
 * Input: mass 1, mass 2, distance between
 * Output: gravitational force
 */
 
void gravity(float &f, float &m1, float &m2, float &d){
    f=((G*m1*m2)/(d*d));
    cout<<"The gravitational force of the two masses is: "<<f<<endl;
}