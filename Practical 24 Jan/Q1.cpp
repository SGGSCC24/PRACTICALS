/*
1) Write a menu-driven program to simulate a calculator. Your program should take 2 operands as input from the user and display a menu showing the 4 basic mathematical operations (+,-,*,/). The user should be able to choose 1 option and the output of the computation should be displayed accordingly.

Code By: Om Gupta 214047
*/

#include<iostream>
using namespace std;

int main(){
    double operand1, operand2;
    cout<<"ENTER 1st NUMBER: ";
    cin>>operand1;
    cout<<"ENTER 2nd NUMBER: ";
    cin>>operand2;
    int Operator;
    cout<<"\n\t1) ADDITION \n\t2) SUBTRACTION\n\t3) MULTIPLICATION\n\t4) DIVISION\n\nCHOOSE THE OPERATION (1-4): ";
    cin>>Operator;
    
    switch (Operator)
    {
    case 1:
        cout<<"\nRESULT: \n\t"<<operand1<<" + "<<operand2<<" = "<<operand1+operand2;
        break;
    case 2:
        cout<<"\nRESULT: \n\t"<<operand1<<" - "<<operand2<<" = "<<operand1-operand2;
        break;
    case 3:
        cout<<"\nRESULT: \n\t"<<operand1<<" x "<<operand2<<" = "<<operand1*operand2;
        break;
    case 4:
        cout<<"\n\tRESULT: \n\t"<<operand1<<" / "<<operand2<<" = "<<operand1/operand2;
        break;
    default:
        cout<<"Invalid Operation!\nChoose only from 1 to 4.";
        break;
    }
    return 0;
}