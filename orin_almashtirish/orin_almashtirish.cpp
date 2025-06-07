#include <iostream>
using namespace std;

int main() {
    string a;
    getline(cin, a);

    int space = a.find(' ');
    string a_sub = a.substr(space + 1);
    string b_sub = a.substr(0, space);
    cout << a_sub << " " << b_sub;
}