#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < i * 2 - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}