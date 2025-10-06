//Pointer to Array of Pointers
//Create an array of string pointers (e.g., names of 5 students) and print them using
//pointer notation.
#include <iostream>
using namespace std;
void displayNames(string **names, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(names[i]) << endl;
    }
};
int main() {
    int n = 5;
    string *names[5];
    string nameInputs[5] = {"abc", "def", "ghi", "jkl", "mno"};
    for (int i = 0; i < n; i++) {
        names[i] = &nameInputs[i];
    }
    cout << "Names of the students:" << endl;
    displayNames(names, n);
    return 0;
}