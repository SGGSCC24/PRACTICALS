/*
Q.1. WAP to check whether a number is even or odd. Modify program according to the following :
If number is even , add 10 to it and print it.
If number is odd , add 20 to it and print it.

Code by: Om Gupta
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    if (n%2==0){
        cout<<n<<" is EVEN\n";
        cout<<n+10;
    }
    else{
        cout<<n<<" is ODD\n";
        cout<<n+20;
    }
    return 0;
}