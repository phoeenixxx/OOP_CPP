// =================================================================
/*
 * Assignment:
 * Write a class that implements a simple stack from scratch [cite: 152]
 * The class should be named Stack, and should contain:
 * - A private fixed array of integers of length 10. [cite: 153]
 * - A private integer to keep track of the size of the stack. [cite: 153]
 * - A public member function named reset() that sets the size to 0. [cite: 153]
 * - A public member function named push() that pushes a value on the stack. [cite: 153]
 * push() should return false if the array is already full, and true otherwise. [cite: 154]
 * - A public member function named pop() that pops a value off the stack and returns it. [cite: 154]
 * If there are no values on the stack, the code should exit via an assert. [cite: 155]
 * - A public member function named print() that prints all the values in the stack. [cite: 155]
 */
// =================================================================
#include <iostream>
#include <cassert>

using namespace std;

class Stack {
private:
    int m_array[10];
    int m_size;

public:
    void reset() {
        m_size = 0;
    }

    bool push(int value) {
        if (m_size == 10) {
            return false;
        }
        
        m_array[m_size] = value;
        m_size++; // Switched to postfix increment
        return true;
    }

    int pop() {
        assert(m_size > 0 && "Cannot pop from an empty stack");
        
        m_size--; // Switched to postfix decrement
        return m_array[m_size];
    }

    void print() {
        cout << "( ";
        for (int i = 0; i < m_size; i++) { // Switched to postfix increment
            cout << m_array[i] << ' ';
        }
        cout << ")\n";
    }
};

int main() {
    Stack stack;
    stack.reset();
 
    stack.print();
 
    stack.push(5);
    stack.push(3);
    stack.push(8);
    stack.print();
 
    stack.pop();
    stack.print();
 
    stack.pop();
    stack.pop();
 
    stack.print();
 
    return 0;
}
