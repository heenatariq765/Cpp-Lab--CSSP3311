//Transpose of Matrix
//Write a program to find the transpose of a given n x n matrix using pointer
//notation.
#include <iostream>
using namespace std;
void transpose(int *matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = *(matrix + i * n + j);
            *(matrix + i * n + j) = *(matrix + j * n + i);
            *(matrix + j * n + i) = temp;
        }
    }
}
int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    int *matrix = new int[n * n];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> *(matrix + i * n + j);
        }
    }
    transpose(matrix, n);

    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(matrix + i * n + j) << " ";
        }
        cout << endl;
    }
    delete[] matrix;
    return 0;
}