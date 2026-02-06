#include <iostream>
using namespace std;
class Bank {
public :
    virtual void interest() {
        cout << "Bank interest rate: " << endl;
    }
};

class SBI : public Bank {
public:
    void interest () {
        cout << "SBI interest rate is 6%" << endl;
    }
};

int main ( ){
    Bank *b;
    SBI s;
    b = &s;
    b->interest();
    return 0;
}