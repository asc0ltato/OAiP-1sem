#include <iostream>
int main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    const int N = 10;
    int A[N], kol = 0, i, sz = 10, counter = 0;
    srand((unsigned)time(NULL));
    for (i = 0; i < N; i++)
    {
        A[i] = rand() % N;
    }
    for (int counter = 0; counter < sz; counter++)
    {
        cout << "A[" << counter << "]" << "\t" << A[counter] << endl;
    }
    for (i = 0; i < N; i++) {
        if (A[i] == A[i + 1]) {
            kol += 1;
        }
    }
    cout << "Результат = " << kol;
    return 0;
}
