#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include<Windows.h>


using namespace std;

struct University {
    string name;
    string address;
    vector<string> specialties;
    vector<int> competition;
    vector<int> pay;
};

void inputUniversity(University& university) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "������� ���: ";
    cin >> university.name;
    cout << "������� �����: ";
    cin >> university.address;
    int numSpecialties;
    cout << "������� ���������� ��������������: ";
    cin >> numSpecialties;
    university.specialties.resize(numSpecialties);
    university.competition.resize(numSpecialties);
    university.pay.resize(numSpecialties);
    for (int i = 0; i < numSpecialties; ++i) {
        cout << "������� �������������: " << i + 1 << ": ";
        cin >> university.specialties[i];
        cout << "����������� � �������� �� " << university.specialties[i] << ": ";
        cin >> university.competition[i];
        cout << "������� ������ �� " << university.specialties[i] << ": ";
        cin >> university.pay[i];
    }
}

void outputUniversity(const University& university) {
    cout << "���: " << university.name << endl;
    cout << "�����: " << university.address << endl;
    int numSpecialties = university.specialties.size();
    cout << "���������� ��������������: " << numSpecialties << endl;
    for (int i = 0; i < numSpecialties; ++i) {
        cout << "������������� " << i + 1 << ": " << university.specialties[i] << endl;
        cout << "����������� �� " << university.specialties[i] << ": " << university.competition[i] << endl;
        cout << "������� ��" << university.specialties[i] << ": " << university.pay[i] << endl;
    }
}

void deleteUniversity(vector<University>& universities, int index) {
    universities.erase(universities.begin() + index);
}

int findUniversity(const vector<University>& universities, const string& name) {
    for (int i = 0; i < universities.size(); ++i) {
        if (universities[i].name == name) {
            return i;
        }
    }
    return -1;
}

int findSpecialty(const University& university, const string& specialty) {
    for (int i = 0; i < university.specialties.size(); i++) {
        if (university.specialties[i] == specialty) {
            return i;
        }
    }
    return -1;
}