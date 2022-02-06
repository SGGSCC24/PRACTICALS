#include <iostream>
using namespace std;

int main()
{
    double op1, op2;
    cout << "ENTER 1st NUMBER: ";
    cin >> op1;
    cout << "ENTER 2nd NUMBER: ";
    cin >> op2;
    int operator;
    cout << "\n\t1) ADDITION \n\t2) SUBTRACTION\n\t3) MULTIPLICATION\n\t4) DIVISION\n\nCHOOSE THE OPERATION (1-4): ";
    cin >> operator;

    switch (Operator)
    {
    case 1:
        cout << "\nRESULT: \n\t" << op1 << " + " << op2 << " = " << op1 + op2;
        break;
    case 2:
        cout << "\nRESULT: \n\t" << op1 << " - " << op2 << " = " << op1 - op2;
        break;
    case 3:
        cout << "\nRESULT: \n\t" << op1 << " x " << op2 << " = " << op1 * op2;
        break;
    case 4:
        cout << "\n\tRESULT: \n\t" << op1 << " / " << op2 << " = " << op1 / op2;
        break;
    default:
        cout << "Invalid Operation!\nChoose only from 1 to 4.";
        break;
    }
    return 0;
}