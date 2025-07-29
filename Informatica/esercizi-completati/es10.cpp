#include <iostream>
using namespace std;

int square_root(int);

int main () {
    int number;

    do {
        cout << "Inserire un numero intero maggiore di 0: ";
        cin >> number;
    }while(number < 1);

    cout << "La radice e': " << square_root(number);

    return 0;
}

int square_root(int n) {
    int i;

    for (i=1; i*i <= n; i++) {}

    return i - 1;
}
