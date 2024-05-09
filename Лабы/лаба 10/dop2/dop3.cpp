#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i, maxcol = 0, kol = 1;
    const int SZ = 10;
    int A[SZ] = { 4,2,4,4,4,2,4,4,3,7 };
    for (i = 0; i < SZ; i++){
        printf("A[%d]=%d\n", i, A[i]);
    }
    for (i = 0; i < SZ - 1;i++)
    {
        if (A[i] == A[i + 1])
        {
            kol++;
            if (kol > maxcol)
                maxcol = kol;
        }
        else
        {
            kol = 1;
        }
    }
    printf("Hаибольшее число подряд идущих одинаковых элементов=%d\n", maxcol);
    return 0;
}