/*
1. WAP to print the sum and product of digits of an integer.
*/
#include<iostream>
using namespace std;

int main(){
    long long int number;
    long long int sum = 0;
    long long int product = 1;
    
    cout<<"ENTER AN INTEGER: ";
    cin>>number;
    
    do{
        sum += number%10;
        product *= number%10;
        number /= 10;
    }while(number);

    cout<<"SUM OF DIGITS: "<<sum<<endl;
    cout<<"PRODUCT OF DIGITS: "<<product;

    return 0;
}