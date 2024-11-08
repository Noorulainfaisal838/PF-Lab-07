#include <iostream>
using namespace std;

int main() {
    const int numStudents = 10;
    int hours[numStudents];
    int maxHours = 0;
    int maxIndex = 0;

    
    cout << "Enter the hours studied by each of the ten students:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> hours[i];
        
    
        if (hours[i] > maxHours) {
            maxHours = hours[i];
            maxIndex = i;
        }
    }

 
    cout << "\nHours studied by each student:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << ": " << hours[i] << " hours\n";
    }

   
    cout << "\nStudent " << (maxIndex + 1) << " studied the most with " << maxHours << " hours.\n";

    return 0;
}