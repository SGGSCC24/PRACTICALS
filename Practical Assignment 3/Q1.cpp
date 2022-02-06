#include <iostream>
using namespace std;

int main()
{
    int num, f = 1;
    cout << "ENTER A NUMBER: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        f *= i;
    }
    cout << "Factorial of " << num << " is " << f;
    return 0;
}