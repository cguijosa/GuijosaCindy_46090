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


//Function Prototypes
void filAray(char[],int);
void prntAry(const char[],int,int);
int grade(char[],char[],char[],int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Plant random seed
    srand(static_cast<unsigned int>(time(0)));
    
    const int SIZE=20;
    char qstns[SIZE], answrs[SIZE], rhtwrg[SIZE] ;
;
    
    //Initialize the array
    filAray(qstns,SIZE);
    filAray(answrs,SIZE);
    
    //Grade the test
    int score=grade(qstns,answrs,rhtwrg,SIZE);
            
    //Output the initial array
    cout<<"The Test Question Solutions"<<endl;
    prntAry(qstns,SIZE,5);
    cout<<"The Test Question Answers"<<endl;
    prntAry(answrs,SIZE,5);
    cout<<"The scores received"<<endl;
    prntAry(rhtwrg,SIZE,5);
    cout<<"Your results were "<<score<<" out of "<<SIZE;
    //Exit stage right
    return 0;
}

/************************************************************************
 *                              Fill Array
 ************************************************************************
 * Purpose: To fill an array with a,b,c,d
 * Input:
 *      n->The size of the array
 * Input-Output:
 *      a->The char array
 * Output: 
 */
void filAray(char a[],int n){
    //Loop on every element and equate to 2 digits
    for(int i=0;i<n;i++){
        a[i]=rand()%4+97;//a,b,c,d
    }
}

/************************************************************************
 *                              Print Array
 ************************************************************************
 * Purpose: To print a char type array with any number of columns 
 * Input:
 *      n->The size of the array
 *      a->The char array
 *      nCols->Number of columns to display the array
 * Output: 
 *      On Screen
 */

void prntAry(const char a[],int n,int nCols){
    
    //Separate outputs with a line
     cout<<endl;
    //Loop and output every element in the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        //When column is reached go to the next line
        if ((i%nCols)==(nCols-1))cout<<endl;
    }
    cout<<endl;
    
}

/************************************************************************
 *                              Score the Test
 ************************************************************************
 * Purpose: To print a char type array with any number of columns 
 * Input:
 *      n->The size of the array
 *      a->The answer array
 *      q->The question array
 *      
 * Output: 
 *      c->The score array
 *      score->The total correct
 */

int grade(char q[],char a[],char c[],int n){
    //Declare the count
    int score=0;
    //Grade each answer
    for(int i=0;i<n;i++){
        if(q[i]==a[i]){
            c[i]='c';
            score++;
        }else c[i]='i';
    }
    //Return the score
    return score;
}
