#include<iostream>
#include<math.h>
using namespace std;
void main()
{
    setlocale(LC_ALL, "Rus");
    const int size = 6;
    int a[size];
    double min;
    int nom = 0;
    cout << "������� ������������������ �����" << endl;
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    cin >> a[3];
    cin >> a[4];
    cin >> a[5];

    for (int i = size - 1; i >= 0; --i)
    {
        if (a[i] < 0)
        {
            cout << "��������� ������������� ����� ��������� ��� ������� " << i + 1 << ", ������� ����� = " << a[i] << endl;
            break;
        }
    }
}