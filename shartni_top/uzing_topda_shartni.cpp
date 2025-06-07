#include <iostream>
#include<cctype>
using namespace std;

int main() {
    string str;
    cin >> str;
    if (str.length() == 7 && str[0] == 'A') {
        bool ok = true;
        for (int i = 1; i < 7; i++) {
            if (!isdigit(str[i])) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << 1 << endl;
        }
    }

    return 0;
    
}