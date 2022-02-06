#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> n;

    for (int j = 1; j <= n; j++)
    {
        for (int k = n; k > j; k--)
        {
            cout << "  ";
        }
        for (int i = 1; i <= j * 2 - 1; i++)
        {
            if (i > j)
            {
                cout << j - (i - j);
            }
            else
                cout << i;
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}