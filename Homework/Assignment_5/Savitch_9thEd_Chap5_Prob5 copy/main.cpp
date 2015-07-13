/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Created on July 10, 2015, 7:06 PM
 * Purpose: Homework
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;  //std namespace --> iostream

//User Libraries

//Global constants

//Function Prototypes
void   weight(int &);
float  convsn(int &,int &,float &,float &);
float  results(int &,int &,float &,float &,char &);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int   pounds,       //User inputs weight in Pounds (lbs)
          ounces;       //User inputs weight in ounces (oz)
    float kilogrm,      //Converted from above         (kg)
          grams;        //Converted from above         (g)
    char  again='Y';    //To ask if user want to do the loop again
    
    //Loop to ask user if they would like to repeat program
    while(again=='y'||again=='Y'){
        cout<<fixed<<showpoint<<setprecision(2);
        //Call weight function
        weight(pounds);
        //Call Conversion Function
        convsn(pounds,ounces,kilogrm,grams);
        //Call results Function
        results(pounds,ounces,kilogrm,grams,again);
        }
    
    //Exit Stage Right
    return 0;
}

/***************************************************************
 ************************* weight ******************************
 ***************************************************************
 * Purpose: Ask user for their weight in pounds (lbs)
 * Input  :
 *          pounds
 * Output : 
 *          
 */
void weight(int &pounds){
    //Ask for inputs of weight in pounds and ounces then convert
    cout<<"Please enter how much you weigh in pounds (lbs)"<<endl;
    cin>>pounds;
}

/***************************************************************
 ************************* convsn ******************************
 ***************************************************************
 * Purpose: Convert pounds to ounces, kilograms and grams
 * Input  :
 *          
 * Output : 
 *          
 */
float convsn(int &pounds,int &ounces,float &kilogrm,float &grams){
    //Conversion from pounds to ounces, kilograms and ounces.
    ounces=pounds*16;
    kilogrm=pounds/2.2046f;
    grams=kilogrm*1000;
}

/***************************************************************
 ************************* results *****************************
 ***************************************************************
 * Purpose: Output the results and ask user if 
 *          they would like to do the program again.
 * Input  :
 *          again
 * Output : 
 *          pounds, ounces, kilograms, grams
 */
float results(int &pounds,int &ounces,float &kilogrm,
              float &grams,char &again){
    //Output results
    cout<<"Okay, you weigh:\n"<<pounds<<" pounds,\n"
        <<ounces<<" ounces,\n"<<kilogrm<<" kilograms,\nand "
        <<grams<<" grams."<<endl;
    cout<<endl;
    cout<<"Would you like to do it again? (y/n)"<<endl;
    cin>>again;
}