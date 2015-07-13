/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 9, 2015, 11:53 PM
 * Purpose: Homework
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; //std namespace --> iostream

//User Libraries

//Global constants

//Function Prototypes
void bmr(unsigned short &,float &);
void pAct(unsigned short,unsigned short,
           unsigned short &,float &);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    unsigned short weight;  //User inputs their weight
    unsigned short intsty;  //User inputs the intensity for physical activity 
    unsigned short minute;  //The amount of time they are exercising 
    float          bmrCal;  //Calories needed to maintain Basal Metabolic Rate
    float          pAcCal;  //Calories needed during Physical Activity
    float          edfCal;  //Calories needed for energy to digest food
    float          totCal;  //Total Calories consumed by eating their favorite food
    float          serSize; //Servings that should be eaten per day 
    
    //Call bmr function 
    bmr(weight,bmrCal);
    
    //Call pAct function
    pAct(minute,intsty,weight,pAcCal);
    
    //Energy to digest food and serving size 
    cout<<"We are almost done! Now I need you to enter "
          "the calories in your\nfavorite food."<<endl;
    cin>>totCal;
    cout<<endl;
    edfCal=totCal*0.1f;
    cout<<"The energy required to digest this amount"
          " of calories is "<<edfCal<<endl;
    cout<<endl;
    serSize=(bmrCal+pAcCal+edfCal)/totCal;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Okay if we add up all the calories needed to maintain "
          "your current\nweight using what we found in your Basal "
          "Metabolic Rate, Physical\nActivity, and Energy needed "
          "to digest food we can conclude that the\namount of servings "
          "of your favorite food is\n= "<<serSize<<" servings per day"<<endl;
    
    //Exit Stage Right!
    return 0;
}

/***************************************************************
 ************************* bmr *********************************
 ***************************************************************
 * Purpose: To find the Basal Metabolic Rate
 * Input  :
 *          weight
 * Output : 
 *          bmrCal
 */
void bmr(unsigned short &weight,float &bmrCal){
    //Prompt user for their weight 
    cout<<"Please enter the amount you weigh in (lbs)"<<endl;
    cin>>weight;
    cout<<endl;
    //Calculations
    bmrCal=70*pow(weight/2.2,.756);
    //Output Basal Metabolic Rate
    cout<<"The amount of calories needed to maintain your "
          "Basal Metabolic Rate is ="<<bmrCal<<"calories"<<endl;
    cout<<endl;
}

/***************************************************************
 ************************* pAct ********************************
 ***************************************************************
 * Purpose: To find the calories needed during Physical Activity
 * Input  :
 *          minute,intsty
 * Output : 
 *          pAcCal
 */
void pAct(unsigned short minute,unsigned short intsty,
           unsigned short &weight,float &pAcCal){
    //Find Calories needed for Physical Activity
    cout<<"Okay now enter the time spent for any physical activity"
          " in minutes and the intensity at which you exercise.\n";
    cout<<"For example the intensity from 1-17 is equal to 1 being "
          "Walking,\n8 being Basketball, 10 being Running 6 mph,"
          " and 17 being Running\n10 mph."<<endl;
    cout<<"Okay now enter the amount of time spent exercising."<<endl;
    cin>>minute;
    cout<<endl;
    cout<<"Awesome, now I also need you to enter the intensity at "
          "which you\nexercise."<<endl;
    cin>>intsty;
    cout<<endl;
    //Calculations
    pAcCal=.0385*intsty*weight*minute;
    //Output Calories needed for Physical Activity 
    cout<<"The amount of calories needed to exercise at that "
          "intensity and amount of time is\n="<<pAcCal<<"calories"<<endl;
    cout<<endl;
}