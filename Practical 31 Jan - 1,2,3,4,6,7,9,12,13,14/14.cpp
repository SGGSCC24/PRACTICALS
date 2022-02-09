/*
14. Write a program which takes the radius of a circle as input from the user, passes it to another
function that computes the area and the circumference of the circle and displays the value of area
and circumference from the main() function.
*/
#include<iostream>
#include<cmath>
using namespace std;

void circum_area_calc(double, double&, double&);
int main(){
    double radius, area, circumference;
    cout<<"ENTER RADIUS: ";
    cin>>radius;
    circum_area_calc(radius, area, circumference);
    cout<<"\tAREA\t= "<<area<<" sqr unts";
    cout<<"\nCIRCUMFERENCE\t= "<<circumference<<" unts";

    return 0;
}

void circum_area_calc(double radius, double& area, double& circumference){
    area = M_PI*radius*radius;
    circumference = 2*M_PI*radius;
}
