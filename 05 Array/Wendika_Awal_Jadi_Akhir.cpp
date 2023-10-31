#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;
    cin.ignore();

    string kalimat[1000];
    for (int i = 0; i < q; i++) {
        getline(cin, kalimat[i]);
    }

    for (int i = q - 1; i >= 0; i--) {
        cout << kalimat[i] << endl;
    }

    return 0;
}