/* 
 * File:   main.cpp
 * Author: Cindy Guijosa
 * Purpose: 
 * Created on July 2, 2015, 12:54 PM
 */

//System Libraries
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    float radWave=1e-2;
    float micWave=1e-3;
    float infra=7e-7;
    float visLigh=4e-7;
    float ultViol=1e-8;
    float xRay=1e-11;
    float wavLeng;
    
    //Prompt and input
    cout<<"What is wavelength do you want in meters?\n";
    cin>>wavLeng;
    
    if(wavLeng>radWave)
        cout<<"The wavelength concludes they are Radio Waves\n";
    else if (wavLeng>micWave)
        cout<<"The wavelength concludes they are Micro waves\n";
    else if (wavLeng>infra)
        cout<<"The wavelength concludes it is infrared\n";
    else if (wavLeng>visLigh)
        cout<<"The wavelength concludes it is Visible Light\n";
    else if (wavLeng>ultViol)
        cout<<"The wavelength concludes it is Ultra Violet rays\n";
    else if (wavLeng>xRay)
        cout<<"The wavelength concludes they are X Rays\n";
    else if (wavLeng<xRay)
        cout<<"The wavelength concludes they are Gamma Rays\n";
    else
        cout<<"You don't follow directions.\n";
    
    return 0;
}

