//2.	���������� � 0 � ����� �n ����� ����� �� ������� p.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int A, n, p; char num[33];
    cout << "������� ����� � ";
    cin >> A;
    cout << endl;
    _itoa_s(A, num, 2);
    cout << "����� � �������� ���� = " << num << endl;
    cout << " " << endl;
    cout << "������� c ������ ���� �������� ������ ";
    cin >> p;
    cout << endl;
    cout << "������� �������� �����? ";
    cin >> n;
    cout << endl;
    _itoa_s(A, num, 2);
    cout << "����� � � ��������  ����: " << num << endl;
    unsigned int mask = 1 << p - 1;
    for (int i = 0; i <= n; i++) {
        A ^= mask;
        mask <<= 1;
    }
    _itoa_s(A, num, 2);
    cout << "�������� �����: " << num << endl;
}