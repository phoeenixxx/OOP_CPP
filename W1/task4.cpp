// =================================================================
/*
 * Exercise 4:
 * Write a program that:
 * - Asks the user how many names they wish to enter. [cite: 16]
 * - Dynamically allocates a string array. [cite: 17]
 * - Asks the user to enter each name. [cite: 18]
 * - Calls sort to sort the names. [cite: 19]
 * - Prints the sorted list of names. [cite: 20]
 */
// =================================================================
#include <algorithm> 
#include <iostream>
#include <string>

using namespace std;

int getNameCount() {
    cout << "How many names would you like to enter? ";
    int length = 0;
    cin >> length;
    return length;
}

void getNames(string* names, int length) {
    for (int i = 0; i < length; i++) {
        cout << "Enter name #" << i + 1 << ": ";
        cin >> names[i];
    }
}

void printNames(string* names, int length) {
    cout << "\nHere is your sorted list:\n";
    for (int i = 0; i < length; i++) {
        cout << "Name #" << i + 1 << ": " << names[i] << '\n';
    }
}

int main() {
    int length = getNameCount();
    
    string* names = new string[length];
    
    getNames(names, length);
    
    sort(names, names + length);
    
    printNames(names, length);
    
    delete[] names;
    
    return 0;
}
