 //Sum of Even and Odd Elements
//Given an array of integers, write a program to find the sum of even elements and
//odd elements separately using pointer arithmetic.
#include <iostream>
using namespace std;
void sumEvenOdd(int *arr, int n, int &evenSum, int &oddSum) {
    evenSum = 0;
    oddSum = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) {
            evenSum += *(arr + i);
        } else {
            oddSum += *(arr + i);
        }
    }
};
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " integers:";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }
    int evenSum, oddSum;
    sumEvenOdd(arr, n, evenSum, oddSum);
    cout << "Sum of even elements: " << evenSum << endl;
    cout << "Sum of odd elements: " << oddSum << endl;
    delete[] arr;
    return 0;
}