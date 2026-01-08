// prints number from 1 to 5 in which number is equal to the number inputed for ex 1 gives 1 2 gives 2 2
#include <iostream>
using namespace std;
int main(){
    int n;
    n = 5;
    for(int i =1; i <=n; i++){
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;   
    }
    return 0;
}