/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Project Soduko
 * Created on July 18, 2015, 9:29 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>//for random number generator;
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

//User Libraries
#include "coordinate.h"
//Global Constants
const unsigned short SIZ=9;

//Function Prototypes
void randomC(unsigned short [][SIZ]);
void randomR(unsigned short [][SIZ]);
void print(unsigned short [][SIZ]);
void input(place &,unsigned short [][SIZ], char [][SIZ]);
void copy(unsigned short [][SIZ], char [][SIZ]);
void print(char [][SIZ],unsigned short [][SIZ],unsigned short []);
void dspLev(unsigned short, string [], unsigned short *);
void hidSpot(char [][SIZ]);
unsigned short cntDash(char [][SIZ]);
void pntVect(vector<unsigned short> &, place &);
int search(vector<unsigned short> &, place &);
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
    unsigned short numb[SIZ];
    const unsigned short SIZE=3;
    string lev[SIZE]={"a","b","c"};
    unsigned short levDisp[SIZE]={25,23,21};
    unsigned short *p=levDisp;
    place area;
    vector<unsigned short> score;
    score.push_back(98);
    score.push_back(99);
    score.push_back(100);
    
    /*enum scor{topOne,topTwo,topThre};
    cout<<scor(topOne+1)<<endl;
    cout<<scor(topTwo+1)<<endl;
    cout<<scor(topThre+1)<<endl;*/
    
    //char a,b,num;
    bool again;
    do{    
        randomC(grid);
        randomR(grid);                             
        copy(grid,displayG);
        
        //Utilizing a string to output name 
        string line;
        cout<<"What is your first name \n";
        getline(cin,line);
        cout<<endl;
        cout<<"Hello "<<line<<endl;
        
        ofstream output;
        output.open("name.txt");
        output<<line;
        output.close();
        
        //to output rules from a file
        ifstream infile("rules.txt");
        string rules;
        if(infile.is_open()){
            while(getline(infile,rules)){
                cout<<rules<<"\n";
            }
        }
        cout<<endl;
        dspLev(SIZE,lev,p);
        hidSpot(displayG);
        //Loop to repeat until there are no more dashes on grid 

        do
        {
            print(displayG,grid,numb);
            input(area,grid,displayG);

        }while(cntDash(displayG)>0);
        
        char redo;
        cout<<endl;
        cout<<"Congratulations!"<<endl;
        cout<<"It took you "<<area.count<<" turns to complete the game"<<endl;
        
       
        pntVect(score,area);
        int found;
        found=search(score,area);
        if (found>-1){
            cout<<"You scored in the top "<<found<<endl;
        }else{
            cout<<"You did not get a top score. "<<endl;
        }
        
        area.count=0;
        cout<<"Would you like to play again?(y for yes or n for no)"<<endl;
        cin>>redo;
        if(redo=='y' || redo=='Y'){
            again=true;
            cout<<endl;
        }else{
            again=false;
            cout<<endl;
        }
    }while(again==true);
    
    cout<<endl;
    
    
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
   
   //for loop to swapping columns
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
   
   //for loop to swapping rows
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
 *          and choose level
 * Input:   
 *         a->row user input
 *         b->column user input
 *         num->number user input for answer
 *         grid->to identify if input matches value in array
 * Output:
 *         displayG->modify value if answer is correct
 * **************************************************************/

void input(place &area,unsigned short grid[][SIZ],char displayG[][SIZ]){
    cout<<"To select a coordinate enter number of row, number of column,"<<endl;
    cout<<"and number you want to enter.(ex: 1(row),4(column),9)"<<endl;
    cin>>area.a;
    cin.ignore();
    cin>>area.b;
    cin.ignore();
    cin>>area.num;
    
    area.count++;
    
    int x=area.a-49;
    int y=area.b-49;
    int c=area.num-48;
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
            //if(grid[i][j] != '-')
               // ++cnt
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

void print(char displayG[][SIZ], unsigned short grid[][SIZ], unsigned short numb[]){
    cout<<"    ";
    for(int i=0;i<=SIZ-1;i++){
        numb[i]=i+1;
        cout<<numb[i]<<" ";
    }   
    cout<<endl;
    
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
 * Purpose: To choose random spots to display number and how many
 * Input:   
 *         level->to choose amount of spots 
 * Output:
 *         grid->array with swapped random rows
 * **************************************************************/

void hidSpot(char displayG[][SIZ]){
    char level;
    cout<<"Choose level of difficulty: a for easy, b for medium, and c for hard.\n";
    cin>>level;
    switch(level){
            case 'a':
                for(int i=0;i<(SIZ*SIZ)-25;i++){
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
                break;
            case'b': 
                for(int i=0;i<(SIZ*SIZ)-23;i++){
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
                break;
            case 'c':
               for(int i=0;i<(SIZ*SIZ)-21;i++){
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
                break;
    }       
                
}

/*****************************************************************
 * *************************cntDash*******************************
 * ***************************************************************
 * Purpose: To count number of dashes in order to end game
 * Input:   
 *         displayG: grid with dashes
 * Output:
 *         cnt->count dashes
 * **************************************************************/

unsigned short cntDash(char displayG [][SIZ]){
    unsigned short cnt=0;
    for(int i=0;i<SIZ;i++){
        for(int j=0; j<SIZ;j++){ 
            if(displayG[i][j] == '-'){
                cnt++;
                
            }
        }
    }
    return cnt;
}

void dspLev(unsigned short SIZE,string lev[], unsigned short *p){
    cout<<"level       |";
    for(int i=0;i<SIZE;i++){
        cout<<setw(4)<<lev[i];
    }
    cout<<endl;
    cout<<"            --------------"<<endl;
    cout<<"# of given  |";
    for(int i=0;i<SIZE;i++){
        cout<<setw(4)<<p[i];
    }
    cout<<endl<<endl;
}

void pntVect(vector<unsigned short> &score, place &area){
    
    score.push_back(area.count);
    sort(score.begin(),score.end());
    score.erase(score.begin()+3);
    cout<<"Top Scores"<<endl;
    for(int i=0;i<score.size();i++){
        cout<<i+1<<"."<<setw(5)<<score[i]<<endl;
    }
}

int search(vector<unsigned short> &score, place &area){
    for(int i=0;i<=score.size();++i){
        if(score[i]==area.count){
            return i+1;
        }  
    }
    return -1;
}