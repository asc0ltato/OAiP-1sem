#include <iostream>
#include <math.h>
using namespace std;
void main()
{
    setlocale(LC_ALL, "Rus");
    const int size = 6;
    int arr[size], max, min, nommax, nommin, sum;
    cout << "Введите последовательность чисел" << endl;
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    cin >> arr[3];
    cin >> arr[4];
    cin >> arr[5];

    max = min = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] >= max) {
            max = arr[i];
            nommax = i;
        }
        if (arr[i] <= min) {
            min = arr[i];
            nommin = i;
        }
    }
    if (nommax > nommin)
    {
        sum = abs(nommax - nommin) - 1;
    }
    else
    {
        sum = abs(nommin - nommax) - 1;
    }
    cout << "Количество элементов = " << sum << endl << endl;

}