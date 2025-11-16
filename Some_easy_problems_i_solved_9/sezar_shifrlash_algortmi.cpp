#include <iostream>
#include <string>

using namespace std;

int main() {
    int k;
    string text;
    cin >> k >> text;

    for (char &c : text) {

        if (c >= 'a' && c <= 'z') {
            char new_c = c + k;

            while (new_c > 'z') {
                new_c = 'a' + (new_c - 'z' -1);
            }

            c = new_c;
        }

        else if (c >= 'A' && c <= 'Z') {
            char new_c = c + k;

            while (new_c > 'Z') {
                new_c = 'A' + (new_c - 'Z' - 1);
            }

            c = new_c;
        }
    }

    cout << text << '\n';
    return 0;
}