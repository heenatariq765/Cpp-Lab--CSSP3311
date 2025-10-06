//Row-wise Maximum
//Given a 2D array of integers, write a program to find the maximum element of
//each row using pointers
#include <iostream>
using namespace std;
void rowWiseMax(int (*matrix)[10], int m, int n, int *maxArr) {
    for (int i = 0; i < m; i++) {
        maxArr[i] = matrix[i][0];
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] > maxArr[i]) {
                maxArr[i] = matrix[i][j];
            }
        }
    }
};
int main() {
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    int matrix[10][10];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int maxArr[10];
    rowWiseMax(matrix, m, n, maxArr);
    cout << "Maximum elements of each row:" << endl;
    for (int i = 0; i < m; i++) {
        cout << "Row " << i + 1 << ": " << maxArr[i] << endl;
    }
    return 0;
}