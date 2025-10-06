//Display a 3D Matrix
//Write a program to input and print elements of a 3 x 3 x 3 cube using only pointers
//(no arr[i][j][k] syntax).
#include <iostream>
using namespace std;
void display3DArray(int (*arr)[3][3], int x, int y, int z) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << *(*(*(arr + i) + j) + k) << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};
int main() {
    int arr[3][3][3];
    cout << "Enter elements of the 3D array (3x3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cin >> arr[i][j][k];
            }
        }
    }
    cout << "Elements of the 3D array:" << endl;
    display3DArray(arr, 3, 3, 3);
    return 0;
}