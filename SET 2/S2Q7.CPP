//Sum of All Elements
//Input elements of a 2 x 2 x 2 3D array and find the sum of all elements using
//pointer arithmetic.
#include <iostream>
using namespace std;
int sum3DArray(int (*arr)[2][2], int x, int y, int z) {
    int totalSum = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                totalSum += *(*(*(arr + i) + j) + k);
            }
        }
    }
    return totalSum;
};
int main() {
    int arr[2][2][2];
    cout << "Enter elements of the 3D array (2x2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cin >> arr[i][j][k];
            }
        }
    }
    int totalSum = sum3DArray(arr, 2, 2, 2);
    cout << "Sum of all elements: " << totalSum << endl;
    return 0;
}