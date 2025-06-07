#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    string qiymat;
    int b = a.length();
    if (b%2 == 0) {
        qiymat = "NO";
    }
    for (char c : a) {
        int d = c%2;
        if (d%2 == 0) {
            qiymat = "NO";
            break;
        }
    }
    
    int k = a.length();
    if (k%2 == 1) {
        qiymat = "YES";
    }
    cout << qiymat << endl;
    

    

    return 0;
}