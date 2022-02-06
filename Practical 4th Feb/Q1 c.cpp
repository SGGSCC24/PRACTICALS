#include <iostream>
using namespace std;

void input(int num)
{
    cout << "Enter the Number of Rows to print : ";
    cin >> num;
}

void print_pattern(int num)
{
    int spaces = 0;
    int bindig = (2 * num - 1);
    for (int i = 1; i <= num; i++)
    {
        // Print Spaces
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }
        // Print Binary Digits
        for (int j = 1; j <= binary_digits; j++)
        {
            cout << j % 2;
        }
        // Print New Line
        cout << '\n';
        // Incrementation & Decrementation Accordingly
        spaces++;
        bindig -= 2;
    }
}

int main()
{
    int n;
    input(n);
    print_pattern(n);
    return 0;
}