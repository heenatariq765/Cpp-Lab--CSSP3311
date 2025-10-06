//Matrix Addition
//Input two 2D matrices (size m x n) and find their sum. Pass the 2D arrays to a
//function using pointers.
#include <iostream>
using namespace std;
void sumMatrices(int (*matrix1)[10], int (*matrix2)[10], int (*result)[10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
};
int main() {
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    int matrix1[10][10], matrix2[10][10], result[10][10];
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }
    sumMatrices(matrix1, matrix2, result, m, n);
    cout << "Sum of the two matrices:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}