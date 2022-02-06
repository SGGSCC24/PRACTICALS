#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}