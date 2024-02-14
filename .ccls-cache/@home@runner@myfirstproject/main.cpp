#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> // для функції sort()

using namespace std;

int main() {
    int arraySize; // Змінна для розміру масиву

    // Перевіряємо введення користувача на валідність
    do {
        cout << "Введіть розмір масиву (більше 0): ";
        cin >> arraySize;
    } while (arraySize <= 0);

    int myArray[arraySize]; // Оголошення масиву

    srand(time(0));

    // Заповнюємо масив випадковими числами
    for (int i = 0; i < arraySize; ++i) {
        myArray[i] = rand() % 100; // Генеруємо випадкове число від 0 до 99
    }

    // Сортуємо масив
    sort(myArray, myArray + arraySize);

    // Виводимо масив на екран
    cout << "Відсортований масив: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
