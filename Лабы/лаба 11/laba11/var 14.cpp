//1.������ ����� ����� A � ���������, ������� ������ � ����� � 5 �� 10 ���, ������� ��� ����.
#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
    setlocale(0, "");
    int A, result = 0;
    cout << "������� A: ", cin >> A;
    for (int i = 5; i <= 10; ++i) {
        if ((A >> i) & 1 == 1) {
            ++result;
        }
    }
    cout << "����� ������ � ����� � � 5 �� 10 ���, ������� ��� ���� = " << result;
}