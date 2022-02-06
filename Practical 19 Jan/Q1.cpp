/*
Q.1 WAP to print the name of months based on its number using
switch case. For example: month 1 is ‘January’,..., 12 is ‘December’.
Code By: Om Gupta 214047
*/

#include<iostream>
using namespace std;

string month(int);

int main(){
    int num;
    cout<<"ENTER MONTH NUMBER: ";
    cin>>num;
    cout<<"Month "<<num<<" is "<<month(num)<<".";    
    return 0;
}

string month(int num){
    switch (num)
        {
        case 1:
            return "JANUARY";
        case 2:
            return "FEBRUARY";
        case 3:
            return "MARCH";
        case 4:
            return "APRIL";
        case 5:
            return "MAY";
        case 6:
            return "JUNE";
        case 7:
            return "JULY";
        case 8:
            return "AUGUST";
        case 9:
            return "SEPTEMBER";
        case 10:
            return "OCTOBER";
        case 11:
            return "NOVEMBER";
        case 12:
            return "DECEMBER";
        default:
            return "not possible!\nKindly enter a number from 1 to 12 only";
        }
}