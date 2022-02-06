#include <iostream>
using namespace std;

void inputno(int number)
{
    cout << "Enter the Number of Rows to print : ";
    cin >> number;
}

void print_pattern(int number)
{
    int ch = 65;
    for (int i = 1; i <= number; i++)
    {
        ch = (ch <= 90) ? ch : (64 + (ch % 90));
        for (int j = 1; j <= i; j++)
        {
            cout << char(ch);
        }
        cout << '\n';
        ch++;
    }
}

int main()
{
    int n;
    input(n);
    print_pattern(n);
    return 0;
}