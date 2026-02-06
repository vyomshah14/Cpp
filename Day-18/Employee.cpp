#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    string designation;
    double salary;
};

int main() {
    ofstream fout;
    fout.open("employees.txt", ios::app);

    Employee employees[4] = {
        {101, "Alice Smith", "Manager", 75000.0},
        {102, "Bob Johnson", "Developer", 60000.0},
        {103, "Charlie Brown", "Designer", 55000.0},
        {104, "Diana Prince", "Analyst", 65000.0}
    };

    for (int i = 0; i < 4; i++) {
        fout << employees[i].id << ", " << employees[i].name << ", " << employees[i].designation << ", " << employees[i].salary << endl;
    }

    fout.close();
    cout << "4 Employee records appended successfully." << endl;
    return 0;
}