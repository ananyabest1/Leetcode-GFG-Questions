#include <iostream>
using namespace std;

void addMatrices(int matrix1[][100], int matrix2[][100], int sumMatrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int matrix1[100][100];
    int matrix2[100][100];
    int sumMatrix[100][100];
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }
    addMatrices(matrix1, matrix2, sumMatrix, rows, cols);
    cout << "Sum of the two matrices:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
