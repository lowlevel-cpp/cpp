// #include <iostream>
// using namespace std;

// int main() {
//     int b;
//     cin >> b;
//     while ((b > 99 && b < 201) && (b%2 == 0)) {
//         cout << b + 2;
//         break;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int b;
    cin >> b;
    if (b > 99 && b < 201 && b % 2 == 0) {
        cout << b + 2;
    }
    return 0;
}