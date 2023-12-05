#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 5;
    int temp;

    cout << "Sebelum ditukar : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "Setelah Ditukar : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}