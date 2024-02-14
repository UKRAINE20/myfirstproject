#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int arraySize; 
    cout << "Введіть розмір масиву: ";
    cin >> arraySize; 

    int myArray[arraySize]; 

    srand(time(0));

    
    for (int i = 0; i < arraySize; ++i) {
        myArray[i] = rand() % 100; 
    }

    cout << "Масив: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
