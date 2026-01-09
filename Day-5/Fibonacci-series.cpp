// making a series of Fibonacci numbers
#include <iostream>
using namespace std;

int main() {
    int n,  first = 0, second = 1, nextTerm = 0;
    n = 10;

    cout << "Fibonacci Series: " << first << ", " << second << ", ";

    nextTerm = first + second;

    for (int i = 3; i <= n; ++i) {
        cout << nextTerm << ", ";
        first = second;
        second = nextTerm;
        nextTerm = first + second;
    }
    return 0;
}
