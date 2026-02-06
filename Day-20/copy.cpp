#include <iostream>
using namespace std;

class sample {
    public:
    int x;
    sample(int a){
        x = a;
    }
    sample(const sample &obj){  
        x = obj.x;
    }   
    void display(){
        cout << x << endl;
    }
};

int main(){
    sample s1(10);
    sample s2(s1);
    s2.display();
    return 0;
}
