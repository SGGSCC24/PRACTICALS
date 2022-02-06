#include <iostream>
using namespace std;

int main()
{
  unsigned int n;
  cout << "ENTER NUMBER OF ROWS: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j > i; j--)
    {
      cout << "  ";
    }
    for (int k = 0; k < row; k++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}