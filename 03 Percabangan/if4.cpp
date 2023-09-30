
#include <iostream>
using namespace std;

int main() {
    int bilangan;
    cin >> bilangan;

    if (bilangan >= -1000 && bilangan <= 1000) {
        if (bilangan % 2 == 0) {
            cout << "Genap" << endl;
        } else {
            cout << "Ganjil" << endl;
        }
    }
    return 0;
}
