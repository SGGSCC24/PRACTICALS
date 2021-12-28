/*
Dutching a bill among three family.

Code By: Om Gupta 214047
*/

#include<iostream>
#include<iomanip>
#define TAX 9.5
#define SERVICE 20.00
using namespace std;

int main(){
    float amt;

    cout<<fixed<<setprecision(2)<<"Enter the final amount: ";
    cin>>amt;

    float tax = (TAX/100)*amt;
    float service = (SERVICE/100)*amt;
    float total = amt + tax + service;

    float one_adult_share = total/9;
    float firstFamily = (7.0/2)*one_adult_share;
    float secondFamily = (11.0/4)*one_adult_share;
    float thirdFamily = (11.0/4)*one_adult_share;

    cout<<"\nTAX:\t\t"<<tax<<endl
        <<"SERVICE CHARGE:\t"<<service<<endl
        <<"GRAND TOTAL:\t"<<total<<endl
        <<"\nAmount to be paid by first family:\t"<<firstFamily<<endl
        <<"Amount to be paid by second family:\t"<<secondFamily<<endl
        <<"Amount to be paid by third family:\t"<<thirdFamily;
    return 0;
}