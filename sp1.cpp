
#include <iostream>
using namespace std;

int main() {
    char grade;

    // Input: grade character
    cout << "Enter your grade (A-F): ";
    cin >> grade;

    // Convert to uppercase to handle lowercase input
    grade = toupper(grade);

    // Evaluate grade using switch-case
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Very Good!" << endl;
            break;
        case 'C':
            cout << "Good." << endl;
            break;
        case 'D':
            cout << "Needs Improvement." << endl;
            break;
        case 'E':
            cout << "Poor." << endl;
            break;
        case 'F':
            cout << "Fail." << endl;
            break;
        default:
            cout << "Invalid grade entered!" << endl;
    }

    return 0;
}

