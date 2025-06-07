#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if (a <= 0 || a >= 1e9 || b <=0 || b >= 1e9) 
        return 0;
    
    long long yuz = a * b;
    long long perimetr = 2 * (a + b);
    cout << max(yuz, perimetr);
}