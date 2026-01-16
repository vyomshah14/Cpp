#include <iostream>
using namespace std;

// class rectanglle{
// public:
//     int L,B;
//     int area()
//     {
//         return L * B;
//     }
// };
//  int main()
// {
//     rectanglle R;
//     R.L = 7;
//     R.B = 6;
//     cout << "Area " << R.area();
//     return 0;

//  }
 // making private 

class sqaure{
private:
    int L;
    int area() const {return L*L;}
public:
    void AreaoOfsqaure(int l) { L = l ;}
    int getarea() const {return area();}

};
int main(){
    sqaure S;
    S.AreaoOfsqaure(5);
    // S.AreaoOfsqaure = 5;
    cout << "Area of square" << S.getarea() << endl;
    return 0;

}