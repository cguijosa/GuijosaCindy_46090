/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Project Soduko
 * Created on July 18, 2015, 9:29 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>//for random number generator
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
const unsigned short SIZ=9;
//Function Prototypes
void randomC(unsigned short [][SIZ]);
void randomR(unsigned short [][SIZ]);
void print(unsigned short [][SIZ]);
void input(char &,char &,char &,unsigned short [][SIZ], char [][SIZ]);
void copy(unsigned short [][SIZ], char [][SIZ]);
void print(char [][SIZ],unsigned short [][SIZ]);
void hidSpot(char [][SIZ]);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Plant random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned short grid[SIZ][SIZ]={{1,2,3,7,8,9,4,5,6},
                                    {4,5,6,1,2,3,7,8,9},
                                    {7,8,9,4,5,6,1,2,3},
                                    {9,1,2,6,7,8,3,4,5},
                                    {3,4,5,9,1,2,6,7,8},
                                    {6,7,8,3,4,5,9,1,2},
                                    {8,9,1,5,6,7,2,3,4}, 
                                    {2,3,4,8,9,1,5,6,7},
                                    {5,6,7,2,3,4,8,9,1}}; 
    
            
    char displayG[SIZ][SIZ];
    
    char a,b,num;
    randomC(grid);
    randomR(grid);                             
    copy(grid,displayG);
    hidSpot(displayG);
    
    //Loop to repeat until there are no more dashes on grid 
    do
    {
        print(displayG,grid);
        input(a,b,num,grid,displayG);
        
    }while(displayG[SIZ][SIZ]='-');
    
    
    return 0;
}

/*****************************************************************
 * *************************randomC*******************************
 * ***************************************************************
 * Purpose: To randomize the columns
 * Input:   
 *         firstGN & secGN->swap these two random columns
 *         firstG & secG->swap these two columns
 *         first & sec->swap these two columns
 * Output:
 *         grid->array with swapped random columns
 * **************************************************************/

void randomC(unsigned short grid[][SIZ]){
   //Randomize columns
   
   //first 3 columns
   char firstGN=rand()%3;
   char secGN=rand()%3;
   //columns 4-6
   char firstG=rand()%2+4;
   char secG=rand()%2+4;
   //columns 5-9
   char first=rand()%3+6;
   char sec=rand()%3+6;
   
   //for loop to switch columns
   for(int i=0;i<SIZ;i++){
            
        char temp;
        temp=grid[i][firstGN];
        grid[i][firstGN]=grid[i][secGN];
        grid[i][secGN]=temp;

        char tempO;
        tempO=grid[i][firstG];
        grid[i][firstG]=grid[i][secG];
        grid[i][secG]=tempO;

        char tempT;
        tempT=grid[i][first];
        grid[i][first]=grid[i][sec];
        grid[i][sec]=tempT;
    }   
}

/*****************************************************************
 * *************************randomR*******************************
 * ***************************************************************
 * Purpose: To randomize the rows
 * Input:   
 *         firstGN & secGN->swap these two random rows
 *         firstG & secG->swap these two rows
 *         first & sec->swap these two rows
 * Output:
 *         grid->array with swapped random rows
 * **************************************************************/

void randomR(unsigned short grid[][SIZ]){
   //Randomize Rows
   char firstGN=rand()%3;
   char secGN=rand()%3;
   char firstG=rand()%2+4;
   char secG=rand()%2+4;
   char first=rand()%3+6;
   char sec=rand()%3+6;
   
   //for loop to switch rows
   for(int i=0;i<SIZ;i++){
            
        char temp;
        temp=grid[firstGN][i];
        grid[firstGN][i]=grid[secGN][i];
        grid[secGN][i]=temp;

        char tempO;
        tempO=grid[firstG][i];
        grid[firstG][i]=grid[secG][i];
        grid[secG][i]=tempO;

        char tempT;
        tempT=grid[first][i];
        grid[first][i]=grid[sec][i];
        grid[sec][i]=tempT;
    } 
}

/*****************************************************************
 * *************************print*********************************
 * ***************************************************************
 * Purpose: To print the solution grid (only if wanted)
 * Output:
 *         grid->array with swapped random columns
 * **************************************************************/

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
    cout<<endl;
}   

/*****************************************************************
 * *************************input*********************************
 * ***************************************************************
 * Purpose: To prompt/input and take input if right modify display
 * Input:   
 *         a->row user input
 *         b->column user input
 *         num->number user input for answer
 *         grid->to identify if input matches value in array
 * Output:
 *         displayG->modify value if answer is correct
 * **************************************************************/

void input(char &a,char &b,char &num,unsigned short grid[][SIZ],char displayG[][SIZ]){
    cout<<"To select a coordinate enter number of row, number of column,"<<endl;
    cout<<"and number you want to enter.(ex: 1(row),4(column),9)"<<endl;
    cin>>a;
    cin.ignore();
    cin>>b;
    cin.ignore();
    cin>>num;
    
    int x=a-49;
    int y=b-49;
    int c=num-48;
    if(c==grid[x][y]){
        displayG[x][y]='a';
    }else{
        cout<<"Thats wrong! Try again!"<<endl;
    }
   
}

/*****************************************************************
 * *************************copy**********************************
 * ***************************************************************
 * Purpose: To copy value from one array to another
 * Input:   
 *         grid->array being copied
 * Output:
 *         displayG->new array
 * **************************************************************/

void copy(unsigned short grid[][SIZ], char displayG[][SIZ]){
    for(int i=0;i<SIZ;i++){
        for(int j=0; j<SIZ;j++){ 
            displayG[i][j]=static_cast<char>(grid[i][j]);
        }
    }  
}

/*****************************************************************
 * *************************print*********************************
 * ***************************************************************
 * Purpose: To print grid with dashes where answer is hidden
 * Output:
 *         displayG->print dashes where numbers are not displayed
 * **************************************************************/

void print(char displayG[][SIZ], unsigned short grid[][SIZ]){
    cout<<"    1 2 3 4 5 6 7 8 9"<<endl;
    cout<<"   =================="<<endl;
    for(int i=0;i<SIZ;i++){
        cout<<i+1<<"|  ";
        for(int j=0;j<SIZ;j++){
            if(displayG[i][j]=='-'){
                cout<<displayG[i][j]<<" ";
            }
            else{
                cout<<grid[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}    

/*****************************************************************
 * *************************hidSpot*******************************
 * ***************************************************************
 * Purpose: To choose random spots to display number
 * Input:   
 *         
 * Output:
 *         grid->array with swapped random rows
 * **************************************************************/

void hidSpot(char displayG[][SIZ]){
    for(int i=0;i<(SIZ*SIZ)-17;i++){
        while(true){ 
            char x=rand()%SIZ; //8
            char y=rand()%SIZ; //8
            if(displayG[x][y]!='-')
            {
             displayG[x][y]='-';
             break;
            }          
            cout<<displayG[x][y]<<" ";
        }
    }  
    cout<<endl;
}