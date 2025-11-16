#include <iostream>

using namespace std;

int main() {
    string son;
    long long jami = 0;
    cin >> son;
    for (char c : son) {
        long long son_int = c - '0';
        jami = jami + son_int;
    }

    cout << jami << '\n';
    return 0;
}
