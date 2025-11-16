#include <iostream>

using namespace std;

int main() {
    int n, m, k, d;
    cin >> n >> m >> k >> d;
    int avtobus = n*m+d;
    int uzi = n*k;

    if (avtobus <= uzi) {
        cout << avtobus << '\n';
    } else if (uzi < avtobus) {
        cout << uzi << '\n';
    }

    return 0;
}
