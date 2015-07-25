/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: Homework, correct mistakes from file
 * Created on July 23, 2015, 1:37 PM
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    ifstream in;
    in.open ("Corrections.txt");
    ofstream out;
    out.open("aftercorrect.txt");
    
    char correct;
    while(!in.eof()){
        in>>correct;
        if (correct == '>'){
            out<<"<"<<endl;
        }else if(correct == '<'){
            out<< ">"<<endl;;
            
        }else{
            out<<correct;
        }
        
    }
    
    in.close();
    out.close();
    cout<<"End of Editing file."<<endl;
    return 0;
}