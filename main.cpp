#include <iostream>

// Функція для обчислення середнього арифметичного значень елементів масиву
double average(const int arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    const int arraySize = 5; // Розмір масиву
    int myArray[arraySize]; // Оголошення масиву

    // Заповнення масиву
    std::cout << "Введіть " << arraySize << " елементів масиву:\n";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Елемент " << i << ": ";
        std::cin >> myArray[i];
    }

    // Виведення масиву
    std::cout << "Вміст масиву:\n";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Обчислення та виведення середнього арифметичного
    std::cout << "Середнє арифметичне значень елементів масиву: " << average(myArray, arraySize) << std::endl;

    return 0;
}

