#include <iostream>
using namespace std;

int main() {
    int num[] = {10, 2, 30, 15, 28, 5};  // Array of numbers
    int value = 15;                      // Value to search
    int position = -1;                    // Default position (-1 means not found)

    // Loop through the array
    for (int i = 0; i < 6; i++) {
        if (value == num[i]) {
            position = i + 1;  // Store the position (1-based index)
            break;             // Exit the loop once found
        }
    }

    // Check if the value was found
    if (position == -1)
        cout << "Not Found" << endl;
    else
        cout << "The position of " << value << " is: " << position << endl;

    return 0;
}
