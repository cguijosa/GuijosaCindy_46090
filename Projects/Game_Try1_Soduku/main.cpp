/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Project Soduko
 * Created on July 18, 2015, 9:29 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
const unsigned short SIZ=9;
//Function Prototypes
void crGrid(unsigned short [][SIZ]);
void print(unsigned short [][SIZ]);
void input(char &,char &,char &);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    srand(static_cast<unsigned int>(time(0)));
    
    unsigned short grid[SIZ][SIZ];
    char firstGN; 
    char a,b,num;
    
    crGrid(grid);
    
    //Random number from columns 1-3
    firstGN=rand()%3;
    char secGN=rand()%3;
    char random=rand()%8+1;
    grid[firstGN][secGN]=random;
    static_cast<char>(firstGN);
        
    char firstG=rand()%2+4;
    char secG=rand()%3;
    char randomN=rand()%8+1;
    grid[firstG][secG]=randomN;
    
    char first=rand()%4+5;
    char sec=rand()%3;
    char randNU=rand()%8+1;
    grid[first][sec]=randNU;
    
    
    //Random number for columns 4-6
    char thirdGN=rand()%3;
    char fourGN=rand()%2+4;
    char randnU=rand()%8+1;
    grid[thirdGN][fourGN]=randnU;
        
    char thirdG=rand()%2+4;
    char fourG=rand()%2+4;
    char rando=rand()%8+1;
    grid[thirdG][fourG]=rando;
    
    char third=rand()%3+6;
    char four=rand()%2+4;
    char randoN=rand()%8+1;
    grid[third][four]=randoN;
    
    
     //Random number for columns 6-9
    char fiveGN=rand()%3;
    char sixGN=rand()%4+5;
    char randoNu=rand()%8+1;
    grid[fiveGN][sixGN]=randoNu;
        
    char fiveG=rand()%2+4;
    char sixG=rand()%3+6;
    char randn=rand()%8+1;
    grid[fiveG][sixG]=randn;
    
    char five=rand()%3+6;
    char six=rand()%3+6;
    char randnu=rand()%8+1;
    grid[five][six]=randnu;
    
    do{
        
    print(grid);
    
    input(a,b,num);
    
    grid[a-1][b-1]=num;
    
    }while(grid[SIZ][SIZ]==0);
    
    return 0;
}

void crGrid(unsigned short grid[][SIZ]){
    for(int i=0;i<SIZ;i++){
        for(int b=0;b<SIZ;b++){
            grid[i][b]=0;
        }
    }   
}
    /*for(int i=0;i<SIZ;i++){
        for(int b=0;b<SIZ;b++){
        firstGN=rand()%8+1;//random number from 1-9
        char secGN=rand()%8+1;
        char random=secGN=rand()%8+1;
        grid[firstGN][secGN]=random;
        static_cast<char>(firstGN);
        }
    }*/
 
void print(unsigned short grid[][SIZ]){
    cout<<"    1 2 3 4 5 6 7 8 9"<<endl;
    cout<<"   =================="<<endl;
    for(int i=0;i<SIZ;i++){
        cout<<i+1<<"|  ";
        for(int b=0;b<SIZ;b++){
            cout<<grid[i][b]<<" ";
        }
        cout<<endl;
    }
}   

void input(char &a,char &b,char &num){
    cout<<"To select a coordinate enter number of column,number of row,"<<endl;
    cout<<"and number you want to enter.(ex: 1,4,9)"<<endl;
    cin>>a;
    cin.ignore();
    cin>>b;
    cin.ignore();
    cin>>num;
   
}