
#include <iostream>

using namespace std;

int main()
{
    int i, j, k, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "\n";
        for (j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (k = 0; k < (2*i)-1; k++)
        {
            cout << "* ";
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << "\n";
        for (j = 0; j < i+1; j++)
        {
            cout << "  ";
        }
        for (k = 0; k < n-(2 * i)+2; k++)
        {
            cout << "* ";
        }
    }
}


