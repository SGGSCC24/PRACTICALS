/*
3) WAP that, given a beginning balance in your savings account, calculates the balance at the end of one year. The interest is 5.3% compounded quarterly. Show the interest earned and balance at the end of each quarter. Present the data in tabular columns with appropriate headings. Use separate functions to compute the interest and print the balance. Attach screenshot for the output.

Code By: Om Gupta 214047
*/

#include<iostream>
#include<iomanip>
#include<cmath>
#define INTEREST_RATE 5.3
using namespace std;

double calc_interest(double, int);
double calc_balance(double, int);

int main(){
    double balance;
    cout<<"Enter the Balance: ";
    cin>>balance;
    
    cout<<endl<<"---------------+------------------+-------------";
    cout<<endl<<"QUARTER No."<<setw(14)<<"| INTEREST"<<setw(18)<<"| BALANCE";
    cout<<endl<<"---------------+------------------+-------------";
    cout<<fixed<<setprecision(2);
    cout<<endl<<setw(15)<<left<<0<<"| "<<setw(17)<<0<<"| "<<balance;
    cout<<endl<<setw(15)<<1<<"| "<<setw(17)<<calc_interest(balance, 1)<<"| "<<calc_balance(balance , 1);
    cout<<endl<<setw(15)<<2<<"| "<<setw(17)<<calc_interest(balance, 2)<<"| "<<calc_balance(balance , 2);
    cout<<endl<<setw(15)<<3<<"| "<<setw(17)<<calc_interest(balance, 3)<<"| "<<calc_balance(balance , 3);
    cout<<endl<<setw(15)<<4<<"| "<<setw(17)<<calc_interest(balance, 4)<<"| "<<calc_balance(balance , 4);
    cout<<endl<<"---------------+------------------+-------------";
    cout<<endl<<setw(36)<<right<<"| FINAL BALANCE =  | "<<calc_balance(balance , 4);
    cout<<endl<<setw(36)<<right<<"| TOTAL INTEREST = | "<<calc_interest(balance , 4);
    cout<<endl<<"---------------+------------------+-------------\n";
    return 0;
}

double calc_interest(double balance, int quarter_number){
    return balance*pow((1 + (INTEREST_RATE/4)/100), quarter_number) - balance;
}

double calc_balance(double balance, int quarter_number){
    return balance + calc_interest(balance, quarter_number);
}
