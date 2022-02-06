/*
Q.1 WAP to find factorial of a number using function.
*/

#include<iostream>
using namespace std;

int main(){
    int number,factorial=1;
    cout<<"ENTER A NUMBER: ";
    cin>>number;

    for (int i = 1; i<=number;i++){
        factorial *=i;
    }
    cout<<"Factorial of "<<number<<" is "<<factorial;
    return 0;
}