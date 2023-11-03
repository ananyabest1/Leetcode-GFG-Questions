#include <iostream>
using namespace std;

int main() {
    int arr[6];
    int sum = 0;

    for (int i = 0; i < 6; i++) {
        arr[i] = 1,2,3,4,5,6;
        cout << arr[i] << " ";
    }

    for (int i = 0; i < 6; i++) {
        sum += arr[i];
    }
    cout << "Total sum: " << sum << endl;

    return 0;
}

