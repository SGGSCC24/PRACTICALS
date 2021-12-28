/*
QUESTION 1

To find Second right most digit of integral part of a floating point number.

Code By: Om Gupta 214047
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float number;
    cout<<"Enter a floating point number: ";
    cin>>number;

    cout<<"Second right most digit of integral part of "
        <<fixed
        <<number<<" = "<<(int(number)/10)%10;
    return 0;
}
