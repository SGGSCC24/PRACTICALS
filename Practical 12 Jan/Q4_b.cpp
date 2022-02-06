/*
Q.4 WAP to print quotient and remainder of division of two numbers of type :

b) float

Code by: Om Gupta
*/
#include<iostream>
using namespace std;

int main(){
    double divisor, dividend;
    cout<<"Enter Divisor: ";
    cin>>divisor;
    if (divisor){
        cout<<"Enter Dividend: ";
        cin>>dividend;
        cout<<"REMAINDER = "<<dividend - divisor*int(dividend/divisor);
        cout<<"\nQUOTIENT  = "<<int(dividend/divisor);
    }
    else
        cout<<"Divisor can't be 0!";
    return 0;
}