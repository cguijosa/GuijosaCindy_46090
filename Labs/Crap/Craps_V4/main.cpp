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
void plyCrap(unsigned int, unsigned int &, 
             unsigned int &, unsigned int &);
void display(unsigned int, unsigned int, 
             unsigned int , unsigned int, unsigned int);

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned int nGames=36000,win=0, lose=0, plyAgn=0, hkSum=0,check=0;
    
    //Play the game
    plyCrap(nGames,win,lose,plyAgn);
    
    //Calculate the total of all the sides
    hkSum=win+lose+plyAgn;
    //Display the results
    display(nGames, win, lose, plyAgn, hkSum);
    
    //Exit stage right
    return 0;
   
}

void display(unsigned int nGames, unsigned int win, 
             unsigned int lose, unsigned int plyAgn, unsigned int hkSum){
    cout<<"Out of "<<nGames<<" we win "<<setw(5)<<win<<" times "<<endl;
    cout<<"Out of "<<nGames<<" we lose "<<setw(5)<<lose<<" times "<<endl;
    cout<<"Out of "<<nGames<<" we roll again "<<setw(5)<<plyAgn<<" times "<<endl;
    cout<<"Check sum = "<<hkSum<<endl;
}

/**************************************************************
*****************************plyCrps***************************
***************************************************************
 * Purpose: To display results
 * Input
 *      nGames-> number of games played
 *      win
 *      lose
 *      plyAgn
 * *************************************************************
****************************************************************
***************************************************************/

void plyCrap(unsigned int nGames, unsigned int &win, 
             unsigned int &lose, unsigned int &plyAgn){
        for(int game=1; game<=nGames; game++){
            //roll the dice
            int sum=roll(6,2);
            switch(sum){
                case 7:case 11:win++;break;
                case 2:case 3:case 12:lose++;break;
                default:
                    
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
}

unsigned char roll(unsigned char sides,unsigned char nDie){
    //Declare the sum the dice rolls
    unsigned char sum=0;
    //Loop for each die
    int thrw=0;
    while(++thrw<=nDie){
        sum+=(rand()%sides+1);
    }
    return sum;
}
