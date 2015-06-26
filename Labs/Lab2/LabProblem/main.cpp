/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on June 23, 2015, 1:27 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float fedbudg, milbudg, pmlbudg;
    fedbudg=3.9e12f;//The federal budget
    milbudg=.598e12f;//The military budget
    pmlbudg=milbudg/fedbudg*100;//pmlbudg is the percentage of the military budget
    cout<<"The percent of our budget allocated to the military is "<<pmlbudg<<endl;
    //Output Variable 
    return 0;
}

