#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1 = "Hello, ";
    string s2 = "World!";
    string s3 ; 
    s3 = s1 + " " + s2;
    cout << "concatenated string is: " << s3 << endl;

    s1 += s2;
    cout << "updated string is: " << s1 << endl;
// 
    if (s1 == s2) {
        cout << "strings are equal" << endl;
    } else {
        cout << "string is not equal to string " << endl;
    }
// comparing using <
    if (s1 < s2) {
        cout << s1 << " comes before " << s2 << endl;
    } else {
        cout << s1 << " comes after " << s2 << endl;
    }
// access character using []
    cout << "First character of s2: " << s2[0] << endl;
    return 0;
}