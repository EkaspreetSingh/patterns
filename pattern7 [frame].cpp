// pattern7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n1,a,i,j,k,n;
    cin >> n1;
    n = n1 / 2;
    for (a = 0; a < n; a++)
    {
        for (i = 0; i < (n - a); i++)
        {
            cout << "* ";
        }
        for (j = 0; j < a; j++)
        {
            cout << "    ";
        }
        for (k = 0; k < (n - a); k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (a = 0; a < n; a++)
    {
        for (i = 0; i < (a+1); i++)
        {
            cout << "* ";
        }
        for (j = 0; j < n-a-1; j++)
        {
            cout << "    ";
        }
        for (k = 0; k < (1+a); k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
