#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add two floats
    float add(float a, float b) {
        return a + b;
    }

    // Optional: Function to add three integers (extending the example)
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Optional: Function to add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;
    
    // Integer addition
    cout << "Integer addition: " << c.add(10, 20) << endl;
    
    // Float addition (using 'f' suffix to specify float literals)
    cout << "Float addition: " << c.add(5.5f, 4.5f) << endl;
    
    // Optional examples:
    // cout << "Three integer addition: " << c.add(10, 20, 30) << endl;
    // cout << "Double addition: " << c.add(5.5, 4.5) << endl;
    
    return 0;
}