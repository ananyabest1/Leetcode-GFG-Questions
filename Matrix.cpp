#include <iostream>
using namespace std;

void printcol(int nums[][4], int rows, int col, int x) {
    bool found = false; // Add a flag to track if x is found
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (nums[i][j] == x) {
                found = true;
                cout << "Found " << x << " at position (" << i << ", " << j << ")." << endl;
            }
        }
    }
    if (!found) {
        cout << x << " not found in the array." << endl;
    }
}

int main() {
    int nums[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int x;
    cin >> x;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

    printcol(nums, 3, 4, x);

    return 0;
}
