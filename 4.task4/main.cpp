#include <iostream>
using namespace std;

int main() {
    const int size = 7;
    int numbers[size];
    int countMultiplesOfFive = 0;

    
    cout << "Enter seven integers:\n";
    for (int i = 0; i < size; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
        
     
        if (numbers[i] % 5 == 0) {
            countMultiplesOfFive++;
        }
    }

  
    cout << "\nNumber of integers that are multiples of five: " << countMultiplesOfFive << endl;

    return 0;
}