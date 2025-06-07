#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;


    if ((a > b && a > c) || (a == b && a > c)) cout << a;
    else if (b > a && b > c || (b == c && b > a)) cout << b;
    else if (c > a && c > b) cout << c;
    else cout << a;

    return 0;
}