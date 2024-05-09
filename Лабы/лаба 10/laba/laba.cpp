#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
    const int n = 11;
    int i = 0;
    int m[n] = { 1, 0, -1, -1, 1, 1, 1, 1, 0, -1, -1 };

    for (i = 0; i < n; i++)
        cout << m[i] << " ";

    int zero_b = -1;
    int zero_e = -1;
    for (i = 0; i < n; i++)
        if (m[i] == 0)
        {
            zero_e = i;
            if (zero_b == -1)
                zero_b = i;
        }

    if (zero_b == -1 && zero_e == -1)
        cout << "There is no zero elements\n";
    else
    {
        cout << "Number of first zero element = " << zero_b << endl;
        cout << "Number of last zero element = " << zero_e << endl;
    }

    system("pause");
    return 0;
}#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
    const int n = 11;
    int i = 0;
    int m[n] = { 1, 0, -1, -1, 1, 1, 1, 1, 0, -1, -1 };

    for (i = 0; i < n; i++)
        cout << m[i] << " ";

    int zero_b = -1;
    int zero_e = -1;
    for (i = 0; i < n; i++)
        if (m[i] == 0)
        {
            zero_e = i;
            if (zero_b == -1)
                zero_b = i;
        }

    if (zero_b == -1 && zero_e == -1)
        cout << "There is no zero elements\n";
    else
    {
        cout << "Number of first zero element = " << zero_b << endl;
        cout << "Number of last zero element = " << zero_e << endl;
    }

    system("pause");
    return 0;
}