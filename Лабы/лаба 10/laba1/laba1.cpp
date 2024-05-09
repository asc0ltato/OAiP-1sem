#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    int i = 0, n, zero_b = -1, zero_e = -1;
    cout << "Введите размер массива:\n";
    cout << "n = ";
    cin >> n;
    int* arr = new int[n];
    cout << "Введите массив:\n";

    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
   
    for (i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zero_e = i;
            if (zero_b == -1) {
                zero_b = i;
            }
        }
    }
    if (zero_b == -1 && zero_e == -1) {
        cout << "Нет нулевых элементов\n";
    }
   
    else {
        cout << "Индекс первого нулевого элемента = " << zero_b + 1 << "\n";
        cout << "Индекс последнего нулевого элемента = " << zero_e + 1 << "\n";
    }
    return 0;
}
