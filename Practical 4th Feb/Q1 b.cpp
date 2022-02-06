#include <iostream>
using namespace std;

void input(int num)
{
    cout << "Enter the Number of Rows to print (ODD numbers only): ";
    cin >> num;
}

bool validate(int num)
{
    return ((num % 2) ? true : false);
}

void print_pattern(int n)
{
    int spaces = n / 2;
    int stars = 1;
    for (int i = 1; i <= n; i++)
    {
        // Print Spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        // Print Stars
        for (int k = 1; k <= stars; k++)
        {
            cout << '*';
        }
        // Print New Line
        cout << '\n';

        // Incrementation & Decrementation Accordingly
        if (i < ((n + 1) / 2))
        {
            spaces--;
            stars += 2;
        }
        else
        {
            spaces++;
            stars -= 2;
        }
    }
}

int main()
{
    int n;
    input(n);
    if (validate(n))
        print_pattern(n);
    else
        cout << "Number Entered is not ODD!!!\n";
    return 0;
}