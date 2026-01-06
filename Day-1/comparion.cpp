#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter first numbers: ";
    cin >> a;
    cout << "Enter second numbers: ";
    int b;
    cin >> b;
    int c;
    cin >> c;

    int max = (a > b) ? (b > c ? b : c) : a;
    cout << "The maximum number is: " << max << endl;
}