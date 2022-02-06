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
    int j_odd = j * 2 - 1;
    for (int i = 0; i < j_odd; i++)
    {
      if (j + i > j_odd)
      {
        cout << ((j_odd) - (i - j) - 1) % 10;
      }
      else
        cout << (j + i) % 10;
      cout << " ";
    }
    cout << endl;
  }
  return 0;
}