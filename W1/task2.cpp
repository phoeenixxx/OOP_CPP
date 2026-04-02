// =================================================================
/*
 * Exercise 2:
 * Write a C++ program to demonstrate swapping or values between 
 * two variables via pass by reference. [cite: 5]
 */
// =================================================================
#include <iostream>

using namespace std;

void swap(int &x, int &y);

int main() {
    int a = 5;
    int b = 9;
    
    cout << "This program swaps 2 values using reference parameters." << endl;
    cout << "Values before the swap:" << endl;
    cout << "a= " << a << " b= " << b << endl;
    
    swap(a, b);  
    
    cout << "Values after the swap:" << endl;
    cout << "a= " << a << " b= " << b << endl;
    
    return 0;
}

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
} 
