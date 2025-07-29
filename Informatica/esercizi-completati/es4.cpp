#include <iostream>
using namespace std;

void user_input(int &val) {
  do {
    cout << "Inserire un numero compreso nell'intervallo [1, 10], 0 per uscire: ";
    cin >> val;
  }while(val > 10 or val < 0);
}

void create_table(int val) {
  for (int i = 1; i <= val; i++) {
    for (int j = 1; j <= val; j++) {
      cout << (i * j) << "\t";
    }
    cout << endl;
  }
}


int main () {
  int val;

  user_input(val);

  if (val != 0) {
    create_table(val);
  }

  return 0;
}
