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

   if (a > b && a > c) {
       cout << "The maximum number is: " << a << endl;
   } else if (b > c) {
       cout << "The maximum number is: " << b << endl;
   } else {
       cout << "The maximum number is: " << c << endl;
   }
}