#include <iostream>
#include <string>
using namespace std;

int main() {
    string dibalik;
    getline(cin, dibalik);

    for (int i = dibalik.size() - 1; i >= 0; i--) {
        cout << dibalik[i];
    }

    cout << endl;

    return 0;
}