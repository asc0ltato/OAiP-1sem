//1.Ввести целое число A и посчитать, сколько единиц в числе с 5 по 10 бит, включая эти биты.
#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
    setlocale(0, "");
    int A, result = 0;
    cout << "Введите A: ", cin >> A;
    for (int i = 5; i <= 10; ++i) {
        if ((A >> i) & 1 == 1) {
            ++result;
        }
    }
    cout << "Число единиц в числе А с 5 по 10 бит, включая эти биты = " << result;
}