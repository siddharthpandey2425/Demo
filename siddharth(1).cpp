#include <iostream>
using namespace std;

int main() {
    int n = 4;  // Number of rows
    int number = 1;

    cout << "Floyd's Triangle with " << n << " rows:" << endl;

    for (int i = 1; i <= n; i++) {  // Rows
        for (int j = 1; j <= i; j++) {  // Numbers in each row
            cout << number << " ";
            number++;
        }
        cout << endl;  // Newline after each row
    }

    return 0;
}

