#include <iostream>
#include <vector>

using namespace std;

struct Employee {
    string name;
    int id;
    int basic_salary;
    int bonus;
};

int main() {
    int n, j=0;
    cin >> n;
    vector<Employee> emp(n);
    
    for (int i=0; i<n; i++) {
        cin >> emp[i].name >> emp[i].id >> emp[i].basic_salary >> emp[i].bonus;
    }

    for (int i=0; i<n; i++) {
        cout << i+1 << ") " << emp[i].basic_salary + emp.at(i).bonus << "\n";
    }

}