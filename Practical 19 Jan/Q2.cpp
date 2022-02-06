#include<iostream>
using namespace std;

double max(double, double, double, double);

int main(){
    double n1, n2, n3, n4;
    cout<<"ENTER 4 NUMBERS (Separated by space): ";
    cin>>n1>>n2>>n3>>n4;
    cout<<"MAXIMUM OF FOUR IS "<<max(n1, n2, n3, n4);
    return 0;
}

double max(double n1, double n2, double n3, double n4){
    return ( ((n1>n2)?n1:n2) > ((n3>n4)?n3:n4) ) ? (n1>n2)?n1:n2 : (n3>n4)?n3:n4;
}