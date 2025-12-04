#include <iostream>

using namespace std;

int main() {
    string str;
    int n, x = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> str;
        if (str == "X++" || str == "++X") x++;
        else x--;
    }

    cout << x << '\n';
    return 0;
}