#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector <int> sonlar(a);
    for (int i=0; i<sonlar.size(); i++) {
        cin >> sonlar[i];
    }

    unordered_map<int, int> counts;
    for (int num : sonlar) {
        counts[num]++;
    }

    int mostFrequent = 0;
    int maxCount = 0;
    for (const auto& pair : counts) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequent = pair.first;
        }
    }

    cout << sonlar.size() - maxCount <<'\n';
    return 0;
}
