#include <iostream>
using namespace std;

void input(int num)
{
    cout << "Enter the Number : ";
    cin >> num;
}

void factors(int num)
{
    cout << "The Prime Factors of " << num << " are : ";
    int f = 2;
    while (num != 1)
    {
        if (num % f == 0)
        {
            cout << f << " x ";
            num /= f;
        }
        else
        {
            f++;
            // (fac == 2) : fac++ : fac+=2 ;
        }
    }
    cout << '\n';
}

int main()
{
    int n;
    input(n);
    factors(n);
    return 0;
}