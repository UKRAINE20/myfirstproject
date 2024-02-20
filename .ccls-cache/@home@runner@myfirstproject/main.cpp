#include <iostream>
using namespace std;
double average(const int arr[], int size) {
  double sum = 0.0;
  for (int i = 0; i < size; ++i) {
  }
  sum += arr[i];
}
return sum / size;
}

int min(const int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
  const int arraySize = 5;
  int myArray[arraySize];

  cout << "Введіть " << arraySize << " елементів масиву:\n";
  for (int i = 0; i < arraySize; ++i) {
    cout << "Елемент " << i << ": ";
    cin >> myArray[i];
  }

  cout << "Вміст масиву:\n";
  for (int i = 0; i < arraySize; ++i) {
    std::cout << myArray[i] << " ";
  }

  cout << "Середнє арифметичне значень елементів масиву: "
       << average(myArray, arraySize) << endl;

  cout << "Мінімальний елемент масиву: " << min(myArray, arraySize) << endl;

  return 0;
}
