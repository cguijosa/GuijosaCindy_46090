/* 
 * File:   main.cpp
 * Author: Cindy
 *
 * Created on June 22, 2015, 7:54 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float hours,rate,pay;
    hours=40;
    rate=10;
    pay=hours*rate;
    
    cout<<"hours worked=    "<<hours<<"(hrs)"<<endl;
    cout<<"pay rate= $"<<rate<<"(hrs)"<<endl;
    cout<<"Mypaycheck= $"<<pay<<endl;
    return 0;
}

