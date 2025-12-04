#include <iostream>
#include <vector>

using namespace std;

struct Book {
    string title;
    string author;
    int copies;
};

int main() {
    vector<Book> vbook;

    while (true) {
        char str;
        cout << "To see the menu write 'y'\n>>> ";
        cin >> str;

        if (str == 'y' || str == 'Y') {
            cout << "Enter 1 to add books\n"
             << "Enter 2 to see all the availabe books\n"
             << "Enter 3 to search an book by title\n";
        } else break;

        int n;
        cin >> n;

        if (!n) break;

        if (n == 1) {
            int a;
            cout << "How many books are you entering?\n>>> ";
            if(!(cin >> a)) {
                break;
            }


            int oldSize = vbook.size();
            vbook.resize(oldSize + a);

            for (int i = oldSize; i < vbook.size(); i++) {
                cout << "Name of the book\n>>> ";
                getline(cin >> ws, vbook[i].title);
                cout << "Name of the author\n>>> ";
                getline(cin >> ws, vbook[i].author);
                cout << "How many copies\n>>> ";
                cin >> vbook[i].copies;
            }
        }
        else if (n == 2) {
            if (vbook.empty()) cout << "There are no books stored\n";
            else {
                for (int i=0; i<vbook.size(); i++) {
                    cout << vbook[i].author << ", " << vbook[i].title << ", " << vbook[i].copies << " copies\n";
                }
            }
        } else if (n == 3) {
            string nameOfBook;
            cout << "Enter the name of the book\n>>> ";
            getline(cin >> ws, nameOfBook);

            bool found = false;

            for (int i=0; i<vbook.size(); i++) {
                if (vbook[i].title == nameOfBook) {
                    cout << vbook[i].author << ", " << vbook[i].title << "\n";
                    found = true;
                    break;
                }

            }

            if (!found) {
                cout << "Not found :(\n";
            }
        }
    }

    return 0;
}