#include <iostream>
#include <ctime>

using namespace std;
void main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int size;
    cout << "������� ����������� �������: ";
    cin >> size;
    int* arr = new int[size];
    int t;

    for (int i = 0; i < size; i++)
        arr[i] = 1 + rand() % 99;

    cout << "�������� ������: ";

    for (int i = 0; i < size; i++)
        cout << *(arr + i) << " ";
    
    cout << endl;
    cout << endl;
    cout << "������� t: ";
    cin >> t;

    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (*(arr + j) >= t && *(arr + j + 1) <= t) {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << " ";
        cout << endl;
}