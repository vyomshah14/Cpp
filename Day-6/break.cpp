#include <iostream>
using namespace std;
int main(){
    for(int i=0; i<10; i++){
        if(i==5){
            break;
        }
        cout << i << " ";
    }
    return 0;
}
// continue

//     for(int j = 0; i < 10; i++) 
//         if (i == 5) {
//             continue;
//         }
//         cout << j << " ";
// }