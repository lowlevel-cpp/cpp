#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    switch (a) {
        case 1: cout << 6 << endl; break;
        case 2: cout << 5 << endl; break;
        case 3: cout << 4 << endl; break;
        case 4: cout << 3 << endl; break;
        case 5: cout << 2 << endl; break;
        case 6: cout << 1 << endl; break;
        default: cout << "Invalid input.\n";
    }

    return 0;
}