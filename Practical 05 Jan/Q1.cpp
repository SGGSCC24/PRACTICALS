/*
1) WAP using functions to extract and add the 3 least significant digits of any integer number.

Code By: Om Gupta 214047
*/

#include<iostream>
using namespace std;

int sum3LSD(int);

int main(){
    int number;
    cout<<"Enter an integer of 3 or more digits: ";
    cin>>number;
    cout<<"Sum of 3 least significant digits: "<<sum3LSD(number);
    return 0;
}

int sum3LSD(int number){
    return number%10 + (number/10)%10 + (number/100)%10;
}