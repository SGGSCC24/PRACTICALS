#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}