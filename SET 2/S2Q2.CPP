//Reverse an Array
//Write a program to reverse an array of size n using pointers (do not use indexing
//like arr[i]).
#include <iostream>
using namespace std;
void reverseArray(int *arr, int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = *(arr + start);
        *(arr + start) = *(arr + end);
        *(arr + end) = temp;
        start++;
        end--;
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
    reverseArray(arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}