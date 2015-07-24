/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Approximate PI with a dart board
 * Created on July 2, 2015, 10:21 AM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
const double MXRND=pow(2,31)-1;

//Function Prototypes
float normal();//Normal Distribution
void filAray(float[],int);
void prntAry(const float[],int,int);
float max(float [],int);
float min(float [],int);
float mean(float [],int);
float stdev(float [],int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Plant random seed
    srand(static_cast<unsigned int>(time(0)));
    
    const int SIZE=1000;
    float array[SIZE];
            
    filAray(array,SIZE);
    
            
    cout<<"The max value in the array is "<<max(array,SIZE)<<endl;
    cout<<"The min value in the array is "<<min(array,SIZE)<<endl;
    cout<<"The mean value in the array is "<<mean(array,SIZE)<<endl;
    cout<<"The standard deviation value in the array is "<<stdev(array,SIZE)<<endl;
    //Exit stage right
    return 0;
}

/************************************************************************
 *                              Fill Array
 ************************************************************************
 * Purpose: To fill an array with 2 digit integer random numbers
 * Input:
 *      n->The size of the array
 * Input-Output:
 *      a->The integer array
 * Output: 
 */
void filAray(float a[],int n){
    //Loop on every element and equate to 2 digits
    for(int i=0;i<n;i++){
        a[i]=norm();//[10-99]
    }
}

/************************************************************************
 *                              Print Array
 ************************************************************************
 * Purpose: To print an float array with any number of columns 
 * Input:
 *      n->The size of the array
 *      a->The float array
 *      nCols->Number of columns to display the array
 * Output: 
 *      On Screen
 */

void prntAry(const float a[],int n,int nCols){
    //Format
    cout<<fixed<<showpoint<<setprecision(4);

    //Separate outputs with a line
     cout<<endl;
    //Loop and output every element in the array
    for(int i=0;i<n;i++){
        cout<<setw(8)<<a[i];
        //When column is reached go to the next line
        if ((i%nCols)==(nCols-1))cout<<endl;
    }
    cout<<endl;
    
}
/****************************************************************
 ****************Normal distribution Approximation***************
 * Output->Normal density function approximation
 *****************************************************************/
float normal(){
    //Declare variable
    float norm=0;//[-6,6]]
    //Loop 12 times
    for(int i=1;i<=12;i++){
        norm+=(rand()/MXRND-0.5);
    }
    //Exit and return the nor,
    return norm;
}

/************************************************************************
 *                              Max of Array
 ************************************************************************
 * Purpose: To find the max
 * Input:
 *      n->The size of the array
 *      a->The float array
 *     
 * Output: 
 *      maximum value
 */

float max(float a[],int n){
    //Declare variable and initialize
    float max=a[0];
    //Loop to find the maximum
    for(int i=1;i<n;i++){
        if(max<a[i])max=a[i];
    }
    return max;
}

/************************************************************************
 *                              Min of Array
 ************************************************************************
 * Purpose: To find the min
 * Input:
 *      n->The size of the array
 *      a->The float array
 *     
 * Output: 
 *      minimum value 
 */

float min(float a[],int n){
    //Declare variable and initialize
    float min=a[0];
    //Loop to find the maximum
    for(int i=1;i<n;i++){
        if(min>a[i])min=a[i];
        }
    return min;
    }

/************************************************************************
 *                              Mean of Array
 ************************************************************************
 * Purpose: To find the mean
 * Input:
 *      n->The size of the array
 *      a->The float array
 *     
 * Output: 
 *      mean value 
 */

float mean(float a[],int n){
    //Declare variable and initialize
    float mean=0;
    //Loop to find the maximum
    for(int i=0;i<n;i++){
        mean+=a[i];
        }
    return mean/n;
}

/************************************************************************
 *                      Standard Deviation of Array
 ************************************************************************
 * Purpose: To find the standard deviation
 * Input:
 *      n->The size of the array
 *      a->The float array
 *     
 * Output: 
 *      standard deviation value 
 */

float stdev(float a[],int n){
     //Declare variable and initialize
    float std=0,avg=mean(a,n);
    //Loop to find the maximum
    for(int i=0;i<n;i++){
        float amavg=(a[i]-avg);
        std+=amavg*amavg;
        }
    return sqrt(std/(n-1));
}