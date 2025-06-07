#include <iostream>
using namespace std;

int main() {
    int raqam;
    do {
        cin >> raqam;
    } while (raqam > 1000 || raqam < 1);
    if ((raqam%2)==0)   cout << raqam << endl;
    else    cout << raqam * 2;
    return 0;
}