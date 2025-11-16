#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> sonlar;
    int jami1=0, jami2=0;
    string num;
    cin >> num;
    if (num.length() == 6) {
        for (char n : num) {
            int l = n - '0';
            sonlar.push_back(l);
        }
        for (int i=0; i<3; i++) {
            jami1+= sonlar[i];
        }
        for (int i=3; i<6; i++) {
            jami2+= sonlar[i];
        }
        if (jami1 == jami2) {
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';
    return 0;
}
