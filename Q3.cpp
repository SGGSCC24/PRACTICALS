#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;

    cout << "Enter coefficient of x^2: ";
    cin >> a;

    cout << endl
         << "Enter coefficient of x: ";
    cin >> b;

    cout << endl
         << "Enter the constant: ";
    cin >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            cout << "\nNo Roots Possible! ";
            return 0;
        }
        else
        {
            cout << "\nRoot is :" << -c / b;
            return 0;
        }
    }
    float D = b * b - 4 * a * c;
    cout << endl
         << "Discriminant: " << D << endl;

    if (D < 0)
    {
        cout << endl
             << "No real roots exists.";
    }
    else if (D == 0)
    {
        float root1 = -b / (2 * a);
        float root2 = -b / (2 * a);
        cout << endl
             << "Roots are: " << root1 << ", " << root2;
    }
    else
    {
        float root1 = (-b + sqrt(D)) / (2 * a);
        float root2 = (-b - sqrt(D)) / (2 * a);
        cout << endl
             << "Roots are: " << root1 << ", " << root2;
    }
    return 0;
}