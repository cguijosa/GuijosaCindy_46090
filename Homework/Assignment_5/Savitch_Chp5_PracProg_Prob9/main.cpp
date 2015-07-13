/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 12, 2015, 7:01 PM
 * Purpose: Homework
 */
 
//System Libraries
#include <iostream> 
#include <cmath>
 
using namespace std;
 
//User Libraries
 
//Global Constants
 
//Function Prototypes
void area(float &, float &, float &, float &, float &);
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    float tarea, perim, s, a, b, c;//tarea is the area, perim is perimeter, s is semiperimeter, and a, b, c are sides
    char ans;
 
    do{
 
    cout<<"This Program will calculate the area and perimeter of a triangle. "<<endl;
    cout<<"Enter side a: "<<endl;
    cin>>a;
    cout<<"Enter side b: "<<endl;
    cin>>b;
    cout<<"Enter side c: "<<endl;
    cin>>c;
 
    area(tarea, s, a, b, c);
 
    cout<<"The area of your triangle is: "<<tarea<<endl;
    cout<<"The perimeter of your triangle is: "<<s*2<<endl;
 
    cout<<"Would you like to enter new values? y/n"<<endl;
    cin>>ans;
    }while(ans=='y'||ans=='Y');
 
    //Exit Stage Right!
 
    return 0;
}
 
/**********************************************************************************
 ************************************AREA***************************************
 **********************************************************************************
 * Purpose: to calculate the area and perimeter of a triangle
 * Input: sides a, b, and c
 * Output: area and perimeter
 */
 
void area(float &tarea, float &s, float &a, float &b, float &c){
    s=(a+b+c)/2;
    tarea=sqrt(s*(s-a)*(s-b)*(s-c));
 
 
}