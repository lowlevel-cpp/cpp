#include <iostream>
using namespace std;

int main() {
	long long N, P;
  	cin >> N >> P;
  	if (N > -1 && N < 1000000000) {
    	if (P > -1 && P < 1000000000) {
            cout << *N*P;
        }
    }
    return 0;
}