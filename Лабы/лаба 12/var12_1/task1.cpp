#include <iostream>

using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");
    int num, z; // ������ �������
    cout << "���-�� �������� � �������: ";
    cin >> num; // ��������� �� ������������ ������� �������

    int* Arr = new int[num]; // ��������� ������ ��� �������  *(Arr+i) - ��������� Arr[i] -id

    for (int i = 0; i < num; i++) {
        *(Arr + i) = rand() % 99;
    }

    int* Arrb = new int[num];

    for (int i = 0; i < num; i++) {
        *(Arrb + i) = rand() % 99;
    }

    cout << "\n��� ������ A: ";

    for (int i = 0; i < num; ++i) {
        cout << *(Arr + i) << " ";
    }

    cout << "\n��� ������ B: ";
    for (int i = 0; i < num; ++i) {
        cout << *(Arrb + i) << " ";
    }

    cout << "\n ������";

    for (int i = 0; i < num; ++i) {
        if (*(Arr + i) < (*(Arrb + i))) {
            cout << " [�]" << *(Arr + i) << "<[B]" << *(Arrb + i);
        }
    }
    cout << "\n ������";

    for (int i = 0; i < num; ++i) {
        if (*(Arr + i) > *(Arrb + i)) {
            cout << " [�]" << *(Arr + i) << ">[B]" << *(Arrb + i);
        }
    }
    cout << "\n ������";

    for (int i = 0; i < num; ++i) {
        if (*(Arr + i) == *(Arrb + i)) {
            cout << " [�]" << *(Arr + i) << "= [B]" << *(Arrb + i);
        }
    }
    delete[] Arr;
    delete[] Arrb;// ������� ������
}