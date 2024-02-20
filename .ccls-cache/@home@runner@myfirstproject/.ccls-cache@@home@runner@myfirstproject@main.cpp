#include <iostream>
using namespace std;
double average(const int arr[], int size) {
  double sum = 0.0;
  for (int i = 0; i < size; ++i) {
    sum += arr[i];
  }
  return sum / size;
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
  cout << endl;

  cout << "Середнє арифметичне значень елементів масиву: "
       << average(myArray, arraySize) << endl;

  return 0;
}
