#include <iostream>

int main()
{
    using namespace std;
    for (int i = 1; i < 10; i++)
        for (int j = 0; j < 10; j++)
            for (int k = 0; k < 10; k++)
                if (j != i && j != k && k != i)
                    cout << i << j << k << " " ;
}