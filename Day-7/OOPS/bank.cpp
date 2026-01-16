
#include <iostream>
using namespace std;

class Bankaccount{
private:
    long AccountNumber;
    int Password;
    // moved to public in original code; keep private but provide public setter if needed
    void setaccountdetails(long accnum, int pass){
        AccountNumber = accnum;
        Password = pass;
    }
public:
    // public wrapper to allow main to set account details
    void initAccount(long accnum, int pass){
        setaccountdetails(accnum, pass);
    }

    float getbalance() const { return Balance; }

    string Name;
    float Balance;
    void display() const {
        cout << "Account holder: " << Name << endl;
        cout << "Account balance: " << Balance << endl;
    }
};

int main(){
    Bankaccount N1;
    N1.Name = "Vyom";
    N1.Balance = 10000.50f;
    N1.initAccount(12345, 1234); // use public initializer
    N1.display();
    return 0;
}
