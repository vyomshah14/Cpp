// triangle pattern
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the triangle pattern: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }



//with for loop
    int v;
    cout << "Triangle pattern using for loops:" << endl;
    cin >> v;
    for (int r = 1; r <= v; r++) {
        for (int c = 1; c <= r; c++) {
            cout << "* ";
        }
        cout << endl;
    }
return 0;
}