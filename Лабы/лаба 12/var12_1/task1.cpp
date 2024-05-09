#include <iostream>

using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");
    int num, z; // размер массива
    cout << "Кол-во значений в массиве: ";
    cin >> num; // получение от пользователя размера массива

    int* Arr = new int[num]; // Выделение памяти для массива  *(Arr+i) - указатель Arr[i] -id

    for (int i = 0; i < num; i++) {
        *(Arr + i) = rand() % 99;
    }

    int* Arrb = new int[num];

    for (int i = 0; i < num; i++) {
        *(Arrb + i) = rand() % 99;
    }

    cout << "\nВаш массив A: ";

    for (int i = 0; i < num; ++i) {
        cout << *(Arr + i) << " ";
    }

    cout << "\nВаш массив B: ";
    for (int i = 0; i < num; ++i) {
        cout << *(Arrb + i) << " ";
    }

    cout << "\n МЕНЬШЕ";

    for (int i = 0; i < num; ++i) {
        if (*(Arr + i) < (*(Arrb + i))) {
            cout << " [А]" << *(Arr + i) << "<[B]" << *(Arrb + i);
        }
    }
    cout << "\n БОЛЬШЕ";

    for (int i = 0; i < num; ++i) {
        if (*(Arr + i) > *(Arrb + i)) {
            cout << " [А]" << *(Arr + i) << ">[B]" << *(Arrb + i);
        }
    }
    cout << "\n РАВНЫЕ";

    for (int i = 0; i < num; ++i) {
        if (*(Arr + i) == *(Arrb + i)) {
            cout << " [А]" << *(Arr + i) << "= [B]" << *(Arrb + i);
        }
    }
    delete[] Arr;
    delete[] Arrb;// очистка памяти
}
