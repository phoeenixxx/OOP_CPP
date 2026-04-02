// =================================================================
/*
 * Exercise 1: 
 * Write a C++ program to output the content of 3 element integer 
 * array using pointers( output the adress of each element as well) [cite: 3]
 */
// =================================================================
#include <iostream>

using namespace std;

const int MAX = 3;

int main () {
    int var[MAX] = {10, 100, 200};
    int *ptr;
    
    ptr = var;
    
    for (int i = 0; i < MAX; i++) {
        cout << "Address of var[" << i << "] = " << ptr << endl;
        cout << "Value of var[" << i << "] = " << *ptr << endl;
        
        ptr++;
    }
    
    return 0;
}
