#include <iostream>
using namespace std;

class book{
    public:
        string Name;
        float price;
        void display(){
            cout << "Book name: " << Name << endl;
            cout << "Book price: " << price << endl;
        }
};

int main() {
    book B1;
    B1.Name = "C++ Programming";
    B1.price = 29.99;
    B1.display();

    return 0;
}