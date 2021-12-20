#include <iostream>

using namespace std;

int main(){
    int radius;
    cout << "Enter the RADIUS of the circle: ";
    cin >> radius;

    float pi = (22.0/7);
    cout << "Area = " << pi*radius*radius << "\nCircumference = " << 2*pi*radius;
    return 0;
}