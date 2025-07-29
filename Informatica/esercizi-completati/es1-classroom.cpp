#include <iostream>
using namespace std;

void input (int &n) {
  do {
    cout << "Inserire un numero da 1 a 10: ";
    cin >> n;
  }while (n < 1 or n > 10);
}

void output (int n) {
  for (int i=0; i <= n; i++) {
    cout << "*";
  }
}

int main () {
  int n;
  input(n);
  output(n);
  
  return 0;
}