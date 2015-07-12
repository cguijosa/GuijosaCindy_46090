/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework
 * Created on July 10, 2015, 5:06 PM
 */

//System Libraries
#include <iostream>
#include <iomanip> 
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes 
void hat(float &,float &);
void jacket(float &,float &,unsigned short &);
void waistIn(float &, unsigned short &);

//Execution Begins Here!
int main(int argc, char** argv) {
   //Declare variable
    char ans;
    
    //Loop to do again
    do
    {
        //Declare Variables
        float height,
              weight;
        unsigned short age;

        //Prompt and input
        cout<<"What is your height in inches?\n";
        cin>>height;    //Height of user
        cout<<"What is your weight (pounds)\n";
        cin>>weight;    //Weight of user
        cout<<"What is your age? (years)\n";
        cin>>age;       //age of user
        hat(weight, height);
        jacket(weight, height, age);
        waistIn(weight, age);
        cout<<"Would you like to try again?(y/n)\n";
        cin>>ans;
    }while(ans=='Y'||ans=='y');
    
    return 0;
}
/*****************************************************************
 * *************************hat***********************************
 * ***************************************************************
 * Purpose: To calculate hat size and output result
 * Input:   
 *         weight->weight of user
 *         height->height of user
 * Output:
 *         hatSiz->The hat size of the user
 * **************************************************************/
void hat(float &weight,float &height){
    float hatSiz=(weight/height)*2.9f;//To calculate hat size
    cout<<setprecision(2)<<fixed;
    cout<<"Your hat size is "<<hatSiz<<endl;
}

/*****************************************************************
 * *************************jacket********************************
 * ***************************************************************
 * Purpose: To calculate jacket size and output result
 * Input:   
 *         weight->weight of user
 *         height->height of user
 *         age->age of user
 * Output:
 *         jackSiz->The jacket size for user under 30 years old
 *         totjack->The jacket size for user over 30 years old
 * **************************************************************/

void jacket(float &weight,float &height, unsigned short &age){
    if(age<40){
      float jackSiz=(height*weight)/288.0f;
      cout<<setprecision(3)<<fixed;
      cout<<"Your jacket size is "<<jackSiz<<endl;
    }else{
      float jackSiz=(height*weight)/288.0f;
      float temp=(age-30.0f)/10.0f;//To calculate how many times I have to add 1/8th of an inch
      static_cast<int>(temp);//To get rid of decimals in between 10 years
      float totjack=jackSiz+(temp*0.125);//Adding 1/10 of an inch every 2 years
      cout<<setprecision(3)<<fixed;
      cout<<"Your jacket size is "<<totjack<<endl;
    }
}

/*****************************************************************
 * *************************waistIn********************************
 * ***************************************************************
 * Purpose: To calculate waist in inches and output result
 * Input:   
 *         weight->weight of user
 *         age->age of user
 * Output:
 *         waist->The waist size for user under 28 years old
 *         totwais->The jacket size for user over 28 years old
 * **************************************************************/

void waistIn(float &weight, unsigned short &age){
     if(age<30){
      float waist=weight/5.7f; 
      cout<<setprecision(3)<<fixed;
      cout<<"Your size of you waist in inches is "<<waist<<endl;
    }else{
      float waist=weight/5.7f; 
      float temp=(age-28.0f)/2.0f;//To calculate how many times I have to add 1/10th of an inch
      static_cast<int>(temp);//To get rid of decimal in between 2 years
      float totwais=waist+(temp*0.1f);//Adding 1/10 of an inch every 2 years
      cout<<setprecision(3)<<fixed;
      cout<<"Your size of you waist in inches is "<<totwais<<endl;
      
    }
}