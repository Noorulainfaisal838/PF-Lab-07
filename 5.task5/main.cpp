#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int numbers[size];

   
    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < size; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

  
    cout << "\nArray in reverse order:\n";
    for (int i = size - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}