//Operator Overloading
#include <iostream>
using namespace std;
class Compare {
public:
    int x;
    Compare(int a) {
        x = a;
    }
    bool operator >(Compare obj) {
        return x > obj.x;
    }
};
int main(){
    Compare c1(10);
    Compare c2(5);
    if(c1 > c2){
        cout << "c1 is greater than c2" << endl;
    }
    else{
        cout << "c1 is not greater than c2" << endl;
    }
    return 0;
}