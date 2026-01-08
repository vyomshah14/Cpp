// reverse of the number
#include <iostream>
using namespace std;
int main(){
    int number = 1234, rev = 0;
    while(number != 0){
        rev = rev * 10 + number%10;
        number = number/10;
    }
    cout << "Reversed Number: " << rev << endl;
}