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

    cout << "Введите имя: ";
    cin >> university.name;
    cout << "Введите адрес: ";
    cin >> university.address;
    int numSpecialties;
    cout << "Введите количество специальностей: ";
    cin >> numSpecialties;
    university.specialties.resize(numSpecialties);
    university.competition.resize(numSpecialties);
    university.pay.resize(numSpecialties);
    for (int i = 0; i < numSpecialties; ++i) {
        cout << "Введите специальность: " << i + 1 << ": ";
        cin >> university.specialties[i];
        cout << "Участвовать в конкурсе на " << university.specialties[i] << ": ";
        cin >> university.competition[i];
        cout << "Введите оплату за " << university.specialties[i] << ": ";
        cin >> university.pay[i];
    }
}

void outputUniversity(const University& university) {
    cout << "Имя: " << university.name << endl;
    cout << "Адрес: " << university.address << endl;
    int numSpecialties = university.specialties.size();
    cout << "Количество специальностей: " << numSpecialties << endl;
    for (int i = 0; i < numSpecialties; ++i) {
        cout << "Специальность " << i + 1 << ": " << university.specialties[i] << endl;
        cout << "Конкуренция за " << university.specialties[i] << ": " << university.competition[i] << endl;
        cout << "Платить за" << university.specialties[i] << ": " << university.pay[i] << endl;
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
