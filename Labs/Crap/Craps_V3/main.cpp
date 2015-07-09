/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Eventually to play the game of craps
 * Created on July 7, 2015, 12:14 PM
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib>//Random 
#include <ctime>//Time 
#include <iomanip>
using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
unsigned char roll(unsigned char,unsigned char);

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned int nGames=36000;
    unsigned int win=0, lose=0, plyAgn=0, hkSum=0;
    unsigned int check=0;
    
    //Play the game
    for(int game=1; game<=nGames; game++){
        //roll the dice
        int sum=roll(6,2);
        if(sum==7 || sum==11)win++;
        else if(sum==2 || sum==3 || sum==12)lose++;
        else{
            //Roll again
            plyAgn++;
            bool rollAgn=true;
            do{
                int sum2=roll(6,2);
                if(sum==sum2){
                    win++;
                    rollAgn=false;
                }else if(sum2==7){
                    lose++;
                    rollAgn=false;
                }
            }while(rollAgn);
        }
        
    }
    
    //Calculate the total of all the sides
    hkSum=win+lose+plyAgn;
    //Display the results
    cout<<"Out of "<<nGames<<" we win "<<setw(5)<<win<<" times "<<endl;
    cout<<"Out of "<<nGames<<" we lose "<<setw(5)<<lose<<" times "<<endl;
    cout<<"Out of "<<nGames<<" we roll again "<<setw(5)<<plyAgn<<" times "<<endl;
    cout<<"Check sum = "<<hkSum<<endl;
    
    
    //Exit stage right
    return 0;
}





unsigned char roll(unsigned char sides,unsigned char nDie){
    //Declare the sum the dice rolls
    unsigned char sum=0;
    //Loop for each die
    for(int thrw=1; thrw<=nDie; thrw++){
        sum+=(rand()%sides+1);
    }
    return sum;
}