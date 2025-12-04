#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    if (a >= 0 && a <= 9 && b >= 0 && b <= 9) {
        if (a == b) {
            cout << a*10 << ' ' << b*10+1 << '\n';
        } else if (a == b-1) {
            cout << a << ' ' << b;
        } else cout << "-1";
    } else {
        cout << "-1";
    }

    return 0;
}