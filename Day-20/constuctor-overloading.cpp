#include <iostream>
using namespace std;

class Student

public:
    demo(){
        cout << "Default constructor !" << endl;
    }

    demo(int a){
        cout << "Parameterized constructor !" << endl;
    }
int main()
{
    // Creating objects using the default constructor
    Student s1;
    Student s2;

    return 0;
}