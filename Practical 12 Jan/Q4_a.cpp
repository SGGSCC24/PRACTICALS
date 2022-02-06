/*
Q.4 WAP to print quotient and remainder of division of two numbers of type :

a) int

Code by: Om Gupta
*/
#include<iostream>
using namespace std;

int main(){
    // Q4
    int divisor, dividend;
    cout<<"Enter Divisor: ";
    cin>>divisor;
    if (divisor){
        cout<<"Enter Dividend: ";
        cin>>dividend;
        cout<<"REMAINDER = "<<dividend%divisor;
        cout<<"\nQUOTIENT  = "<<dividend/divisor;
    }
    else
        cout<<"Divisor can't be 0!";
    return 0;
}