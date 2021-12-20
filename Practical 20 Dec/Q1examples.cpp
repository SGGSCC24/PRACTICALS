#include <iostream>

#define PI 3.1415926536 //Defined Constant

using namespace std;

int main()
{
    /* 
      EXAMPLE 1 
    */
    cout << "Hello World"; //This line displays a message "Hello World" onto the screen 
    cout << "This is a C++ class."; //This line displays another message onto the screen

    /* 
      EXAMPLE 2 
    */
    // Definition 
    int num1;
    int num2;
    int sum;

    // Getting Inputs 
    cout << "Enter the first nmber: ";
    cin >> num1;
    cout <<" Enter the second nmber: ";
    cin >> num2;

    // Calculation and storing result 
    sum = num1 + num2;
    // Display output 
    cout << "The sum is: " << sum;

    /* 
      EXAMPLE 3 
    */
    // String Constants
    cout << "";                   //Empty String
    cout << "h";                  //Single length string
    cout << "Hello World\n";      //String followed by new line
    cout << "'Good' Morning";     //'Good' Morning
    cout << "\"Good\" Morning";   //"Good" Morning

    /*
      EXAMPLE 4
      Three ways to use constants.
    */
    const double pi = 3.1415926536;

    cout << "Defined constant PI: " << PI << endl;
    cout << "Memory constant pi: " << pi << endl;
    cout << "Literal constant: " << 3.1415926536 << endl;

    return 0;
}