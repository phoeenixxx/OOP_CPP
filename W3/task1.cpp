// =================================================================
/*
 * HomeWork [cite: 158]
 * Create a class called IntPair that holds two integers. [cite: 159]
 * This class should have two member variables to hold the integers. [cite: 159]
 * You should also create two member functions: one named "set" that will 
 * let you assign values to the integers, and one named "print" that will 
 * print the values of the variables. [cite: 160]
 * The provided main function must execute and produce the expected
 * Pair(1, 1) and Pair(2, 2) output. [cite: 161, 164, 165]
 */
// =================================================================
#include <iostream>

using namespace std;

class IntPair {
private:
    int m_val1;
    int m_val2;

public:
    IntPair(int val1 = 0, int val2 = 0) {
        m_val1 = val1;
        m_val2 = val2;
    }

    void set(int val1, int val2) {
        m_val1 = val1;
        m_val2 = val2;
    }

    void print() {
        cout << "Pair(" << m_val1 << ", " << m_val2 << ")\n";
    }
};

int main() {
    IntPair p1;
    p1.set(1, 1);
    
    IntPair p2{ 2, 2 }; 
    
    p1.print();
    p2.print(); 
    
    return 0; 
}
