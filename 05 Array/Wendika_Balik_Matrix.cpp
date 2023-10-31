#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int matrix[x][y];

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = x - 1; i >= 0; i--) {
        for (int j = y - 1; j >= 0; j--) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}