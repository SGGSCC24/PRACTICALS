/*
2) WAP using functions to compute the area and perimeter of a right triangle when given the length of the 2 sides.

Code By: Om Gupta 214047
*/
#include<iostream>
#include<cmath>
using namespace std;

double calc_hypotenuse(double, double);
double calc_perimeter(double, double, double);
double calc_area(double, double);
int main(){
    double base, height;
    cout<<"Enter the value of Height: ";
    cin>>height;
    cout<<"Enter the value of Base: ";
    cin>>base;
    double hypotenuse = calc_hypotenuse(base, height);
    
    cout<<"Perimeter = "<<calc_perimeter(base, height, hypotenuse);
    cout<<"\nArea      = "<<calc_area(base, height);
    return 0;
}

double calc_hypotenuse(double base, double height){
    return sqrt(base*base + height*height);
}

double calc_perimeter(double base, double height, double hypotenuse){
    return base + height + hypotenuse;
}

double calc_area(double base, double height){
    return (base/2.0)*height;
}